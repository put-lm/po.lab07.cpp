#ifndef UNTITLED15_AUDIOBOOK_H
#define UNTITLED15_AUDIOBOOK_H


#include "Book.h"

class AudioBook: public Book {
    double audioLength;
    string format;
public:
    AudioBook(int isbn, const string &title, const string &author, double audioLength, const string &format);
    string getDetails();
};


#endif //UNTITLED15_AUDIOBOOK_H
