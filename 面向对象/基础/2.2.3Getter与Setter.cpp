/*****************************************************************************
 * @file 2.2.3Getter与Setter.cpp
 * @author pillar (pillar.shi3@gmail.com)
 * @brief 2.2.3: getter（获取属性）与settet（设置属性）
 * @version 0.1
 * @date 2022-08-09
 * 
 * @copyright Copyright (c) 2022
 * 
*****************************************************************************/

#include <iostream>

using namespace std;

const double PI{3.14};

class Circle
{
private:
    int radius{0};
    int number{0};
protected:
public:
    Circle()
    {
        number++;
        cout << "constructor default!!!" << endl;
    }
    Circle(int radius)
    {
        number++;
        this->radius = radius;
        cout << "constructor default" << endl;
    }

    /* 设置属性 */
    void set_radius(int radius)
    {
        this->radius = radius;
    }
    /* 取属性 */
    int get_radius()
    {
        return radius;
    }

    double area()
    {
        return PI*radius*radius;
    }

    ~Circle()
    {
        number--;
        cout << "destructor" << endl;
    }
};

int main(int argc,char *argv[])
{
    Circle *c{new Circle()};
    cout << c->get_radius() << endl;
    c->set_radius(1);
    cout << c->get_radius() << endl;
    cout << c->area() << endl;
    delete c;
    c = nullptr;

    return 0;
}