#include "PaperBook.h"

PaperBook::PaperBook(int isbn, const string &title, const string &author, Cover cover, int numberOfPages) : Book(isbn,
                                                                                                                 title,
                                                                                                                 author),
                                                                                                            cover(cover),
                                                                                                            numberOfPages(
                                                                                                                    numberOfPages) {}

string PaperBook::getDetails() {
    string coverType;
    switch (cover) {
        case Cover::soft:
            coverType = "Soft";
            break;
        case Cover::hard:
            coverType = "Hard";
    }
    return to_string(isbn) + ": " + title + "(" + author + ") - " + "Cover: " + coverType + " (" +
           to_string(numberOfPages)
           + " pages)";
}
