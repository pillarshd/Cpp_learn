/*****************************************************************************
 * @file 2.2.1类和对象.cpp
 * @author pillar (pillar.shi3@gmail.com)
 * @brief 2.2.1: 对象和类的基础
 * @version 0.1
 * @date 2022-08-04
 * 
 * @copyright Copyright (c) 2022
 * 
*****************************************************************************/

#include <iostream>

using namespace std;

const double PI{3.14};

class Circle
{
public:
    // static int number{0};
    static int number;

    /* 构造函数 */
    Circle()
    {
        number++;
        radius = 1;
        cout << "constructor default!!!" << endl;
    }
    Circle(int r)
    {
        number++;
        radius = r;
        cout << "constructor default" << endl;
    }
    /* 析构函数 */
    ~Circle()
    {
        number--;
        cout << "destructor" << endl;
    }
    /* 方法 */
    void area()
    {
        cout << "area:" << PI*radius*radius << endl;
    }
protected:
private:
    int radius{0};
};

int Circle::number = 0;

int main(int argc,char *argv[])
{
    Circle circle1;
    cout << Circle::number << endl;
    Circle circle2(4);
    cout << Circle::number << endl;

    circle1.area();
    circle2.area();

    /* 析构函数可以调用，但不要这么做 */
    circle1.~Circle();
    circle1.area();
    cout << Circle::number << endl;
    return 0;
}