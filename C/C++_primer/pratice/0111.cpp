#include <iostream>
int main(void) {
    int a, b, i;
    std::cout << "print a~b int" << "\n" << "Please enter two int:";
    std::cin >> a >> b;
    i = a;
    while (i < b) {
        std::cout << i++ << std::endl;
    }
    return 0;
}