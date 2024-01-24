#include <iostream>
using namespace std;
int main(void) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c || b + c > a || a + c > b) {
        if( a == b && b == c) printf("Equilateral triangle");
        
    } cout << "Not triangle"
}