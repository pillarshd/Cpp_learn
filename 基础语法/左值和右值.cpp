/**
 * @file 左值和右值.cpp
 * @author pillar (pillar.shi@foxmail.com)
 * @brief 5.4: 左值和右值
 * @version 0.1
 * @date 2022-07-16
 * 
 * @copyright Copyright (c) 2022
 * 
*/

#include <iostream>

using namespace std;

int add(int n1,int n2)
{
    return n1+n2;
}

int main(int argc,char *argv[])
{
    int a1{1};
    int a2{2};
    int a3{3};
    // 以上a1、a2、a3都是左值，可以获取地址，可以之后重复使用
    cout << "a1 : " << a1 << endl;
    cout << "a2 : " << a2 << endl;
    cout << "a3 : " << a3 << endl;

    int x{0};
    x = (a1+a2);
    // int *p{&(a1+a2)}; (a1+a2)是右值，不能获取地址，要不断copy
    int &&result{(a1+a2)};// &&可以保存右值，获取其地址，不再是copy结果，提高性能
    cout << result << endl;
    
    /* 函数调用也是右值 */
    int &&y{add(a1,a3)};
    cout << y << endl;

    return 0;
}