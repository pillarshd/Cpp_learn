/*****************************************************************************
 * @file main.cpp
 * @author pillar (pillar.shi3@gmail.com)
 * @brief 多文件编译主函数
 * @version 0.1
 * @date 2022-08-10
 * 
 * @copyright Copyright (c) 2022
 * 
*****************************************************************************/

#include <iostream>

#include "Circle.h"

using namespace std;

/*
 * g++ main.cpp Circle.cpp -o main.exe
*/

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