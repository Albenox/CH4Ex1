/*
    Program File Name: Ch4Ex1.cpp
    Programmer: Gabriel Inocentes
    Date: February 27, 2024
    Requirements:
    Create a program that asks the user to input 2 numbers, then determine which number is smaller with a conditional operator
*/

#include <iostream>
using namespace std;

int main()
{
    double number1;
    double number2;
    double smallNumber;
    double largerNumber;
    bool equal;

    cout << "Input a number" << endl;
    cin >> number1;
    cout << "Input a second number" << endl;
    cin >> number2;

    equal = number1 == number2 ? 1 : 0;
    number1 < number2 ? (smallNumber = number1, largerNumber = number2) : (smallNumber = number2, largerNumber = number1);

    if (equal == 0) {
        cout << "Of the numbers inputed, " << smallNumber << " was the smaller number, and " << largerNumber << " was the larger number.";
    }
    else {
        cout << "Of the numbers inputed, " << number1 << " is equal to " << number2 << ".";
    }
}