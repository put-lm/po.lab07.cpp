#ifndef UNTITLED15_BOOK_H
#define UNTITLED15_BOOK_H

#include <iostream>

using namespace std;

class Book {
protected:
    int isbn;
    string title;
    string author;
public:
    string getDetails();
    int getIsbn() const;
    Book(int isbn, string title, string author);
};

#endif //UNTITLED15_BOOK_H
