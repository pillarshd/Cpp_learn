/*****************************************************************************
 * @file String简介.cpp
 * @author pillar (pillar.shi3@gmail.com)
 * @brief 1.6.3: string(是一个类) 
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright (c) 2022
 * 
*****************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main(int argc,char *argv[])
{
    /* 初始化 */
    string str1{"hello"};
    string str2{"hello",6};
    string str3{2,'h'};
    cout << str1 <<endl;
    cout << str2 <<endl;
    cout << str3 <<endl;

    /* +字符串拼接 */
    string str4{"pillar"};
    string hello{str1+' '+str4};
    cout << hello << endl;

    /* append */
    string str5{str2.append("abc",1,2)};
    cout << str2 << endl;
    cout << str5 << endl;

    /* size */
    cout << str1.size() << endl;
    cout << str2.size() << endl;

    /* at */
    for (size_t i = 0;i < str1.size();i++)
    {
        cout << str1[i] << ' ';
    }
    cout << endl;
    for (size_t i = 0;i < str1.size();i++)
    {
        cout << str1.at(i) << ' ';
    }
    cout << endl;

    /* back/front */
    cout << str1.front() << endl;
    cout << str1.back() << endl;

    /* find()查找字符、字符串 */    
    if (str1.find('l') != string::npos)// string::npos表示没找到
    {
        cout << str1.find('l') << endl;
    }
    return 0;
}