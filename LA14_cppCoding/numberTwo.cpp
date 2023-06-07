//Write a program that asks the user for their name and age and output a positive message including entered data.
#include <iostream>

using namespace std;

string name;
int age;

int main() {
  cout << "What is your name?" << endl;
  cin >> name;
  cout << "how old are you " << name << "?" << endl;
  cin >> age;
  cout << "Hello " << name << "how is it being " << age << "?" << endl;
}
