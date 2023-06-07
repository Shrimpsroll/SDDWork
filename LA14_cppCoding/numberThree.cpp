//Write a program that asks the user for a number n and prints the sum 
//of the numbers 1 to n (check the weekly algorithm theory Q4 for some help ;-) 
//though you don't need to create a subroutine yet).
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int counter = 1;
    int totalSum = 0;
    int userInput;

    cout << "give me a number" << endl;
    cin >> userInput;
    while (counter<=userInput) {
        sum ++;
        totalSum += sum;
        counter++;
    }
    cout << "total is '" << totalSum << "'" << endl;

}
