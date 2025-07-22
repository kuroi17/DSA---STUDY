#include <iostream>
using namespace std;

const int TABLE_SIZE = 10;
class HashTable{
    private:
       string table[TABLE_SIZE];
    public:
        HashTable(){
            for (int i = 0; i < TABLE_SIZE; i++){
                table[i] = ""; // means empty string;
                }
            }

            int HashFunction( string key){
                int hash = 0;
                int size = key.length();
                for (int i = 0; i < size; i++){
                    char ch = key[i];
                    hash += ch; // sum of ASCII values of characters
                }
            return hash % TABLE_SIZE; // return the index in the table
            }


            void Insert(string key){
                int index = HashFunction(key); 
                int start = index; // to keep track of the starting index for linear probing
                // Linear probing 
                while(table[index] != ""){
                    index = (index + 1) % TABLE_SIZE; 

                    if (index == start){ // if we looped back to the start, the table is full
                        cout << "Hash table is full, cannot insert " << key << endl;
                        return; // if we looped back to the start, the table is full
                    }
                }
                table[index] = key; 
                 cout << "Inserted " << key << " at index " << index << endl; 
            }

            void Display(){
                cout << "-------------HASH TABLE-------------" << endl;
                for (int i = 0; i < TABLE_SIZE; i++){
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

int main (){
HashTable ht;
cout << "---------------------HASH MAP FOR STRING USER INPUT----------------------" << endl;
int size;
cout << "Enter the number of strings to insert: ";
cin >> size;
cin.ignore();

string expression;

for (int i = 0; i < size; i++){
    cout << "Enter string #" << i + 1 << ": ";
    getline(cin, expression);
    ht.Insert(expression);


}



ht.Display();
    return 0;
}
/*
ASCII CODES
'A' - 65 -> B - 66 and so on
'a' - 97 -> b - 98 and so on
'0' - 48 -> 1 - 49 and so on
*/