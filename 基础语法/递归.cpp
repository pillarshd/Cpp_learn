/**
 * @file 递归.cpp
 * @author pillar (pillar.shi@foxmail.com)
 * @brief 4.4: 递归--阶乘
 * @version 0.1
 * @date 2022-07-13
 * 
 * @copyright Copyright (c) 2022
 * 
*/

#include<iostream>

using namespace std;

int factorial(int);
/**
 * @brief 阶乘
 * 
 * @param n n!
 * 
 * @return int
 * @retval n! 
 */
int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return factorial(n-1)*n;
    }
}

int main(int argc,char *argv[])
{
    cout << "factorial number : ";
    int num{0};
    cin >> num;
    cout << "result : " << factorial(num) <<endl;
    return 0;
}