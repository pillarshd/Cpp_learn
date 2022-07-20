/*****************************************************************************
 * @file cString简介.cpp
 * @author pillar (pillar.shi@foxmail.com)
 * @brief 6.2: cString几个函数简介
 * @version 0.1
 * @date 2022-07-20
 * 
 * @copyright Copyright (c) 2022
 * 
*****************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc,char *argv[])
{
    /* 两种cString初始化 */
    const char *str1{"hello"};// 第一种 不可变字符串
    char str2[]{"hello pillar"};// 第二种（常用） 

    /* strlen()长度 */
    cout << "len : " << strlen(str1) << endl;
    cout << "len : " << strlen(str2) << endl;

    /* strcmp()比较长度 */
    cout << strcmp(str1,str2) << endl;
    cout << strcmp(str2,str1) << endl;
    cout << strcmp(str2,str2) << endl;

    /* strcpy()复制，放在前一个里 */
    // cout << strcpy(str1,str2) <<endl;
    cout << strcpy(str2,str1) <<endl;
    cout << str2 << "\t" << str1 <<endl;
    
    /* strcat()连接，放在前一个里 */
    // cout << strcat(str1,str2) <<endl;
    cout << strcat(str2,str1) <<endl;
    cout << str2 << "\t" << str1 <<endl;

    /* 查找 */
    // strchr()从前开始查找并输出
    cout << strchr(str2,'l') << endl;
    // strrchr()从后开始查找并输出
    cout << strrchr(str2,'l') << endl;
    /* 统计字母 */
    int num{0};
    const char *temp{nullptr};
    temp = strchr(str2,'l');
    while (temp != nullptr)
    {
        cout << "temp : " << temp << endl;
        temp++;// 向后移一位
        num++;
        temp = strchr(temp,'l');
    }
    cout << "l : " << num << endl;

    return 0;
}