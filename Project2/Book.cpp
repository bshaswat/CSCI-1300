// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Project 2

#include "Book.h"
#include <string>
using namespace std;

Book::Book()
{
    title="";
    author="";
    genre="";
}

Book::Book(string t, string a, string g)
{
    title=t;
    author=a;
    genre=g;
}

string Book::getTitle() const
{
    return title;
}
string Book::getAuthor() const
{
    return author;
}
string Book::getGenre() const
{
    return genre;
}

void Book::setTitle(string t)
{
    title=t;
}
void Book::setAuthor(string a)
{
    author=a;
}
void Book::setGenre(string g)
{
    genre=g;
}
