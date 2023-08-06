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
 * PrintNumberPattern -  Prints the  number pattern in a diamond way.
 * @number: The number representing the highest value in the pattern.
 */
void PrintNumberPattern(int number)
{
    int i, j;
    cout << "\n";

    for (i = 1; i < number; i++)
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
    PrintNumberPattern(number);
    return 0;
}

