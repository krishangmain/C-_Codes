// // // #include <iostream>
// // // #include <vector>
// // // #include <algorithm>
// // // #include <climits>

// // // using namespace std;

// // // int minimum_operations_to_good_array(int n, vector<int>& arr) {
// // //     // Ensure the first element is negative
// // //     int operations = 0;
// // //     if (arr[0] > 0) {
// // //         operations += 1;
// // //     }
    
// // //     // Ensure the last element is positive
// // //     if (arr[n - 1] < 0) {
// // //         operations += 1;
// // //     }
    
// // //     // Count negatives and positives
// // //     vector<int> neg_prefix(n + 1, 0);
// // //     vector<int> pos_suffix(n + 1, 0);
    
// // //     for (int i = 1; i <= n; ++i) {
// // //         neg_prefix[i] = neg_prefix[i - 1] + (arr[i - 1] < 0 ? 1 : 0);
// // //     }
    
// // //     for (int i = n - 1; i >= 0; --i) {
// // //         pos_suffix[i] = pos_suffix[i + 1] + (arr[i] > 0 ? 1 : 0);
// // //     }
    
// // //     // Find the minimum operations
// // //     int min_operations = INT_MAX;
// // //     for (int k = 1; k < n; ++k) {
// // //         int changes_needed = (k - neg_prefix[k]) + (n - k - pos_suffix[k]);
// // //         min_operations = min(min_operations, changes_needed);
// // //     }
    
// // //     return operations + min_operations;
// // // }

// // // int main() {
// // //     int n;
// // //     cin >> n;
// // //     vector<int> arr(n);
// // //     for (int i = 0; i < n; ++i) {
// // //         cin >> arr[i];
// // //     }
    
// // //     cout << minimum_operations_to_good_array(n, arr) << endl;
// // //     return 0;
// // // }


// // #include <iostream>
// // #include <vector>
// // #include <algorithm>
// // #include <climits>

// // using namespace std;

// // int minimum_operations_to_good_array(int n, vector<int>& arr) {
  
// //     int operations = 0;
// //     if (arr[0] > 0) {
// //         operations += 1;  
// //     }
    
    
// //     if (arr[n - 1] < 0) {
// //         operations += 1;  
// //     }
    
// //     // Count negatives and positives
// //     vector<int> neg_prefix(n + 1, 0);
// //     vector<int> pos_suffix(n + 1, 0);
    
// //     for (int i = 1; i <= n; ++i) {
// //         neg_prefix[i] = neg_prefix[i - 1] + (arr[i - 1] < 0 ? 1 : 0);
// //     }
    
// //     for (int i = n - 1; i >= 0; --i) {
// //         pos_suffix[i] = pos_suffix[i + 1] + (arr[i] > 0 ? 1 : 0);
// //     }
    
// //     // Find the minimum operations
// //     int min_operations = INT_MAX;
// //     for (int k = 1; k < n; ++k) {
// //         int changes_needed = (k - neg_prefix[k]) + (n - k - pos_suffix[k]);
// //         min_operations = min(min_operations, changes_needed);
// //     }
    
// //     return operations + min_operations;
// // }

// // int main() {
// //     int n;
// //     cin >> n;
// //     vector<int> arr(n);
// //     for (int i = 0; i < n; ++i) {
// //         cin >> arr[i];
// //     }
    
// //     cout << minimum_operations_to_good_array(n, arr) << endl;
// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;


// int minOperationsToGoodArray(vector<int>& A, int N) {
//     int operations = 0;
    
   
//     if (A[0] >= 0) {
//         operations++;
//         A[0] = -1; 
//     }
//     if (A[N-1] <= 0) {
//         operations++;
//         A[N-1] = 1; }
    
//     bool foundPositive = false;
//     for (int i = 1; i < N-1; i++) {
//         if (A[i] > 0) {
//             foundPositive = true;
//         }
//         if (!foundPositive && A[i] >= 0) {
//             operations++;
//             A[i] = -1; 
//         } else if (foundPositive && A[i] <= 0) {
//             operations++;
//             A[i] = 1; 
//         }
//     }
    
//     return operations;
// }

// int main() {
//     int N;
//     cin >> N;
    
//     vector<int> A(N);
//     for (int i = 0; i < N; i++) {
//         cin >> A[i];
//     }
    
//     int result = minOperationsToGoodArray(A, N);
//     cout << result << endl;
    
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to determine the minimum number of operations
int minOperationsToGoodArray(vector<int>& A, int N) {
    int operations = 0;
    
    // Check and correct the first element
    if (A[0] >= 0) {
        operations++;
        A[0] = -1; // Make the first element negative
    }
    
    // Check and correct the last element
    if (A[N-1] <= 0) {
        operations++;
        A[N-1] = 1; // Make the last element positive
    }
    
    // Traverse the array and count required operations for other elements
    int changesToNeg = 0; // Changes to make elements negative
    int changesToPos = 0; // Changes to make elements positive
    
    for (int i = 1; i < N-1; i++) {
        if (A[i] >= 0) {
            changesToNeg++;
        }
    }
    
    for (int i = 1; i < N-1; i++) {
        if (A[i] <= 0) {
            changesToPos++;
        }
    }
    
    // Determine the minimum number of changes required
    operations += min(changesToNeg, changesToPos);
    
    return operations;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int result = minOperationsToGoodArray(A, N);
    cout << result << endl;
    
    return 0;
}

