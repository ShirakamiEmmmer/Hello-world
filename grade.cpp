#include ".h/grade.h"
#include ".h/printID.h"
#include <iostream>
int main() {
    printID();
    std::cout << "请输入10个数字： " << std::endl;
    int a = 0;
    int sum;
    int ys;

    for (int i = 0; i < 10; ++i) {
        std::cin >> a;
        ys = a;
        sum = 0;
        if (i==1){
            std::cout << "数字之和为7的有： " << std::endl;
        }
        while (ys > 0) {
            sum += ys % 10;
            ys /= 10;
        }


        if (sum == 7) {
            std::cout << a << " ";
        }

    }
    return 0;
}
