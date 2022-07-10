/**
 * @file 数学函数简单介绍.cpp
 * @author 施豪栋 (pillar.shi@foxmail.com)
 * @brief 3.3: 几个数学函数的介绍
 * @version 0.1
 * @date 2022-07-10
 * 
 * @copyright Copyright (c) 2022
 * 
*/

#include<iostream>
#include<cmath>

// using namespace std;

int main(int argc,char *argv[])
{
    // 绝对值
    std::cout << "abs(-19) = " << abs(-19) << std::endl;
    // 最大值
    std::cout << "max(4,5) = " << std::max(4,5) << std::endl;
    // 最小值
    std::cout << "min(4,5) = " << std::min(4,5) << std::endl;
    // 幂函数
    std::cout << "pow(2,3) = " << pow(2,3) << std::endl;
    // 开平方
    std::cout << "sqrt(100) = " << sqrt(100) << std::endl;
    // 舍去小数
    std::cout << "floor(10.5) = " << floor(10.5) << std::endl;
    // 四舍五入（大于5就+1）
    std::cout << "round(10.5) = " << round(10.5) << std::endl;

    /* 次方 */
    //  e的n次方
    std::cout << "exp(1) = " << exp(1) << std::endl;
    // 2的n次方
    std::cout << "exp2(2) = " << exp2(2) << std::endl;

    /* log */
    // loge
    std::cout << "log(e) = " << log(exp(1)) <<std::endl;
    // log2
    std::cout << "log2(8) = " << log2(8) <<std::endl;
    // log10
    std::cout << "log10(100) = " << log(100) <<std::endl;

    /* 随机数 */
    srand(time(NULL));
    std::cout << "Random number : ";
    for (size_t i = 0;i < 10;i++)
    {
        std::cout << rand()%10 << ' ';   
    }
    std::cout  << std::endl;
  
    return 0;
}