/*****************************************************************************
 * @file Circle.cpp
 * @author pillar (pillar.shi3@gmail.com)
 * @brief 定义类方法和静态类属性
 * @version 0.1
 * @date 2022-08-10
 * 
 * @copyright Copyright (c) 2022
 * 
*****************************************************************************/
#include "Circle.h"

void Circle::set_radius(int radius)
{
    this->radius = radius;
}

int Circle::get_radius()
{
    return radius;
}

double Circle::area()
{
    return PI*radius*radius;
}

int Circle::number = 0;