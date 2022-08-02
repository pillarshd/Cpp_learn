/*****************************************************************************
 * @file 2.1C++面向对象.cpp
 * @author pillar (pillar.shi3@gmail.com)
 * @brief 2.1: C++面向对象
 * @version 0.1
 * @date 2022-08-01
 * 
 * @copyright Copyright (c) 2022
 * 
*****************************************************************************/

/*****************************************************************************
// 1.继承
    继承使子类有父类的属性和方法，减少重复代码
    C++支持继承多种多样且可以多继承

// 2.封装
    把事物封装成类，类把自己的数据和方法只对特定的类和方法开放
    友元，限定符

// 3.多态
    为不同的实体提供统一的接口，使用单一的符号来表示多种不同的类型
    C++可以通过虚函数实现接口功能（虽然虚函数不推荐）

// 以上三的特性是设计模式的基石
*****************************************************************************/

#include <iostream>

using namespace std;

/* 例子 */
/* 基类（父类） */
class Vector2
{
public:
    /* 构造函数:对象初始化 */
    Vector2(int x,int y)
    {
        cout << "Construct Vector2" << endl;
    }

    /* (虚)析构函数:多像销毁使执行 */
    virtual ~Vector2()
    {
        cout << "virtual" << endl;
    }

    /* 虚函数:给以接口 */
    virtual void print() const // 
    {
        cout << "(" << x << "," << y << ")" << endl;
    }

protected:
private:
    int x = 0;
    int y = 0;
};

/* 派生类（子类） */
class Vector3 : public Vector2
{
public:
    Vector3(int x,int y,int z) : Vector2(x,y),z(z)
    {
        x3 = x;
        y3 = y;
        cout << "Construct Vector3" << endl;
    }
    void print1()
    {
        cout << "[" << x3 << "," << y3 << "," << z << "]" << endl;
    }
protected:
private:
    int x3;
    int y3;
    int z;
};

int main(int argc,char *argv[])
{
    /* 栈上 */
    Vector2 ex2(1,2);
    Vector3 ex3(4,5,3);
    ex2.print();
    ex3.print();
    ex3.print1();

    /* 堆上 */
    Vector3 *ex = new Vector3(1,2,3);
    ex->print();
    ex->print1();
    delete ex; // 没有，则不会调用析构函数
    ex = nullptr;
    return 0;
}