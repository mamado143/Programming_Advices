#include <iostream>
using namespace std;
/**
 * @brief - Write a program a read a number and print it in order 
 * - form left to right; Input:1234 output: 1 2 3 4 with \n between;
 *
 * @file Problem_#10.cpp
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
        number = number  / 10;
        number2 = number2 * 10 + remainder;
    }
    return number2;
}
void Print_digits(int number)
{
    int remainder = 0;
    
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        cout<<remainder<<endl;
    }
}
int main(void)
{
    int number = Read_number ("Enter the positve numbers");
    Print_digits(reverse_number(number));

    return 0;
}
