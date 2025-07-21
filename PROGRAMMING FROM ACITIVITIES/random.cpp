#include <iostream>
using namespace std;

int main (){
    
    string word1, word2;
    
    cout << "Enter the word: ";
    cin >> word1;
    
    cout << "Enter the word: ";
    cin >> word2;
    
    int word1length = word1.length();
    int word2length = word2.length();
    
    int size = 100;
    char array[size];
    int k = 0;

    int minLength = word1length < word2length ? word1length : word2length;

    // Alternate merge properly
    for (int i = 0; i < minLength; i++){
        // First insert word1[i] into even index
        for (int j = k; j < size; j++){
            if (j % 2 == 0 && array[j] == 0){
                array[j] = word1[i];
                k = j + 1; // update k to move forward
                break;
            }
        }
        // Then insert word2[i] into odd index
        for (int j = k; j < size; j++){
            if (j % 2 != 0 && array[j] == 0){
                array[j] = word2[i];
                k = j + 1; // update k again
                break;
            }
        }
    }

    // Append remaining characters from longer word
    if (word1length > word2length){
        for (int i = minLength; i < word1length; i++){
            for (int j = k; j < size; j++){
                if (array[j] == 0){
                    array[j] = word1[i];
                    k = j + 1;
                    break;
                }
            }
        }
    } else if (word2length > word1length){
        for (int i = minLength; i < word2length; i++){
            for (int j = k; j < size; j++){
                if (array[j] == 0){
                    array[j] = word2[i];
                    k = j + 1;
                    break;
                }
            }
        }
    }

    int totalstring = word1length + word2length;
    for (int i = 0; i < totalstring; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}
