#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Item Class

class Item {
protected:
  string title;
  string author;
  int id;

public:

  Item () : title(""), author(""), id(0) {}

  //SETTERS
  void setTitle (string t) {title = t;}
  void setAuthor (string auth) {author = auth;}
  void setId (int _id) {id = _id;}

  //GETTERS
  string getTitle() {return title;}
  string getAuthor() {return author;}
  int getId () {return id;}
};

//Book Class XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

class Book : public Item {
private:
  string isbn;    // isbn stand's for international standard book number
  int numPages;

public:

  Book() : isbn(""), numPages(0) {}

  //SETTERS
  void setIsbn (string _isbn) {isbn = _isbn;}
  void setNumPages (int nPgs) {numPages = nPgs;}

  //GETTERS
  string getIsbn () {return isbn;}
  int getNumPages () {return numPages;}

  void setBook( ) {
    cout << "Enter new book: " << endl;
    cout << "Title: ";   cin >> title;
    cout << "Author: ";   cin >> author;
    cout << "Id: ";   cin >> id;
    cout << "International standardbook nmber(ISBN): ";   cin >> isbn;
    cout << "Number of pages: ";    cin >> numPages;
};

//Patron Class XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

class Patron : public Item {
private:
  string name;
  int id;
  vector<Item> checkedOutItems;

public:

  Patron() {
    name = "";
    id = 0;
  }

  //SETTERS
  void setName (string name) {this -> name = name;}
  void setId (int id) {this -> id = id;}

  //GETTERS
  string getName () {return name;}
  int getId () {return id;}

  void addItem (Item* item) {
    checkedOutItems.insert(item);
  }

  void removeItem (Item* item) {
    checkedOutItems.earse(item);
  }

  void setPatron( ) {
    cout << "Enter new patrion: " << endl;
    cout << "Name: ";   cin >> name;
    cout << "Id: "; cin >> id;
  }
};

//MAIN Function XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

int main(){



   return 0;
}
