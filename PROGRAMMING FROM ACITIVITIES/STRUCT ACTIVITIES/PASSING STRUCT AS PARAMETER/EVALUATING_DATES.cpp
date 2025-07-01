#include <iostream>
using namespace std;

struct Date{
  int month;
  int day;
  int year;
    
};

int compareDates(Date a, Date b){
    if (a.year > b.year && a.year != b.year){
        return 1;
    } else if (a.year == b.year){
        if (a.month > b.month){
            return 1;
        } else if(b.month > a.month){
            return -1;
        }else{ // if a and b month is equal
            if (a.day > b.day){
                return 1;
            }
            else if (b.day > a.day){
                return -1;
            }
            else{
                return 0;
            }
        } 
    }
    else{
        return -1;
    }
}


int main (){
    Date date, date2;
    
cout << "Enter the first date (MM DD YYYY): ";
cin >> date.month >> date.day >> date.year;
cout << "Enter the second date (MM DD YYYY): ";
cin >> date2.month >> date2.day >> date2.year;

int result = compareDates(date,date2);

if (result == -1){
    cout << "The first date is before the second date.";
} else if(result == 1){
    cout << "The first date is after the second date.";
} else{
    cout << "Both dates are the same.";
}
    
    
    
    return 0;
}