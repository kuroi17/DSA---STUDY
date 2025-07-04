#include <iostream>
#include <string>
using namespace std;

int isPalindrome(const char* word, int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (word[start] != word[end]) {
        return -1;
    }
    return isPalindrome(word, start + 1, end - 1);
}

int main() {
    string word;
    cout << "Enter a string: ";
    cin >> word;

    int result = isPalindrome(word.c_str(), 0, word.length() - 1);

    if (result == -1) {
        cout << word << " is not a palindrome." << endl;
    } else {
        cout << word << " is a palindrome." << endl;
    }

    return 0;
}
