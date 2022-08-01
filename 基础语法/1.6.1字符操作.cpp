/**
 * @file 字符操作.cpp
 * @author pillar (pillar.shi3@gmail.com)
 * @brief 1.6.1: 字符的操作
 * @version 0.1
 * @date 2022-07-19
 * 
 * @copyright Copyright (c) 2022
 * 
*/

#include <iostream>

using namespace std;

int main(int argc,char *argv[])
{
    cout << "==========isalnum===========" << endl;
    /* isalnum()是否是字符和数字,不是返回0 */
    cout << std::isalnum('A') << endl;
    cout << isalnum('a') << endl;
    cout << isalnum('1') << endl;
    cout << isalnum('!') << endl;

    cout << "==========isalpha===========" << endl;
    /* isalpha()是否为字符,不是返回0 */
    cout << isalpha('A') << endl;
    cout << isalpha('a') << endl;
    cout << isalpha('1') << endl;
    cout << isalpha('!') << endl;

    cout << "==========isdigit===========" << endl;
    /* isdigit()是否为数字,不是返回0 */
    cout << isdigit('A') << endl;
    cout << isdigit('a') << endl;
    cout << isdigit('1') << endl;
    cout << isdigit('!') << endl;
    
    cout << "==========isblank===========" << endl;
    /* isdigit()是否为空格,不是返回0 */
    int blank_num{0};
    string str{"Hello Pillar !"};
    for (auto i : str)
    {
        if (isblank(i))
        {
            blank_num++;
        }
    }
    cout << str << endl<< blank_num << endl;

    cout << "==========islower===========" << endl;
    /* islower()是否是小写字母,不是返回0 */
    cout << islower('A') << endl;
    cout << islower('a') << endl;
    cout << islower('1') << endl;
    cout << islower('!') << endl;

    cout << "==========isupper===========" << endl;
    /* isupper()是否是大写字母,不是返回0 */
    cout << isupper('A') << endl;
    cout << isupper('a') << endl;
    cout << isupper('1') << endl;
    cout << isupper('!') << endl;

    cout << "==========toupper===========" << endl;
    /* toupper()小写字母变大写 */
    for (auto &i : str)
    {
        i=toupper(i);
    }
    cout << str << endl;

    cout << "==========tolower===========" << endl;
    /* tolower()大写字母变小写 */
    for (auto &i : str)
    {
        i=tolower(i);
    }
    cout << str << endl;

    return 0;
}