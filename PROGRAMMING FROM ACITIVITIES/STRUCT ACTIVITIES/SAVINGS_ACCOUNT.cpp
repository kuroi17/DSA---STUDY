#include <iostream>

using namespace std;

struct SavingsBank{
    int bills[100];
    int coins[100];
};




int main (){
    int size;
    SavingsBank savingsbank_1;
    
    cout << "Enter the number of values: ";
    cin >> size;
    
    int values[size];
    
    for (int i = 0; i < size; i++){
        cout << "Enter value " << i + 1 << ": ";
        cin >> values[i];
    }
    
    
    int sum_bills = 0;
    int sum_coins = 0;
    
    
    
    
    for (int i = 0; i < size; i++){
        if (values[i] % 10 == 0){
            if(values[i] % 10 == 0){
                savingsbank_1.bills[i] = values[i];
                 sum_bills += values[i];
            } else{
                savingsbank_1.coins[i] = values[i];
                 sum_coins += values[i];
            }
        }
        else if (values[i] < 10){
            if (values[i] % 2 != 0){
                savingsbank_1.bills[i] = values[i];
                 sum_bills += values[i];
            } else{
                savingsbank_1.coins[i] = values[i];
                 sum_coins += values[i];
            }
        }
        else if (values[i] >= 1000){
            if (values[i] % 1000 == 0){
                savingsbank_1.bills[i] = values[i];
                 sum_bills += values[i];
            } else{
                savingsbank_1.coins[i] = values[i];
                 sum_coins += values[i];
            }
        }
        else if (values[i] % 20 == 0){
            if (values[i] % 20 == 0){
                savingsbank_1.coins[i] = values[i];
                 sum_coins += values[i];
            } else{
                savingsbank_1.bills[i] = values[i];
                 sum_bills += values[i];
            }
        }
        else if (values[i] % 5 == 0){
            if (i % 10 != 0){
                savingsbank_1.bills[i] = values[i];
                 sum_bills += values[i];
            } else{
                savingsbank_1.coins[i] = values[i];
                 sum_coins += values[i];
            }
        }
    }
  /*
  
    for (int i = 0; i < size; i++){
        if ( values[i] % 10 == 0){
            if (values [i] % 500 == 0){
                 savingsbank_1.coins[i] = values[i];
                 sum_coins += values[i];
            } else if(values[i] % 20 == 0){
                 savingsbank_1.coins[i] = values[i];
                 sum_coins += values[i];
                 
            } else{ // look out for else
            savingsbank_1.bills[i] = values[i];
            sum_bills += savingsbank_1.bills[i];
            //sum_coins = savingsbank_1.coins[i];
            }
            
        } 
        
       else if (values[i] < 10){
           if (values[i] % 2 != 0){
               savingsbank_1.bills[i] = values[i];
               sum_bills += values[i];
           }
           else{
               savingsbank_1.coins[i] = values[i];
               sum_coins += values[i];
           }
       }
            
            
            // if ( values[i] % 2 != 0 && values[i] < 10 && values % 5 == 0){
            //savingsbank_1.bills[i] = values[i];
            
            //sum_bills += savingsbank_1.bills[i]; }
            
            
         else{
           savingsbank_1.coins[i] = values[i];
            sum_coins += savingsbank_1.coins[i];
            //sum_bills = savingsbank_1.bills[i];
        }
}
*/
    
    
    cout << "Savings: " << sum_bills << " bills and " << sum_coins << " coins";
    
    return 0;
}