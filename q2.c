#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int countVowels(const string& str) {
    int count = 0;
    for (char ch : str) {
        // Convert character to lowercase for case insensitivity
        ch = tolower(ch);
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowels = countVowels(input);
    cout << "Number of vowels in the string: " << vowels << endl;

    return 0;
}
