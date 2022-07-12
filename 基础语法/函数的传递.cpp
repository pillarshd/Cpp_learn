/**
 * @file 函数的传递.cpp
 * @author pillar (pillar.shi@foxmail.com)
 * @brief 4.2: 函数的值传递、指针转递、引用传递
 * @version 0.1
 * @date 2022-07-12
 * 
 * @copyright Copyright (c) 2022
 * 
*/

#include<iostream>

using namespace std;

void add1(int);
void add2(int *);
void add3(int &);

/**
 * @brief 值传递
 * 
 * @param n 数字
 * 
 * @return viod
 * @retval 无
 */
void add1(int n)
{
    n++;
    cout << "int n : " << n <<endl; 
}

/**
 * @brief 指针传递
 * 
 * @param n 数字
 * 
 * @return void
 * @retval 无
 */
void add2(int *n)
{
    (*n)++;
    cout << "int *n : " << *n << endl;
}

/**
 * @brief 引用传递
 * 
 * @param n 数字
 * 
 * @return void
 * @retval 无
 */
void add3(int &n)
{
    n++;
    cout << "int &n : " << n << endl;
}

int main(int argc,char *argv[])
{
    int num{3};
    cout << "num : " << num <<endl;
    
    add1(num);
    cout << "add1_num : " << num << endl;
    
    add2(&num);
    cout << "add2_num : " << num << endl;
    
    add3(num);
    cout << "add3_num : " << num << endl;


    return 0;
}