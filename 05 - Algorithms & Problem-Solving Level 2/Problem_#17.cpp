#include <iostream>
using namespace std;

/**
 * @brief - Write a program to print all words form AAA to ZZZ.
 * PrintNumberPattern -  Prints the  PrintInvertedAsciPattern in a diamond way.
 * @number: The number representing the highest value in the pattern.
 */
string read_password()
{
    string password;
    cout << "Enter the password\n";
    cin >> password;
    return password;
}
bool checkThePassowrd(string original_password)
{
    int i, j, k;
    string word = "";
    int count = 0;
    cout << "\n";

    for (i = 65; i <= 90; i++)
    {
        char ch = 'A';
        for (j = 65; j <= 90; j++)
        {
            for (k = 65; k <= 90; k++)
            {
                count++;
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);
                count++;
                cout << "Trial [" << count << "] : "
                     << "\n";
                cout << word << endl;
                if (word == original_password)
                {
                    cout << "\nPassword is " << word << "\n";
                    cout << "Found after ";
                    cout << count << " Trial(s)\n";
                    return true;
                }
                word = "";
            }
        }
        cout << "\n____________________________\n";
    }
    return false;
}

/**
 * main - is the entry point of this function.
 * Return: Always returns 0;
 */

int main()
{
    checkThePassowrd(read_password());
    return 0;
}
