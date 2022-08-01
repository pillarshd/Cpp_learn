/**
 * @file 位操作.cpp
 * @author pillar (pillar.shi@foxmail.com)
 * @brief 1.2.3: 位操作
 * @version 0.1
 * @date 2022-07-09
 * 
 * @copyright Copyright (c) 2022
 * 
*/

#include <iostream>

using namespace std;

int main(int argc,char *argv[])
{
    int a{5};
    int b{3};

    /* 逻辑运算符 */
    // |:两个中有1，则就是1
    cout << "a | b : " << (a|b) << endl;

    // &:两个都是1，则是1
    cout << "a & b : " << (a&b) << endl;

    // ^:相同是0，不同是1
    cout << "a ^ b : " << (a^b) << endl;

    // ~:取反
    cout << " ~b : " << ~b << endl;

    /* 位移运算符 */
    // <<左移，补零，约等于乘二
    cout << "2<<3 : " << (2<<3) << endl;
    
    // >>右移，补零，约等于除二
    cout << "8>>2 : " << (8>>2) << endl;

    return 0;
}