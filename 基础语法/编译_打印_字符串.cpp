/*****************************************************************************
 * @file 编译_打印_字符串.cpp
 * @author 施豪栋 (pillar.shi@foxmail.com)
 * @brief 编译 打印 字符串
 * @version 0.1
 * @date 2022-07-05
 * @copyright Copyright (c) 2022
*****************************************************************************/

/*编译
    1.通过插件Code Runner
    2.点击菜单的终端,找到点击运行生成任务,选择相应编译器编译,完成编译后在Windows
      终端输入 ./<文件名> 运行
*/
#include<iostream>
#include<string>

/* 若没有，下面的cout和string等要变成std::cout和std::string */
using namespace std;

/*****************************************************************************
 * @brief main函数 
 * 
 * @param argc 命令行参数个数（包括了*.exe）
 * @param argv 命令行参数字符串列表
 *
 * @return int 
 * @retval 
 */
int main(int argc,char *argv[])
{
    /* c++字符串(类) 和c中字符串char *num(char num[])有区别 */
    string num1,num2;
    cout << "number1:";
    cin >> num1;
    cout << "number2:";
    cin >> num2;
    
    int n1=stoi(num1);
    int n2=stoi(num2);

    cout << n1 << "+" << n2 << "=" << n2+n1 << endl;
    printf("%d+%d=%d\n",n1,n2,n1+n2);// c语言打印
    
    /*
        cout实际上调用了成员运算符函数operator<<
        endl是一个操纵符,并不只是执行了换行操作,还对输出的缓冲区进行了刷新
    */
    cout << "================================" << endl;
    cout << ((1<=>0)>0) <<endl;// c++20新特性
    cout << "================================" << endl;

    /* 命令行传参 
        argc 命令行参数个数
        argv 命令行参数字符串列表
       编译后windows终端输入 .\编译_打印_字符串.exe dfdf dfsd
       会打印:
        You input 3 arguments
        arg: 0: D:\C++学习\基础语法\编译_打印_字符串.exe
        arg: 1: dfdf
        arg: 2: dfsd
     */
    if(argc!=1)
    {
        cout << "You input " << argc << " arguments" << endl;
        for (size_t i = 0; i < argc; i++)
        {
            cout << "arg: " << i << ": " << argv[i] << endl;
        }
        
    }
}