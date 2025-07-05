#include <iostream>
using namespace std;
struct Item{
    
    string id;
    char name[100];
    int quantity;
    double price;

};


void UserInput(Item items[], int idx){
    cout << "Enter the name of the item: ";
    cin.ignore();
    cin.getline(items[idx].name, 100);
    cout << "Enter the ID of the item: ";
    cin >> items[idx].id;
    cout << "Enter the quantity of the item: ";
    cin >> items[idx].quantity;
    cout << "Enter the price of the item: ";
    cin >> items[idx].price;
}

void DisplayItems(Item items[], int n){
    if (n==0){
        cout << "Empty! No items in the inventory.\n";
        return;
    }
    cout << "Items in the inventory:\n";
    for (int i = 0; i < n; i++){
            cout << "Item: " << items[i].name << "\n";
            cout << "ID: " << items[i].id << "\n";
            cout << "Quantity: " << items[i].quantity << "\n";
            cout << "Price: $" << items[i].price << "\n";
            cout << "------------------------\n";
    }
}

void CalculateTotalValue(Item items[], int n){
    double totalValue = 0.0;
    for (int i = 0; i < n; i++){
        totalValue += items[i].quantity * items[i].price;
        printf("Item: %s, Price: $%.2f, Quantity: %d, Total: $%.2f\n", items[i].name, items[i].price, items[i].quantity, items[i].quantity * items[i].price);
    }
    cout << "Total value of inventory: $" << totalValue << "\n";
}

void FindandUpdateItem(Item items[], int n){
    string searchId;
    cout << "Enter the ID of the item to update: ";
    cin >> searchId;
    bool found = false;
    for (int i = 0; i < n; i++){
        if (items[i].id == searchId){
            found = true;
            cout << "Item found: " << items[i].name << "\n";
            cout << "Current quantity: " << items[i].quantity << "\n";
            cout << "Enter new quantity: ";
            cin >> items[i].quantity;
            break;
        }
    }
    if (!found){
        cout << "Item with ID " << searchId << " not found.\n";
    }
}

int main (){
Item myitems[100];
int n;


cout << "Enter the number of items in the inventory: ";
cin >> n;
if (n > 100 || n < 1) {
    cout << "Invalid number of items. Please enter a number between 1 and 100.\n";
    return 1;
}
for (int i = 0; i < n; i++){
    cout << "Enter a choice:\n";
    cout << "1. Add item\n";
    cout << "2. Display items\n";
    cout << "3. Calculate total value\n";
    cout << "4. Find and update item's quantity\n";
    cout << "5. Exit\n";
    cout << "Your Choice: ";

    int choice;
    cin >> choice;
    switch (choice){
        case 1:
            UserInput(myitems, n);
            break;
        case 2:
            DisplayItems(myitems, n);
            break;
        case 3:
            CalculateTotalValue(myitems, n);
            break;
        case 4:
            FindandUpdateItem(myitems, n);
            break;
        case 5:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;



    }
}




    return 0;
}