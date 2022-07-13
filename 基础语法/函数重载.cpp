/**
 * @file 函数重载.cpp
 * @author pillar (pillar.shi@foxmail.com)
 * @brief 4.3: 函数重载
 * @version 0.1
 * @date 2022-07-13
 * 
 * @copyright Copyright (c) 2022
 * 
*/

#include<iostream>

using namespace std;

/* 函数重载：函数名一定相同，函数参数一定不同（返回值可以不同） */

int max(int,int);
double max(double,double);

/**
 * @brief 整型最大
 * 
 * @param n1 数字1
 * @param n2 数字2
 *
 * @return int 
 * @retval 最大值
 */
int max(int n1,int n2)
{
    return n1>n2?n1:n2;
}

/**
 * @brief 双精度浮点型最大
 * 
 * @param n1 数字1
 * @param n2 数字2
 * 
 * @return double 
 * @retval 最大值
 */
double max(double n1,double n2)
{
    return n1>n2?n1:n2;
}

int main(int argc,char *argv[])
{
    cout << "int max : " << max(12,34) << endl;
    cout << "double max : " << max(5.6,7.8) << endl;
    return 0;
}