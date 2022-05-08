#ifndef UNTITLED18_BOOKSHOP_H
#define UNTITLED18_BOOKSHOP_H

#include <iostream>
#include <vector>
#include "Book.h"
#include "PaperBook.h"

using namespace std;

class BookShop {
    vector<Book *> books;

public:
    void create(int isbn, const string& title, const string& author);

    void create(int isbn, const string& title, const string& author, double audioLength, const string& format);

    void create(int isbn, const string& title, const string& author, Cover cover, int numberOfPages);

    const vector<Book *> &read() const;

    void remove(int isbn);
};


#endif //UNTITLED18_BOOKSHOP_H
