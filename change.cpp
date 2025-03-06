#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
using namespace std;

// Function Prototypes 
void ComputeCoin(int coinValue, int& number, int& amountLeft); 

int main() {
    // Open the data file and see if it opens correctly 
    ifstream myIn;
    myIn.open("coins.dat"); 
    assert(myIn);  

    int amountLeft;  

    // While loop to read each value from the file
    while (myIn >> amountLeft) { 
        int originalAmount = amountLeft;  // Store the original amount to display later
        int number;  

        // Calculate and display the number of quarters
        ComputeCoin(25, number, amountLeft);
        cout << originalAmount << " cents can be changed using:" << endl;
        cout << number << " quarter(s)" << endl;

        // Calculate and display the number of dimes
        ComputeCoin(10, number, amountLeft);
        cout << number << " dime(s)" << endl;

        // Calculate and display the number of pennies
        ComputeCoin(1, number, amountLeft);
        cout << number << " cent(s)" << endl;

        cout << endl;  
    } 

    // Close the file
    myIn.close();  

    return 0;
} 

// Function to compute the number of coins of a given denomination
void ComputeCoin(int coinValue, int& number, int& amountLeft) {
    number = amountLeft / coinValue;  // Find how many coins of this denomination can fit
    amountLeft %= coinValue;  // Update the remaining amount after using the coins
}
