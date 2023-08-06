#include <iostream>
#include <random>
using namespace std;
/**
 * @brief Write a program to print 3 random numbers form 1 ot 10;
 * 
 */
int generate_random_numbers(int From, int To)
{
    int randNUm = rand() % (To - From + 1) + From;
    return randNUm;
}
int main()
{
    cout<<generate_random_numbers(1,10)<<endl;;
    cout<<generate_random_numbers(1,10)<<endl;
    cout<<generate_random_numbers(1,10)<<endl;

    return 0;
}