/*****************************************************************************
 * @file Circle.h
 * @author pillar (pillar.shi3@gmail.com)
 * @brief 类的定义
 * @version 0.1
 * @date 2022-08-10
 * 
 * @copyright Copyright (c) 2022
 * 
*****************************************************************************/


#include <iostream>
#include "constants.h"

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
    int radius{0};
protected:
public:
    static int number;
    Circle()
    {
        number++;
        std::cout << "constructor default!!!" << std::endl;
    }
    Circle(int radius)
    {
        number++;
        this->radius = radius;
        std::cout << "constructor default" << std::endl;
    }

    void set_radius(int radius);

    int get_radius();

    double area();

    ~Circle()
    {
        number--;
        std::cout << "destructor" << std::endl;
    }
};


#endif