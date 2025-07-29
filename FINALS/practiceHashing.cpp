#include <iostream>
#include <string>
using namespace std;

#define MAX_SIZE 10

class HashTable{
    private:
        string table[MAX_SIZE];
    public:
        HashTable(){
            for (int i = 0; i < MAX_SIZE; i++){
                table[i] = "";
            }
        }

        int HashFunction (string key){
            int hash = 0;
            
            int size = key.length();
            for (int i = 0; i < size; i++){
                char ch = key[i];
                hash+= ch;
            }
            return hash % MAX_SIZE;
        }

        void Insert(string key){
            int index = HashFunction(key);
            int start = index;

            while(table[index] != ""){
                index = (index + 1) % MAX_SIZE;
                
                if (index == start){
                    cout << "Hash Table Full! ";
                    return;
                }
            }
            table[index] = key;

        }
    void Display(){
        for (int i = 0; i < MAX_SIZE; i++){
            cout << i << ": ";

            if (table[i] == ""){
                cout << "Empty" << endl;
            }
            else{
                cout << table[i] << endl;
            }
        }
    }
};