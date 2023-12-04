#include <string>
#include <cctype>
#include <fstream>
#include <iostream>

using namespace std;

string encrypt(const string& text, int key) {
    string result = "";
    for (char c : text) {
        if (c >= 'a' && c <= 'z') {
            char encryptedChar = ((c - 'a' + key) % 26) + 'a';
            result += encryptedChar;
        }
        else {
            result += c;
        }
    }
    return result;
}

string decrypt(const string& text, int key) {
    return encrypt(text, 26 - (key % 26));
}

void processFile(const string& inputFile, const string& outputFile, int key, bool isEncryption) {
    ifstream inFile(inputFile);
    ofstream outFile(outputFile);
    string line;

    if (!inFile || !outFile) {
        cout << "Error opening file!" << endl;
    }
    else {
        while (getline(inFile, line)) {
            string processedLine = isEncryption ? encrypt(line, key) : decrypt(line, key);
            cout << processedLine << endl;
            outFile << processedLine << endl;
        }

        inFile.close();
        outFile.close();
    }
}

int main()
{
    int key = 10;

    cout << "Encrypted Messages: " << endl;
    processFile("message.txt", "encrypted.txt", key, true);

    cout << endl << "Decryped Messages: " << endl;
    processFile("encrypted.txt", "decrypted.txt", key, false);


    return 0;
}

