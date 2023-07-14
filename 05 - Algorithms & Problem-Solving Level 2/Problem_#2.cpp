//best coding
#include <iostream>
#include <string>
using namespace std;

enum class PrimNotPrime {
    Prime = 1,
    NotPrime = 2
};

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

PrimNotPrime CheckPrime(int Number) {
    int M = Number / 2;
    for (int Counter = 2; Counter <= M; Counter++) {
        if (Number % Counter == 0)
            return PrimNotPrime::NotPrime;
    }
    return PrimNotPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(int Number) {
    cout << "\n";
    cout << "Prime Numbers from 1 To " << Number << " are: " << endl;
    for (int i = 1; i <= Number; i++) {
        if (CheckPrime(i) == PrimNotPrime::Prime) {
            cout << i << endl;
        }
    }
}

int main() {
    PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Please enter a positive number: "));
    return 0;
}