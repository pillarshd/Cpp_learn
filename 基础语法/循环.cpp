/**
 * @file 循环.cpp
 * @author 施豪栋 (pillar.shi@foxmail.com)
 * @brief 3.2: 循环语句
 * @version 0.1
 * @date 2022-07-10
 * 
 * @copyright Copyright (c) 2022
 * 
*/

#include<iostream>

using namespace std;

int main(int argc,char *argv[])
{
    /* while 循环 */
    int n{0};
    while(n<10)
    {
        cout << n << '\t';
        n++;   
    }
    cout << endl << n << endl;

    /* do...while 循环 */
    int x{10};
    do
    {
        cout << "x : " << x << endl;
    } while (x<10);
    
    /* for 循环 */
    int arry[]{1,2,3,4,5};
    int arry_size{sizeof(arry)/sizeof(int)};
    cout << "arry : ";
    for (size_t i = 0; i < arry_size; i++)
    {
        cout << arry[i] << '\t';
    }
    cout << endl;
    
    /* for、auto、数组 */
    string y{"abcdefg"};
    cout << "y : ";
    for (auto i : y)
    {
        cout << i << '\t';
    }
    cout << endl;

    return 0;
}