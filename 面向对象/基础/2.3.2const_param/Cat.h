/*****************************************************************************
 * @file Cat.h
 * @author pillar (pillar.shi3@gmail.com)
 * @brief 类cat
 * @version 0.1
 * @date 2022-08-14
 * 
 * @copyright Copyright (c) 2022
 * 
*****************************************************************************/
#include <iostream>
#include <string>

#ifndef CAT_H
#define CAT_H

class Cat
{
private:
    std::string name{" "};
    int age{0};
protected:
public:
    Cat(std::string name,int age)
    {
        this->name = name;
        if (age > 0 && age <25)
        {
            this->age = age;
        }
        else
        {
            std::cout << "error: age!" << std::endl;
        }
    }

    void set_name(std::string);
    void set_age(int);
    /* const加在后面表示const method，且方法内不能有修改操作 */
    std::string get_name() const;
    const int get_age();
    void print_object() const;

    ~Cat()
    {
        std::cout << "cat dead!" << std::endl;
    }
};

#endif