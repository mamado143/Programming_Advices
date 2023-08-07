#include <iostream>
#include <string>
#include <random>

enum enCharType { 
    SmallLetter = 1, 
    CapitalLetter = 2, 
    SpecialCharacter = 3, 
    Digit = 4 
};

int RandomNumber(int From, int To) {
    // Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

char GetRandomCharacter(enCharType CharType) {
    switch (CharType) {
        case enCharType::SmallLetter:
            return char(RandomNumber(97, 122));
        case enCharType::CapitalLetter:
            return char(RandomNumber(65, 90));
        case enCharType::SpecialCharacter:
            return char(RandomNumber(33, 47));
        case enCharType::Digit:
            return char(RandomNumber(48, 57));
    }
}

int ReadPositiveNumber(std::string Message) {
    int Number = 0;
    do {
        std::cout << Message << std::endl;
        std::cin >> Number;
    } while (Number <= 0);
    return Number;
}

std::string GenerateWord(enCharType CharType, short Length) {
    std::string Word;
    for (int i = 1; i <= Length; i++) {
        Word += GetRandomCharacter(CharType);
    }
    return Word;
}

std::string GenerateKey() {
    std::string Key = "";
    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4);
    return Key;
}

void GenerateKeys(short NumberOfKeys) {
    for (int i = 1; i <= NumberOfKeys; i++) {
        std::cout << "Key [" << i << "] : " << GenerateKey() << std::endl;
    }
}

int main() {
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    GenerateKeys(ReadPositiveNumber("Please enter how many keys to generate?"));
    return 0;
}
