#include <iostream>
#define PI 3.14
#define JEIKE 20
using namespace std;
int main(void) {
    double h, r, s; 
    cin >> h >> r;
    s = PI * r * r * h * 0.001;
    cout << (int)(20.0 / s) + 1;
    return 0;
    
}