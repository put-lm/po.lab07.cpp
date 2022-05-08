#include "Book.h"

#include <utility>

Book::Book(int isbn, string title, string author) : isbn(isbn), title(std::move(title)),
                                                    author(std::move(author)) {}

int Book::getIsbn() const {
    return isbn;
}

string Book::getDetails() {
    return "Jestem sobie książką... ani papierową, ani cyfrową... taką nie wiadomo jaką :)";
}
