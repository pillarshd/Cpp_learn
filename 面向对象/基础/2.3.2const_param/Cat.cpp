/*****************************************************************************
 * @file Cat.cpp
 * @author pillar (pillar.shi3@gmail.com)
 * @brief 类cat方法
 * @version 0.1
 * @date 2022-08-14
 * 
 * @copyright Copyright (c) 2022
 * 
*****************************************************************************/
#include "Cat.h"


void Cat::set_name(std::string name)
{
    this->name = name;
}


void Cat::set_age(int age)
{
    this->age = age;
}


std::string Cat::get_name() const
{
    return this->name;
}


const int Cat::get_age()
{
    return this->age;
}

/*****************************************************************************
 * @brief 地址  名字  年龄
 * 
 ****************************************************************************/
void Cat::print_object() const
{
    std::cout << "Cat (" << this << ")" << std::endl;
    std::cout << "Cat's name is " << this->name << "." << std::endl;
    std::cout << "Cat's age is "<< this->age << "." << std::endl;
}