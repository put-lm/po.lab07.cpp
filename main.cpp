#include "BookShop.h"

using namespace std;

int main() {
    BookShop shop;
    shop.create(1, "Gra o tron", "R. Marting");
    shop.create(1, "Harry Potter", "J. K. Rowling", 1.22, "mp3");
    shop.create(2, "Wiedźmin", "A. Sapkowski", Cover::hard, 320);

    for (auto book: shop.read()) {
        cout << book->getDetails() << endl;
    }

    shop.remove(2);

    cout << endl;
    for (auto book: shop.read()) {
        cout << book->getDetails() << endl;
    }
    return 0;
}
