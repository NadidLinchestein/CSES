/*
    You are given all numbers between 1,2,...,n except one. Your task is to find the missing number.

    Input
    The first input line contains an integer n.
    The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).

    Output
    Print the missing number.

    Constraints
    2 <= n <= 2 * 10^5

    Example
    Input:
    5
    2 3 1 5

    Output:
    4
*/

#include <iostream>
using namespace std;

int main()
{
    long long n, total_sum = 0, input_sum = 0, num;

    // Read the size of the sequence (n)
    cin >> n;

    // Compute the total sum of numbers from 1 to n using the formula n*(n+1)/2
    total_sum = n * (n + 1) / 2;

    // Read the n-1 numbers and compute their sum
    for (int i = 1; i < n; i++)
    {
        cin >> num;
        input_sum += num;
    }

    // The missing number is the difference between total_sum and input_sum
    cout << total_sum - input_sum << endl;

    return 0;
}