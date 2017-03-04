//
//  main.cpp
//  library
//
//  Created by Karolyn Alvarez on 3/1/17.
//  Copyright © 2017 Karolyn Alvarez. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
private:
    string title;
    string author;
    string description;
public:
    
    Book(){};
    ~Book(){};
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
        cout << "BOOK" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Description: " << description << endl;
        cout << "--------------------" << endl;
    };
    
};

class VHS {
private:
    string title;
    string description;
public:
    VHS(){};
    ~VHS(){};
    void setTitle (string _title ) {
        title = _title;
    }
    string getTitle(){
        return title;
    }
    
    void setDescription (string _description ) {
        description = _description;
    }
    string getDescription(){
        return description;
    }
    void displayVHS(){
        cout << "VHS" << endl;
        cout << "Title: " << title << endl;
        cout << "Description: " << description << endl;
        cout << "--------------------" << endl;
    };
    
};

class Magazine {
private:
    string title;
    string publisher;
    
public:
    Magazine(){};
    ~Magazine(){};
    void setTitle (string _title ) {
        title = _title;
    }
    string getTitle(){
        return title;
    }
    void setPublisher (string _publisher ) {
        publisher = _publisher;
    }
    string getPublisher(){
        return publisher;
    }
    void displayMagazine(){
        cout << "MAGAZINE" << endl;
        cout << "Title: " << title << endl;
        cout << "Publisher: #" << publisher << endl;
        cout << "-------------------" << endl;
    };
    
};
 

class Library {
private:
    vector <VHS> allVHS;
    vector <Book> allBooks;
    vector <Magazine> allMagazines;
public:
    void addVHS(VHS _film){
       allVHS.push_back(_film);
    };
    void addBook(Book _book){
        allBooks.push_back(_book);
    };
    void addMagazine(Magazine _magazine){
        allMagazines.push_back(_magazine);
    };
    void displayCollection(){
        for ( unsigned int i = 0; i < allVHS.size(); i++){
            allVHS[i].displayVHS();
        }
        for ( unsigned int i = 0; i < allBooks.size(); i++){
            allBooks[i].displayBook();
        }
        for ( unsigned int i = 0; i < allMagazines.size(); i++){
            allMagazines[i].displayMagazine();
        }
    };
};

void start();
void addToLibrary();

Library newCollection;

int main(){
    start();
    return 0;
}
void start(){
    string userInput;
    string secondUserInput;
    
    cout << "Would you like to add to the library?" << endl;
    getline(cin, userInput);
    if ( userInput == "Y" || userInput == "y"){
        addToLibrary();
    } else if (userInput == "N" || userInput == "n"){
        cout << "Display the library?[Y/N]" << endl;
        getline(cin, secondUserInput);
        if ( secondUserInput == "Y" || secondUserInput == "y") {
            newCollection.displayCollection();
        } else if ( secondUserInput == "N" || secondUserInput == "n"){
            cout << "Thank you for using my library class program!" << endl;
            exit(0);
        } else {
            cout << "Incorrect Input" << endl;
            exit(0);
        }
    } else {
        exit(0);
    }
    start();
};
void addToLibrary(){
    string userInput;
    string _title;
    string _author;
    string _publisher;
    string _description;
    
    cout << "Would you like to add a [B]ook, [V]hs, [M]agazine?" << endl;
    getline(cin,userInput);
    if ( userInput == "B" || userInput == "b") {
        Book book1;
        cout << "Enter the title: "; getline(cin, _title);
        cout << "Enter the author: "; getline(cin, _author);
        cout << "Enter the description: "; getline(cin, _description);
        book1.setTitle(_title);
        book1.setAuthor(_author);
        book1.setDescription(_description);
        newCollection.addBook(book1);
        
    } else if ( userInput == "V" || userInput == "v") {
        VHS vhs1;
        cout << "Enter the title: "; getline(cin, _title);
        cout << "Enter the description: "; getline(cin, _description);
        vhs1.setTitle(_title);
        vhs1.setDescription(_description);
        newCollection.addVHS(vhs1);
        
    } else if ( userInput == "M" || userInput == "m") {
        Magazine mag1;
        cout << "Enter the title: "; getline(cin, _title);
        cout << "Enter the publisher: "; getline(cin, _publisher);
        mag1.setTitle(_title);
        mag1.setPublisher(_publisher);
        
        newCollection.addMagazine(mag1);
        
    } else {
        cout << "Incorrect Input" << endl;
        exit(0);
    }
    
    
}
