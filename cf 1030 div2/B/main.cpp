#include <iostream>
#include <vector>
#include <algorithm> // Required for std::reverse, std::find
#include <map>       // Required for std::map
#include <set>       // Required for std::set
#include <numeric>   // Required for std::iota

// Using specific includes instead of <bits/stdc++.h> is good practice
// #define ll long long // Not used in this snippet
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define TC int t; cin >> t; while(t--)

using namespace std;
bool debug = 0;

void prefill_mat(int n, vector<vector<int>> & mat) {
    for(int r=0; r<n; r++) {
        for(int c=0; c<n; c++) {
            mat[r][c] = c+1;
        }
    }

    // This creates a pattern that might lead to duplicates in columns
    for(int r=0; r<n; r++) {
        // Reverse only the first 'r+1' elements of the row
        // For example, for n=3:
        // r=0: {1,2,3} -> reverse(0,1) -> {1,2,3} (no change)
        // r=1: {1,2,3} -> reverse(0,2) -> {2,1,3}
        // r=2: {1,2,3} -> reverse(0,3) -> {3,2,1}
        reverse(mat[r].begin(), mat[r].begin() + r + 1);
    }
}

void print_mat(int n, vector<vector<int>> & mat) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << '\n';
    }
}

// Returns {duplicate_number, row_id_of_last_occurrence_of_duplicate} or {-1, -1} if no duplicates
// Note: This returns the *last* row index of the duplicate.
// The solve function will now iterate to find the *best* row based on the missing number.
pair<int, int> check_duplicates(int n, int c, const vector<vector<int>> & mat) {
    map<int, int> count_map;
    map<int, int> last_row_id_map; // Stores the last seen row index for each number in column 'c'

    for(int r = 0; r < n; r++) {
        count_map[mat[r][c]]++;
        last_row_id_map[mat[r][c]] = r; // Update with the latest row index
    }

    for(auto& entry : count_map) {
        if (entry.second > 1) { // If a number appears more than once
            return make_pair(entry.first, last_row_id_map[entry.first]);
        }
    }
    return make_pair(-1, -1); // No duplicate found
}

// Checks if a column contains numbers from 1 to n exactly once
bool check_perm(int n, int c, const vector<vector<int>> & mat) {
    set<int> s1;
    for(int r=0; r<n; r++) {
        // Essential check: values must be within the 1 to n range to be a permutation
        if (mat[r][c] < 1 || mat[r][c] > n) {
            return false;
        }
        s1.insert(mat[r][c]);
    }
    return (s1.size() == n);
}

// Helper function to find the missing number in a column
int find_missing_number(int n, int c, const vector<vector<int>> & mat) {
    set<int> present_numbers;
    for (int r = 0; r < n; ++r) {
        // Only consider numbers within the expected range [1, n]
        if (mat[r][c] >= 1 && mat[r][c] <= n) {
            present_numbers.insert(mat[r][c]);
        }
    }

    for (int i = 1; i <= n; ++i) {
        if (present_numbers.find(i) == present_numbers.end()) {
            return i; // This number is missing
        }
    }
    return -1; // Should theoretically not be reached if check_perm returns false due to duplicates/missing numbers
}

void solve(int n, vector<vector<int>> & mat) {
    for(int c=1; c<n; c++) { // Iterate through all columns (0 to n-1)
        bool is_perm = check_perm(n, c, mat);

        if (is_perm) {
            cout << "Column " << c << " is a valid permutation. Continuing.\n";
            continue;
        } else {
            cout << "Column " << c << " is NOT a valid permutation. Attempting to fix...\n";
            pair<int, int> dups_info = check_duplicates(n, c, mat);
            int duplicate_number = dups_info.first;
            
            int missing_number = find_missing_number(n, c, mat);

            if (duplicate_number != -1 && missing_number != -1) {
                cout << "  Duplicate number found: " << duplicate_number << " in column " << c << ".\n";
                cout << "  Missing number for column " << c << " is: " << missing_number << ".\n";

                int row_to_reverse_found = -1;

                // Iterate through all rows to find one that:
                // 1. Has the duplicate_number in the current column 'c'.
                // 2. Contains the missing_number anywhere within that row.
                for (int r = 0; r < n; ++r) {
                    if (mat[r][c] == duplicate_number) {
                        // Check if the missing_number is present in this row 'r'
                        auto it = std::find(mat[r].begin(), mat[r].end(), missing_number);
                        if (it != mat[r].end()) {
                            // Found a suitable row! This row 'r' has the duplicate in column 'c'
                            // AND it contains the missing number somewhere.
                            row_to_reverse_found = r;
                            break; // Found our target row, exit loop
                        }
                    }
                }

                if (row_to_reverse_found != -1) {
                    cout << "  Found suitable row " << row_to_reverse_found
                         << " (contains duplicate " << duplicate_number
                         << " in column " << c << " and also missing number " << missing_number << "). Reversing it.\n";

                    // Reverse the entire chosen row
                    std::reverse(mat[row_to_reverse_found].begin()+c, mat[row_to_reverse_found].end());

                    // After reversing, re-check the column to see if it's fixed
                    if (check_perm(n, c, mat)) {
                        cout << "  Column " << c << " successfully fixed and is now a permutation.\n";
                    } else {
                        cout << "  Column " << c << " still not a permutation after reversing row " << row_to_reverse_found << ".\n";
                        // This indicates that a simple full row reverse wasn't enough for this specific N and prefill_mat
                        // or the logic of finding the "correct" row to reverse is more complex for a guaranteed fix.
                    }
                } else {
                    cout << "  Could not find a single row to reverse that contains both the duplicate ("
                         << duplicate_number << ") and the missing number (" << missing_number
                         << ") in column " << c << ".\n";
                    // This scenario suggests the problem might require a different fix,
                    // or implies the problem's constraints guarantee such a row exists.
                }

            } else if (duplicate_number == -1 && missing_number != -1) {
                // This case means check_perm returned false, but no duplicate was found within 1..N.
                // This implies a number outside the 1..N range is present, leading to a missing number.
                cout << "  Column " << c << " is not a permutation (missing: " << missing_number
                     << "), but no duplicate found within the range [1, N]. This case is unhandled by current logic.\n";
            } else {
                 cout << "  Column " << c << " has an unhandled permutation issue (e.g., no clear duplicate/missing pair or numbers outside [1,N]). \n";
            }
        }
        cout << "--- Current Matrix After Column " << c << " Processing ---\n";
        print_mat(n, mat);
        cout << "--------------------------------------------------\n";
    }
}

int main() {
    // Conditional compilation for input/output redirection (for competitive programming)
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio // Fast I/O macro

    TC { // Macro for handling multiple test cases
        int n;
        cin >> n;
        vector<vector<int>> mat (n, vector<int>(n));
        prefill_mat(n, mat);
        cout << "Initial matrix for N=" << n << ":\n";
        print_mat(n, mat);
        cout << "\nStarting solve function...\n";
        solve(n, mat);
        cout << "\nFinal matrix for N=" << n << ":\n";
        print_mat(n, mat);
        cout << "\n=========================================\n";
    }

    return 0;
}