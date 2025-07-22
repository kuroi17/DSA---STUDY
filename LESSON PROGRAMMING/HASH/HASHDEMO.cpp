#include <iostream>
using namespace std;

const int TABLE_SIZE = 10;

class HashTable{
    private:
        int table[TABLE_SIZE];
    public:
        HashTable(){
            for (int i = 0; i < TABLE_SIZE; i++){
                table[i] = -1;
            }
        }
    int HashFunction(int key){
        return key % TABLE_SIZE;    
    }    
    void Insert(int key){
        int index = HashFunction(key);
        // if the slot is already taken, we use linear probing;
        
        // Linear probing to
        while (table[index] != -1){
            index = (index + 1) % TABLE_SIZE; // this allows us to make the element with same postion go to the next available slot
        }
        table[index] = key; // insert the key into the table
        cout << "Inserted " << key << " at index " << index << endl;
    }
    void Display(){
        cout << "----------Hash Table----------" << endl;
        for (int i = 0; i < TABLE_SIZE; i++){
            cout << "[" << i << "] - ";
            if (table[i] != -1){
                cout << table[i] << endl;
            }  
            else{
                cout << "Empty" << endl;
            }
        }
    }
    
}; 


int main (){
HashTable ht;
ht.Insert(49);
ht.Insert(80);
ht.Insert(99); // collision with 49 so mapupunta to sa next which is 0 but 0 is also occupied with 80 so it will go to the next which is 1
ht.Insert(100); // collision with 80 so mapupunta sa next which is 0 but 0 is also occupied with 49 so it will go to the next which is 1 but 1 is also occupied with 80 so it will go to the next which is 2
ht.Insert(77);

ht.Display();




    return 0;
}