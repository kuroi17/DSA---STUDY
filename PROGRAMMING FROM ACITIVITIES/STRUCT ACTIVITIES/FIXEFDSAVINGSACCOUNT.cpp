#include <iostream>
using namespace std;

struct SavingsBank {
    int bills[100];
    int coins[100];
};

int main() {
    int size;
    SavingsBank savingsbank_1;
    
    cout << "Enter the number of values: ";
    cin >> size;
    
    int values[size];
    
    for (int i = 0; i < size; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> values[i];
    }

    int sum_bills = 0;
    int sum_coins = 0;

    for (int i = 0; i < size; i++) {
        int val = values[i];

        // 1. Check if value is < 10
        if (val < 10) {
            if (val % 2 != 0) {
                savingsbank_1.bills[i] = val;
                sum_bills += val;
            } else {
                savingsbank_1.coins[i] = val;
                sum_coins += val;
            }
        }
        // 2. Check if value is >= 1000
        else if (val >= 1000) {
            if (val % 1000 == 0) {
                savingsbank_1.bills[i] = val;
                sum_bills += val;
            } else {
                savingsbank_1.coins[i] = val;
                sum_coins += val;
            }
        }
        // 3. Check if divisible by 20
        else if (val % 20 == 0) {
            savingsbank_1.coins[i] = val;
            sum_coins += val;
        }
        // 4. Check if divisible by 10 (but not by 20)
        else if (val % 10 == 0) {
            savingsbank_1.bills[i] = val;
            sum_bills += val;
        }
        // 5. Check if divisible by 5
        else if (val % 5 == 0) {
            savingsbank_1.bills[i] = val;
            sum_bills += val;
        }
        // 6. Else default to coins
        else {
            savingsbank_1.coins[i] = val;
            sum_coins += val;
        }
    }

    cout << "Savings: " << sum_bills << " bills and " << sum_coins << " coins";
    return 0;
}
