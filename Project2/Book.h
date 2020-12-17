// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Project 2

#ifndef Book_H
#define Book_H

#include <string>
using namespace std;

class Book{
    public:
    Book();
    Book(string t, string a, string g);

    string getTitle() const;
    string getAuthor() const;
    string getGenre() const;

    void setTitle(string t);
    void setAuthor(string a);
    void setGenre(string g);

    private:
    string title;
    string author;
    string genre;

};
#endif