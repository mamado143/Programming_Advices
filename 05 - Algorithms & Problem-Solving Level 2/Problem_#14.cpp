#include <iostream>
using namespace std;

/**
 * Read_number -  Reads a positive number and print inverted letter.
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
 * PrintNumberPattern -  Prints the  PrintInvertedAsciPattern in a diamond way.
 * @number: The number representing the highest value in the pattern.
 */
void PrintInvertedAsciPattern(int number)
{
    int i, j;
    cout << "\n";

    for (i = number; i >= 1; i--)
    {
        char ch = 'A';

        for (j = 0; j < i; j++)
        {
            cout << ch;
            ch++;
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
    PrintInvertedAsciPattern(number);
    return 0;
}