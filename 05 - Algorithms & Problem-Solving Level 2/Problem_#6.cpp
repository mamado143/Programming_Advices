#include <iostream>
using namespace std;
/**
 * @brief - Write a program to read a number and print the sum of its digits.
 * @file Problem_#6.cpp
 * @author Mohamed Dahir Mohamoud
 * @brief Write a program to read a number and print it in reverse.
 * @version 0.6
 * @date 2023-08-06
 * Read_number - is a function to read the number from user.
 */
int Read_number(string message)
{
    int number = 0;
    do
    {
        cout<<message<<endl;
        cin>>number;
    }while(number <= 0);
    return number;
}
int digits_reversed_sum(int number)
{
    int Remainder = 0;
    int sum = 0;

    while (number != 0)
    {
        Remainder = number % 10;
        number = number / 10;
        sum += Remainder;
    }
    return sum;
}
/**
 * main - is the entry point of the program. 
 * Return: Always return 0;
 */
int main ()
{
    int number = Read_number("Enter the positive number");
     cout << "\nSum Of Digits = "<<digits_reversed_sum(number)
         << "\n"; 
}