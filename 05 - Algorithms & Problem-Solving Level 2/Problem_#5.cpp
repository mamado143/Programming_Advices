/**
 * @file Problem_#5.cpp
 * @author Mohamed Dahir Mohamoud
 * @brief Write a program to read a number and print it in reverse.
 * @version 0.5
 * @date 2023-08-06
 * Read_number - is a function to read the number from user.
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

void reversing_numbers(int number)
{ 
    int Remainder = 0;
  while (number > 0)
  {
    Remainder = number % 10;
    number = number / 10;
    cout <<Remainder <<endl;
  }
   
}
int main()
{
    reversing_numbers(Read_number("Enter the positve number"));
    return 0;
}
