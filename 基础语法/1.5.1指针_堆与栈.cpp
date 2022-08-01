/**
 * @file 指针_堆与栈.cpp
 * @author pillar (pillar.shi3@gmail.com)
 * @brief 1.5.1: 指针创建--堆与栈
 * @version 0.1
 * @date 2022-07-14
 * 
 * @copyright Copyright (c) 2022
 * 
*/

#include<iostream>

using namespace std;

int main(int argc,char *argv[])
{
    /* 在栈上应用指针 */
    int number{50};
    int *p_number{&number};// 指针一定要初始化
    
    cout << "p_number : " << p_number << endl;
    cout << "*p_number : " << *p_number << endl;

    /* 在堆上应用指针-->动态分配内存 */
    int *p_num{nullptr};// 初始化指针
    p_num = new int[2];// 分配内存
    
    *p_num = 10;
    *(p_num+1) = 20;
    for(size_t i = 0;i < 2;i++)
    {
        cout << "*(p_num + " << i << ") = " << *(p_num+i) <<endl;
    }

    delete[] p_num;// 释放内存
    p_num = nullptr;// 必须加，防止出错

    return 0;
}