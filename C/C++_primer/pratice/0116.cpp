#include <iostream>
int main(void) {
    int value, sum = 0; 
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << sum << std::endl;
    return 0;
}