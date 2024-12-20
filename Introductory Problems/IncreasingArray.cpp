/*
    You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.
    On each move, you may increase the value of any element by one. What is the minimum number of moves required?
    
    Input
    The first input line contains an integer n: the size of the array.
    Then, the second line contains n integers x1, x2, ..., x_n: the contents of the array.
    
    Output
    Print the minimum number of moves.
    
    Constraints
    1 <= n <= 2 * 10^5
    1 <= i <= 10^9

    Input:
    5
    3 2 5 1 7

    Output:
    5
*/

#include <iostream>
#include <vector>
using namespace std;

long long minimumMovesToIncreaseArray(vector<int>& arr) {
    long long moves = 0; // Initialize the total moves counter
    int prev = arr[0];   // Set the first element as the previous element

    // Traverse the array starting from the second element
    for (size_t i = 1; i < arr.size(); ++i) {
        // If the current element is smaller than the previous one
        if (arr[i] < prev) {
            // Calculate the difference and add it to the moves
            moves += (prev - arr[i]);
        } else {
            // Update the previous element to the current element
            prev = arr[i];
        }
    }

    return moves; // Return the total number of moves
}

int main() {
    int n; // Size of the array
    cin >> n;

    vector<int> arr(n); // Declare the array

    // Read the array elements
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Calculate and print the minimum number of moves
    cout << minimumMovesToIncreaseArray(arr) << endl;

    return 0;
}
