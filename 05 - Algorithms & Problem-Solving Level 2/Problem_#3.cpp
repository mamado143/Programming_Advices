#include <iostream>
#include <string.h>
using namespace std;
/**
  * Description - Write a program to check if the number is perfect or not?
  * ReadNumber - is a function to enter the read number.
  * checkPerfectNumber - this function is to check if the number is perfect or not.
  * print_results - is to check the results of all functions.
  */
int ReadNumber (string message)
{
	int number = 0;

	do
	{
		cout<<message<<endl;
		cin>>number;
	}
	while (number <= 0);
	return number;
}
bool checkPerfectOrNot(int number)
{
	int sum = 0;

	for (int i = 1; i < number; i++)
	{
		if (number %i == 0)
			sum+= i;
	}
	return number == sum;
}
void print_results(int number)
{
	if (checkPerfectOrNot(number))
	{
		cout<<"is a Perfect Number"<<endl;
	}
	else
	{
		cout<<"is not a Perfect Number"<<endl;
	}
}
/**
  * main - is the main entry of the function.
  * Return: Always return 0;
  */
int main()
{
	print_results(ReadNumber("Enter the number"));
	return (0);
}
