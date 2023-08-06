#include <iostream>
using namespace std;

/**
 * Read_number -  Reads a positive number from the user.
 * @message: The message to display when asking the user for input.
 * Return: The positive number entered by the user.
 */
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

/**
 * reverse_number -  Reverses the digits of the given number.
 * @number: The number to be reversed.
 * Return: return The number with its digits reversed.
 */
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

/**
 * PrintInvertedNumberPattern -  Prints the inverted number pattern in a diamond way.
 * @number: The number representing the highest value in the pattern.
 */
void PrintInvertedNumberPattern(int number)
{
    int i, j;
    cout << "\n";

    for (i = number; i >= 1; i--)
    {
        for (j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}
/**
  * main - is the entry point of this function.
  * Return: Always returns 0;
  */

int main()
{
    int number = Read_number("Enter the number");
    PrintInvertedNumberPattern(number);
    return 0;
}
