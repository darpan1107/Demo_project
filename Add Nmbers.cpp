#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;
    
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;
    int difference=firstNumber - secondNumber;
    // Prints sum 
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     

    cout << firstNumber << " -" <<  secondNumber << " = " << difference;     

    

    return 0;
}
