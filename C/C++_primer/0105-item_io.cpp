#include <iostream>
#include "Sales_item.h"
int main() {
    Sales_item book;
    std::cin >> book;
    std::cout << book << std::endl;
    return 0;
}
// 输入： ISBN  销售量  销售价
// 输出： ISBN  总销售量  总销售额  平均销售价