#include <iostream>
using namespace std;

string Read_Text(string prompt)
{
    string text;
    cout << prompt << endl;
    getline(cin, text);
    return text;
}

string encrypt_text(string text, short EncryptionKey)
{
    for (int i = 0; i <= text.length(); i++)
    {
        text[i] = char((int)text[i] + EncryptionKey);
    }
    return text;
}

string decrypt_text(string text, short EncryptionKey)
{
    for (int i = 0; i <= text.length(); i++)
    {
        text[i] = char((int)text[i] - EncryptionKey);
    }
    return text;
}

int main()
{
    const short EncryptionKey = 2;
    string TextAfterEncryption, TextAfterDecryption;
    string Text = Read_Text("Enter the text: ");
    TextAfterEncryption = encrypt_text(Text, EncryptionKey);
    TextAfterDecryption = decrypt_text(TextAfterEncryption, EncryptionKey);

    cout << "\nText Before Encryption : " << Text << endl;
    cout << "Text After Encryption  : " << TextAfterEncryption << endl;
    cout << "Text After Decryption  : " << TextAfterDecryption << endl;

    return 0;
}
