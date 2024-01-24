#include <iostream>
#include "../Sales_item.h"
int main() {
    Sales_item currbook, book;
    if (std::cin >> currbook) {
        Sales_item cnt = currbook;
        while (std::cin >> book) {
            if (currbook.isbn() == book.isbn())
                    cnt += book;
            else {
                std::cout << cnt << std::endl;
                currbook = book;
                cnt = currbook;
            }
        }
        std::cout << cnt << std::endl;
    }
    return 0;
}