#include <iostream>
using namespace std;
struct Car{
    char brand[20];
    char model[20];
    int year;
    float mileage;
};

float calculateDepreciation(float mileage){
    int rate = 0;
    if (mileage < 10000){
        cout << rate << "%";
    }
    else if (mileage >= 10000 && mileage <= 49999){
        rate+= 10;
        cout << rate << "%";
    } 
    else if (mileage >= 50000 && mileage <= 99999){
        rate+= 20;
        cout << rate << "%";
    } else{
        rate+= 30;
        cout << rate << "%";
    }
    return 0;
}

void displayCarDetails(Car car){
    cout << "Car Details:\n";
    cout << "Brand: " << car.brand << endl;
    cout << "Model: " << car.model << endl;
    cout << "Year: " << car.year << endl;
    cout << "Mileage: " << car.mileage << endl;
}

int main (){
    Car mycar;
    
    cout << "Enter the brand of the car: ";
    cin >> mycar.brand;
    
    cout << "Enter the model of the car: ";
    cin >> mycar.model;
    
    cout << "Enter the year of the car: ";
    cin >> mycar.year;
    
    cout << "Enter the mileage of the car: ";
    cin >> mycar.mileage;
    cout << endl;
    
    displayCarDetails(mycar);
    cout << "Depreciation: ";
    int result = calculateDepreciation(mycar.mileage);
   
    
    
    
    
    
    return 0;
}