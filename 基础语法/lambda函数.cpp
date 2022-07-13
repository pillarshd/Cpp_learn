/**
 * @file lambda函数.cpp
 * @author pillar (pillar.shi@foxmail.com)
 * @brief 4.5: lambda函数简单介绍
 * @version 0.1
 * @date 2022-07-13
 * 
 * @copyright Copyright (c) 2022
 * 
*/

#include<iostream>

using namespace std;

int main(int argc,char *argv[])
{
    int a{10};
    int b{20};

    /* 传值+匿名运行+传参 */
    [=](int n1,int n2)
    {
        cout << "a+b+n1+n2 = " << a+b+n1+n2 << endl;
    }(5,5);

    /* 传值的局部更改 mutable */
    auto func2 = [=]()mutable
    {
        cout << "a+b = " << (++a)+(++b) << endl;
    };
    func2();
    cout << "func2 a = " << a << endl;
    cout << "func2 b = " << b << endl;

    /* 不能赋值，可生成副本 */
    auto func4 = func2;
    func4();
    
    /* 引用+命名 */
    auto func1 = [&]()
    {
        cout << "a = " << ++a << endl;
        cout << "b = " << ++b << endl;
    };
    func1();
    cout << "func1 a = " << a << endl;
    cout << "func1 b = " << b << endl;

    /* 捕获后用表达式 */
    auto fun3 = [x=a+b,y=b-a]()
    {
        cout << "x = a+b = " << x << endl;
        cout << "y = b-a = " << y << endl;
        // cout << "++y = " << ++y << endl; 不可改
    };
    fun3();

    return 0;
}