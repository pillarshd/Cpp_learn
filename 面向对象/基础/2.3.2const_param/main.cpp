#include "Cat.h"

using namespace std;


void take_cat(Cat cat)
{
    cat.get_name();
    cat.print_object();
}


void take_const_cat(const Cat cat)
{
    cat.print_object();
}


void take_cat_pointer(Cat *cat)
{
    cat->get_name();
    cat->print_object();
}


void take_const_cat_pointer(const Cat *cat)
{
    cat->print_object();
}


void take_cat_ref(Cat &cat)
{
    cat.get_name();
    cat.print_object();
}


void take_const_cat_ref(const Cat &cat)
{
    cat.print_object();
}


int main(int argc,char *argv[])
{
    const Cat cat1("shd",3); 
    Cat cat2("pillar",4);


    /* const值形参可以放可变对象,但函数内不可以放非const method */
    take_const_cat(cat1);
    take_const_cat(cat2);
    cout << endl;

    /* 可变值形参可放const对象 */
    take_cat(cat1);
    take_cat(cat2);
    cout << endl;

    /* 指针和引用传递有const限制 */
    // take_cat_pointer(&cat1);
    take_cat_pointer(&cat2);
    take_const_cat_pointer(&cat1);
    take_const_cat_pointer(&cat2);
    cout << endl;
    // take_cat_ref(cat1);
    take_cat_ref(cat2);
    take_const_cat_ref(cat1);
    take_const_cat_ref(cat2);

    return 0;
}