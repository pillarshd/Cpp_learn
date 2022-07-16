/**
 * @file 函数指针与回调.cpp
 * @author pillar (pillar.shi@foxmail.com)
 * @brief 5.3: 函数指针-->回调
 * @version 0.1
 * @date 2022-07-16
 * 
 * @copyright Copyright (c) 2022
 * 
*/

#include <iostream>

using namespace std;

char encode(const char &);
char decode(const char &);
void change(string &,char (*)(const char &));

/**
 * @brief 加密 +3 
 * 
 * @param c1 加密字符 
 * 
 * @return char 
 * @retval 加密结果
 */
char encode(const char &c1)//引用比值传递效率高，省去了值的拷贝
{
    return c1+3;   
}

/**
 * @brief 解密 -3 
 * 
 * @param c2 解密字符 
 * 
 * @return char 
 * @retval 解密结果
 */
char decode(const char &c2)
{
    return c2-3;
}

/**
 * @brief 加密或解密
 * 
 * @param str 字符串
 * @param cbf 回调函数
 */
void change(string &str,char (*cbf)(const char &))
// void change(string &str,char *cbf(const char &))
{
    for (size_t i = 0;i < str.size();i++)
    {
        str[i] = cbf(str[i]);
        // str[i] = *cbf(str[i]);
    }
}

int main(int argc,char *argv[])
{
    string str{"hello!"};
    
    change(str,encode);
    cout << "encode : " << str << endl;
    
    change(str,decode);
    cout << "encode : " << str << endl;

    return 0;
}