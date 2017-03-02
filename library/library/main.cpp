//
//  main.cpp
//  library
//
//  Created by Karolyn Alvarez on 3/1/17.
//  Copyright © 2017 Karolyn Alvarez. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    string description;
public:
    void setTitle (string _title ) {
        title = _title;
    }
    string getTitle(){
        return title;
    }
    
    void setAuthor (string _author ) {
        author = _author;
    }
    string getAuthor(){
        return author;
    }
    
    void setDescription (string _description ) {
        description = _description;
    }
    string getDescription(){
        return description;
    }
    void displayBook(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Description: " << description << endl;
    };
    
};

int main() {
    Book book1;
    string newtitle;
    string newAuthor;
    string newDescription;
    
    cout << "Please enter the title for the book: ";
    cin >> newtitle;
    book1.setTitle(newtitle);
    
    cout << "Please enter the author for the book: ";
    cin >> newAuthor;
    book1.setAuthor(newAuthor);
    
    cout << "Please enter the description for the book: ";
    cin >> newDescription;
    book1.setDescription(newDescription);
    
    book1.displayBook();
    return 0;
}
