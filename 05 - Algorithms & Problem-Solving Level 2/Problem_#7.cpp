#include <iostream>
using namespace std;
/**
 * @brief - Write a program to read a number and print it reversed.
 * 
 * @file Problem_#6.cpp
 * @author Mohamed Dahir Mohamoud
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

int reversing_numbers(int number)
{ 
    int Remainder = 0, number2 = 0;
  while (number > 0)
  {
    Remainder = number % 10;
    number = number / 10;
    number2 = number2 *10 + Remainder;
  }
  return number2;
   
}
int main()
{
    cout <<"\nThe reverse number is:\n"<<reversing_numbers(Read_number("Enter the positve number"))<<"\n";
    return 0;
}