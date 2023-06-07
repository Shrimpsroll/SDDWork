//Write a program that calculates the circumference of a circle 
//when the user enters the radius (be sure to have an appropriate query and final output).
#include <iostream>
using namespace std;

int main() {
    float userInput;
    float pi = 3.14;

    cout << "Enter the radius of the circle " << endl;
    cin >> userInput;

    cout << 2 * pi * userInput << " Is the circumference of the circle" << endl;
}
