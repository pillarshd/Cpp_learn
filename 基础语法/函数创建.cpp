/**
 * @file 函数创建.cpp
 * @author pillar (pillar.shi@foxmail.com)
 * @brief 4.1: 函数创建、声明、调用
 * @version 0.1
 * @date 2022-07-12
 * 
 * @copyright Copyright (c) 2022
 * 
*/
#include<iostream>

using namespace std;

/* 函数的声明 */
int max(int,int);

/* 函数创建 */
int max(int n1,int n2)
{
    int max{n1>n2?n1:n2};   
    return max;
}

int main(int argc,char *argv[])
{
    int n1{0},n2{0};
    cout << "number1 : ";
    cin >> n1;
    cout << "number2 : ";
    cin >> n2;

    /* 函数调用 */
    int max_num{0};
    max_num=max(n1,n2);
    cout << "max number : " << max_num << endl;

    return 0;
}