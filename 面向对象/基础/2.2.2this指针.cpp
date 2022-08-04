/*****************************************************************************
 * @file 2.2.2this指针.cpp
 * @author pillar (pillar.shi3@gmail.com)
 * @brief 2.2.2: this和链式调用
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
    Circle()
    {
        radius = 1;
        cout << "constructor default!!!" << endl;
    }
    Circle(int radius)
    {
        // this指针
        this->radius = radius;
        cout << "constructor default" << endl;
    }
    
    ~Circle()
    {
        cout << "destructor" << endl;
    }
    
    void area()
    {
        cout << "area:" << PI*radius*radius << endl;
    }
    void print_object();

    /*指针链式调用: ->a()->b()*/
    Circle *set_radius_point(int radius)// 更改半径
    {
        cout << "set point" << endl;
        this->radius = radius;
        return this;
    }
    Circle *print_radius_point()// 打印半径
    {
        cout << "point:" << this->radius << endl;
        return this;
    }

    /* 引用链式调用: .a().b() */
    Circle &set_radius_ref(int radius)// 更改半径
    {
        cout << "set ref" << endl;
        this->radius = radius;
        return *this;// *this 是实例
    }
    Circle &print_radius_ref()// 打印半径
    {
        cout << "ref:" << this->radius << endl;
        return *this;
    }
   
protected:
private:
    int radius{0};
};

/* 类外也可以写方法 */
void Circle::print_object()
{
    cout << "object adsress:" << this << endl;
    cout << "radius=" << this->radius << endl;
}

int main(int argc,char *argv[])
{
    /* 堆上 */
    Circle *circle1{new Circle(4)};
    circle1->area();
    circle1->print_object();

    circle1->print_radius_point()->set_radius_point(8)->print_radius_point();
    circle1->print_radius_ref().set_radius_ref(9).print_radius_ref();

    delete circle1;
    circle1 = nullptr;

    cout << endl;
    /* 栈上 */
    Circle circle2(2);
    circle2.area();
    circle2.print_object();

    circle2.print_radius_point()->set_radius_point(6)->print_radius_point();
    circle2.print_radius_ref().set_radius_ref(7).print_radius_ref();

    return 0;
}