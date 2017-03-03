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

class VHS {
private:
    string title;
    string description;
public:
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
        cout << "Title: " << title << endl;
        cout << "Description: " << description << endl;
    };
    
};

class Magazine {
private:
    string title;
    string publisher;
    string yearIssued;
    
public:
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
    void setYearIssued (string _yearIssued ) {
        yearIssued = _yearIssued;
    }
    string getYearIssued(){
        return yearIssued;
    }
    void displayMagazine(){
        cout << "Title: " << title << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Year Issued: #" << yearIssued << endl;
        cout << "Thank you. Goodbye" << endl;
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
        for ( auto &i : allVHS){
            i.displayVHS();
        }
        for ( auto &i : allBooks){
            i.displayBook();
        }
        for ( auto &i : allMagazines){
            i.displayMagazine();
        }
    };
};

Library newCollection;

void addToLibrary(){
    string userInput;
    string almostFinalInput;
    cout << "Would you like to add a [B]ook, [V]hs, or [M]agazine?" << endl;
    cin >> userInput;
    if ( userInput == "B" || userInput == "b" ){
        string newTitle;
        string newAuthor;
        string newDescription;
        cin.ignore();
        Book newBook;
        cout << "Please enter a title: " << endl;
        getline(cin, newTitle);
        cout << "Please enter a author: " << endl;
        getline(cin, newAuthor);
        cout << "Please enter a description: " << endl;
        getline(cin, newDescription);
        newCollection.addBook(newBook);
        
        cout << "Continue adding to library [Y/N]" << endl;
        cin >> almostFinalInput;
        if ( almostFinalInput == "Y" || almostFinalInput == "y" ){
            addToLibrary();
        }
        
    } else if ( userInput == "V" || userInput == "v" ){
        string newTitle;
        string newDescription;
        cin.ignore();
        VHS newVHS;
        cout << "Please enter a title: " << endl;
        getline(cin, newTitle);
        cout << "Please enter a description: " << endl;
        getline(cin, newDescription);
        newCollection.addVHS(newVHS);
        
        cout << "Continue adding to library [Y/N]" << endl;
        cin >> almostFinalInput;
        if ( almostFinalInput == "Y" || almostFinalInput == "y" ){
            addToLibrary();
        }
        
    } else if ( userInput == "M" || userInput == "m" ){
        string newTitle;
        string newPublisher;
        string newYearIssued;
        Magazine newMagazine;
        cout << "Please enter a title: " << endl;
        getline(cin, newTitle);
        cout << "Please enter a publisher: " << endl;
        getline(cin, newPublisher);
        cout << "Please enter a issue year: " << endl;
        getline(cin, newYearIssued);
        newCollection.addMagazine(newMagazine);
        
        cout << "Continue adding to library [Y/N]" << endl;
        cin >> almostFinalInput;
        if ( almostFinalInput == "Y" || almostFinalInput == "y" ){
            addToLibrary();
        }
        
    } else {
        cout << "Incorrect Input" << endl;
        exit(0);
    }
};
void start();

int main(){
    start();
    return 0;
}

void start(){
        string userInput;
        string finalInput;
        
        cout << "Would you like to add to the library? [Y/N]" << endl;
        cin >> userInput;
        if ( userInput == "Y" || userInput == "y" ){
            addToLibrary();
        } else if ( userInput == "N" || userInput == "n" ) {
            exit(0);
            
        }
    cout << "Would you like to display the library? [Y/N]" << endl;
    if ( finalInput == "Y" || finalInput == "y" ){
        newCollection.displayCollection();
    } else if ( finalInput == "N" || finalInput == "n" ) {
        cout << "Exiting Now" << endl;
        exit(0);
    } else { cout << "Incorrect Input"<< endl; exit(0);}
}
