#include <iostream>
using namespace std;
int main(void) {
    int a, b, c, s;
    cin >> a >> b >> c;
    s = (int)(a * 0.2 + b * 0.3 + c * 0.5) % 100;
    cout << s;
    return 0;
}