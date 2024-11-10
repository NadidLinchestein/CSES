/*
    Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd,
    the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one.

    For example, the sequence for n=3 is as follows:
    3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1

    Your task is to simulate the execution of the algorithm for a given value of n.

    Input
    The only input line contains an integer n.

    Output
    Print a line that contains all values of n during the algorithm.

    Constraints
    1 \le n \le 10^6

    Example
    Input:
    3

    Output:
    3 10 5 16 8 4 2 1
*/

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); // Disable sync between C and C++ I/O
    std::cin.tie(NULL);               // Untie cin from cout for further speed-up

    long long n;
    cin >> n;

    while (n > 1)
    {
        cout << n << " ";

        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n * 3 + 1;
        }
    }

    cout << 1 << endl;
    return 0;
}
