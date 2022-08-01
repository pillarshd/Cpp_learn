/**
 * @file 数据类型_sizeof_auto.cpp
 * @author pillar (pillar.shi3@gmail.com)
 * @brief 1.2.2: 数据类型、sizeof函数、auto
 * @version 0.1
 * @date 2022-07-07
 * 
 * @copyright Copyright (c) 2022
*/

/*C++数据类型(常用列出)
    1.Boolean: bool
    2.Character: char
    3.Inter: int
    4.Float Point: float
    5.Double Float Point: double
    6.指针
    …………
 */

#include <iostream>

using namespace std;

int main(int argc,char *argv[])
{
    /*sizeof函数
        sizeof是一个操作符
        sizeof(对象)
        sizeof(类型)
     */
    cout << "short int : " << sizeof(short) << endl;
    cout << "int : " << sizeof(int) << endl;
    cout << "long int : " << sizeof(long) << endl;
    cout << "long long int : " << sizeof(long long) << endl;
    cout << "unsigned int : " << sizeof(unsigned int) << endl;
    cout << "char : " << sizeof(char) << endl;
    cout << "float : " << sizeof(float) << endl;
    cout << "double : " << sizeof(double) << endl;
    cout << "boolean : " << sizeof(bool) << endl;
    cout << "size_t : " << sizeof(size_t) << endl;
    //指针
    cout << "====================" << endl;
    cout << "bool* : " << sizeof(bool*) << endl;
    cout << "int* : " << sizeof(int*) << endl;
    cout << "char* : " << sizeof(char*) << endl;
    cout << "float* : " << sizeof(float*) << endl;
    cout << "====================" << endl;
    // 对象
    int x{1};
    cout << x << "\t" << sizeof(x) << endl;

    /*atuo 自动判断(数字)类型*/
    auto value1{1};// int
    auto value2{2.2};// double
    auto value3(2ll);// long long
    auto value4{1.2f};// float
    auto value5{123ul};// unsigned long
    auto value6{1.3l};//long double 
    /*大写也可以（推荐）
    auto value3(2LL);// long long
    auto value4{1.2F};// float
    auto value5{123UL};// unsigned long
    auto value6{1.3L};//long double 
    */
    cout << "====================" << endl;
    cout << value1 << endl;
    cout << value2 << endl;
    cout << value3 << endl;
    cout << value4 << endl;
    cout << value5 << endl;
    cout << value6 << endl;

    return 0;
}
