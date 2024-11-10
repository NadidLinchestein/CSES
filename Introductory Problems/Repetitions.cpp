/*
    You are given a DNA sequence: a string consisting of characters A, C, G, and T. 
    Your task is to find the longest repetition in the sequence. 
    This is a maximum-length substring containing only one type of character.
    
    Input
    The only input line contains a string of n characters.
    
    Output
    Print one integer: the length of the longest repetition.
    
    Constraints
    1 <= n <= 10^6

    Example
    
    Input:
    ATTCGGGA

    Output:
    3
*/


#include <iostream>
#include <string>
#include <algorithm> // For std::max function

int main() {
    // Read the input DNA sequence
    std::string dna;
    std::cin >> dna;

    // Edge case: if the DNA sequence length is 1, the longest repetition is 1
    int n = dna.length();
    
    if (n == 1) {
        std::cout << 1 << std::endl;
        return 0;
    }

    // Variables to keep track of the longest repetition and the current repetition length
    int maxLength = 1; // Initial maximum length of repetition
    int currentLength = 1; // Length of the current repetition sequence

    // Iterate through the DNA sequence starting from the second character
    for (int i = 1; i < n; i++) {
        // Check if the current character matches the previous character
        if (dna[i] == dna[i - 1]) {
            // Increase the length of the current repetition
            currentLength++;
        } else {
            // Update the maximum repetition length if the current repetition is longer
            maxLength = std::max(maxLength, currentLength);
            // Reset current repetition length for the new character
            currentLength = 1;
        }
    }

    // Update maxLength for the last sequence in case it was the longest
    maxLength = std::max(maxLength, currentLength);

    // Output the result: longest repetition length
    std::cout << maxLength << std::endl;
    return 0;
}