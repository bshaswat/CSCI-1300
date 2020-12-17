#include <iostream>
#include "Book.h"
using namespace std;

int main(){
    string t="Harry Potter";
    string a="J.K. Rowling";
    string g="Fiction";

    Book one = Book(t,a,g);
    cout<<"Book Title: "<< one.getTitle() << endl;
    cout<<"Book Author: "<< one.getAuthor() << endl;
    cout<<"Book Genre: "<< one.getGenre() << endl;

    one.setTitle("The Lord of the Rings");
    one.setAuthor("J. R. R. Tolkien");
    one.setGenre("Fiction");
    cout<<"Book Title: "<< one.getTitle() << endl;
    cout<<"Book Author: "<< one.getAuthor() << endl;
    cout<<"Book Genre: "<< one.getGenre() << endl;
}