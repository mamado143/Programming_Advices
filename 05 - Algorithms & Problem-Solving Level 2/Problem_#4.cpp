#include <iostream>
#include <string.h>
using namespace std;

/**
  * Description - Write a program to check if the number is perfect or not?
  * ReadNumber - is a function to enter the read number.
  * checkPerfectOrNot - this function is to check if the number is perfect or not.
  * printAllPerfectNumber - is to print all perfect numbers up to the given number.
  * print_results - is to check the results of all functions.
  */

int ReadNumber(string message)
{
    int number = 0;

    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);

    return number;
}

bool checkPerfectOrNot(int number)
{
    int sum = 0;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
            sum += i;
    }

    return number == sum;
}

void printAllPerfectNumber(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (checkPerfectOrNot(i))
            cout << i << " ";
    }
}

void print_results(int number)
{
    cout << "The perfect numbers up to " << number << " are: ";
    printAllPerfectNumber(number);
    cout << endl;
}

int main()
{
    int number = ReadNumber("Enter the number");
    print_results(number);
    return 0;
}