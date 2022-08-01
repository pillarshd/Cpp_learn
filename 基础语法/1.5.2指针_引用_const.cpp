/**
 * @file 指针_引用_const.cpp
 * @author pillar (pillar.shi@foxmail.com)
 * @brief 1.5.2: 指针、引用和count
 * @version 0.1
 * @date 2022-07-16
 * 
 * @copyright Copyright (c) 2022
 * 
*/

#include <iostream>

using namespace std;

int main(int argc,char *argv[])
{
    /* 引用一定要初始化，指向哪一个变量的地址，之后就不可在变了 */
    int num1{100};
    int &num{num1};
    cout << "&num1 : " << &num1 << "\tnum1 : " << num1 << endl;
    cout << "&num : " << &num << "\tnum : " << num << endl;
    /* 引用值可以变 */
    int num2{200};
    num = num2;
    cout << "&num2 : " << &num2 << "\tnum2 : " << num2 << endl;
    cout << "&num : " << &num << "\tnum : " << num << endl;

    /* const和指针 */
    // int *const 相当于引用，指向不可动
    // const int* 指向的变量的值不可变（常量必用）
    int n1{10};
    const int *p_n{&n1};
    cout << "p_n : " << p_n << "\t*p_n : " << *p_n << endl;
    int n2{20};
    p_n = &n2;// *p_n = n2;
    cout << "p_n : " << p_n << "\t*p_n : " << *p_n << endl;
    // const int const* 即不能动，也不能变

    /* const和引用 */
    // const int & 相当于 const int const*
    return 0;
}