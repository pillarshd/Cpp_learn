/**
 * @file 选择.cpp
 * @author pillar (pillar.shi@foxmail.com)
 * @brief 3.1: 选择语句
 * @version 0.1
 * @date 2022-07-09
 * 
 * @copyright Copyright (c) 2022
 * 
*/

#include <iostream>

using namespace std;

int main(int argc,char *argv[])
{
    /* if */
    int n1{0};
    int n2{0};
    
    cout << "number 1 :";
    cin >> n1;
    cout << "number 2 :";
    cin >> n2;

    if (n1 > n2)
    {
        cout << "max : " << n1 << endl;
    }
    else
    {
        cout << "max : " << n2 << endl;
    }

    /* switch */
    cout << "Your formula : " <<endl;
    int a{0};
    int b{0};
    char c{' '};
    cin >> a >> c >> b;
    switch (c)
    {
    case '+':
        cout << a << c << b << '=' << a+b << endl;
        break;
    case '-':
        cout << a << c << b << '=' << a-b << endl;
        break;
    case '*':
        cout << a << c << b << '=' << a*b << endl;
        break;
    case '/':
        cout << a << c << b << '=' << a/b << endl;
        break;
    default:
        cout << "error!" << endl;
        // 可省略
        break;
    }

    /* ?: 三元表达式 */
    int temperature{0};
    cout << "temperature : ";
    cin >> temperature;
    string feeling{temperature>24 ? "hot" : "cool"};
    cout << "feeling : " << feeling << endl;

    return 0;
}