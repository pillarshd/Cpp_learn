#include<iostream>
#include<string>

using namespace std;

#define DPI 99 // 预定义

/* 赋初值方式：
    1.int a=1;
    2.int a{1};
*/
int Num{2};// 全局变量

const double PI{3.14};// 全局常量

int main(int argc,char *argv[])
{
    int a{1};
    // a{2};// 更改只能用 a=2;
    
    cout << "Num : " << Num << endl;
    Num = 3;
    cout << "Num : " << Num << endl;

    // PI = 4.321;// 常量不可变
    cout << "PI : " << PI << endl;

    int dpi_int{DPI};
    string dpi_string{DPI};
    cout << "dpi_int : " << dpi_int << endl;
    cout << "dpi_int+1 : " << dpi_int+1 << endl;
    cout << "dpi_string : " << dpi_string << endl;
    cout << "dpi_string 99 ASCII is \"c\"" << endl;
}