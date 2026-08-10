#include <iostream>
#include <cstring>
using namespace std;

class Book{
    string title;
    string auth_name;
    int page_counter;

    public:
        Book() : title(" "), auth_name(" "), page_counter(0) {}
        //Contructor
        Book(string title, string auth_name, int page_counter) {
            this -> title = title;
            this -> auth_name = auth_name;
            this -> page_counter = page_counter;
        }
        //Setter Functiom
        void setBook(string title, string auth_name, int page_counter) {
            this -> title = title;
            this -> auth_name = auth_name;
            this -> page_counter = page_counter;
        }
        //Getter
        string getTitleAuthName(){
            return title;
            return auth_name;
        }
        //Getter
        int getPageCounter() {
            return page_counter;
        }
        //Display data
        void print(){
            cout << "Book Details:-" << endl;
            cout << "Title: " << title << endl;
            cout << "Author: " << auth_name << endl;
            cout << "Pages: " << page_counter << endl;
        }
        //Destructor
        ~Book() {}
};

//Function to call member function
void CallFunctions(Book b) {
    b.setBook("Bal e Jibreel", "Allama Muhammad Iqbal", 286);
    b.print();
}


int main() {
    Book b1;
    //Function to call member function
    CallFunctions(b1);
    return 0;
}