#include "AudioBook.h"

AudioBook::AudioBook(int isbn, const string &title, const string &author, double audioLength, const string &format)
        : Book(isbn, title, author), audioLength(audioLength), format(format) {}

string AudioBook::getDetails() {
    return to_string(isbn) + ": " + title + "(" + author + ") - " + "Format: " + format + " (" +
           to_string(audioLength) + "min.)";
}