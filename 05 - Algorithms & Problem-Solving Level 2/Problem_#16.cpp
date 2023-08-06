#include <iostream>
using namespace std;

/**
 * @brief - Write a program to print all words form AAA to ZZZ.
 * PrintNumberPattern -  Prints the  PrintInvertedAsciPattern in a diamond way.
 * @number: The number representing the highest value in the pattern.
 */
void PrintWordFromAAAtoZZZ()
{
    int i, j, k;
    string word = "";
    cout << "\n";

    for (i = 65; i <= 90; i++)
    {
        char ch = 'A';

        for (j = 65; j <= 90; j++)
        {
           for (k = 65; k <=90; k++)
           {
            word = word + char (i);
            word = word + char (j);
            word = word + char (k);
            cout<<word<<endl;
               word = ""; 
           }
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
    PrintWordFromAAAtoZZZ();
    return 0;
}