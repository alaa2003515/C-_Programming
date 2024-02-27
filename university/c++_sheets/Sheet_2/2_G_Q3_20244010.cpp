#include <iostream>
using namespace std;

/**
 *main-Function to reverse a five-digit number entered through the keyboard.
 *Return:0.
 */
 
int main() {
    int num, reversedNum = 0;
    
    // Input a five-digit number
    cout << "Enter a five-digit number: ";
    cin >> num;
    
    // Check if the number is a five-digit number
    if (num >= 10000 && num <= 99999) {
        // Reverse the number
        while (num != 0) {
            int remainder = num % 10;
            reversedNum = reversedNum * 10 + remainder;
            num /= 10;
        }
        
        // Output the reversed number
        cout << "Reversed number: " << reversedNum << endl;
    } else {
        cout << "Invalid input! Please enter a five-digit number." << endl;
    }
    
    return 0;
}
