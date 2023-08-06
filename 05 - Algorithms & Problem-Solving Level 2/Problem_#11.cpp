#include <iostream>
using namespace std;
/**
 * @brief - Write a program to read a number and check if it is palindrum?
d *
 * @file Problem_#11.cpp
 * @author Mohamed Dahir Mohamoud
 *
 * @string: is the message which reading from the user.
 */
#include <iostream>
using namespace std;

int Read_number(string message)
{
    int number = 0;

    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
int reverse_number(int number)
{
    int remainder = 0, number2 = 0;
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        number2 = number2 * 10 + remainder;
    }
    return number2;
}
bool check_is_Palindrum(int number)
{
    return number == reverse_number(number);
}
int main()
{
    int number = Read_number("Enter the posive number\n");
    if (check_is_Palindrum(number))
    {
        cout << "\nYes , it is a Palindrome number.\n";
    }
        else
        {
        cout << "\nNo , it is NOT a Palindrome number.\n";
        }
        return 0;
}
