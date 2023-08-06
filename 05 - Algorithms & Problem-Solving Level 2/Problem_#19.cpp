#include <iostream>
#include <random>
using namespace std;

/**
 * @brief Function to generate a random number between 'From' and 'To' (inclusive).
 * 
 * @param From The lower bound of the desired range.
 * @param To The upper bound of the desired range.
 * @return A random integer between 'From' and 'To' (inclusive).
 */
int generate_random_numbers(int From, int To)
{
    // Create a random number generator engine
    random_device rd;                   // Obtain a random seed from the hardware
    mt19937 gen(rd());                  // Standard mersenne_twister_engine seeded with rd()

    // Define the range for random numbers (From to To inclusive)
    uniform_int_distribution<> dist(From, To);

    // Generate a random number in the specified range
    return dist(gen);
}

int main()
{
    // Print 3 random numbers between 1 and 10 (inclusive)
    cout << generate_random_numbers(1, 10) << endl;
    cout << generate_random_numbers(1, 10) << endl;
    cout << generate_random_numbers(1, 10) << endl;

    return 0;
}
