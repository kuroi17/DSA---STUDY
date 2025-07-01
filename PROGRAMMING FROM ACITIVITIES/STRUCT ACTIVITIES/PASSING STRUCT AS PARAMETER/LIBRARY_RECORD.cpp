#include <iostream>
#include <cmath>
using namespace std;

struct Book{
  
  int numberOfPages;
  char title[100];
  char author[100];
};

void displayBook(Book book){
    //book.numberOfPages;
    //book.title;
    //book.author;
if (book.numberOfPages % 10 != 0){
    int NumberOfPages = round(book.numberOfPages / 10);
        for (int i = 0; i < NumberOfPages + 1; i++){
        cout << book.title << " by " << book.author << " (" << book.numberOfPages <<" pages)" << endl;
        }    
} 
else{
    int NumberOfPages = book.numberOfPages / 10;
         for (int i = 0; i < NumberOfPages; i++){
            cout << book.title << " by " << book.author << " (" << book.numberOfPages <<" pages)" << endl;
        }    
    }
}

/*for (int i = 0; i < NumberOfPages + 1; i++){
    cout << book.title << " by " << book.author << " (" << book.numberOfPages <<" pages)" << endl;
} 
*/   



int main (){
    Book mybook;
    cout << "Enter the number of pages: ";
    cin >> mybook.numberOfPages;
 
    cin.ignore();
    cout << "Enter the title of the book: ";
    cin.getline(mybook.title, 100);
    
    cout << "Enter the author of the book: ";
    cin.getline(mybook.author, 100);
    
    
displayBook(mybook);    
    
    
    
    return 0;
}