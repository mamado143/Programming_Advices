#include <iostream>
using namespace std;
/**
 * @brief - Write a program a digit and a number, then print the
 * - the freguency in that number; Input:12232 output: 3 times freq
 *
 * @file Problem_#8.cpp
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
int frequency_digits(short DigitToCheck, int number)
{
    int frequency = 0;
    int lastdigit = 0;

    while (number > 0)
    {
        lastdigit = number % 10;
        number /= 10;
        if (DigitToCheck == lastdigit)
        {
            frequency++;
        }
    }
    return frequency;
}
void Print_all_frequency(int number)
{
    short Digit_frequency = 0;
    for (int i = 0; i < 10; i++)
    {
        Digit_frequency = frequency_digits(i, number);
        if (Digit_frequency > 0)
        {
            cout<<"\nDigit "<<i<<" frequency digist is "<< Digit_frequency<<" 2Times(s)\n";
        }
    }
}
int main(void)
{
    int Number = Read_number("Please enter the main number?");
    Print_all_frequency(Number);
    
    return 0;
}

