#include <iostream>
int main(void) {
    int s = 0;
    int i = 50;
    while (i < 100) {
        s += i;
        ++i;
    }
    std::cout << "Sum of 50 to 100 inclusive is " 
              << s << std::endl;
    return 0;
}