#include "Cat.h"

using namespace std;

int main(int argc,char *argv[])
{
    /* const objecj 的方法只能调用const method */
    const Cat cat("shd",2); // 值
    cout << cat.get_name() << endl;
    cat.print_object();

    const Cat *cat_point{&cat}; // 指针
    cat_point->print_object();

    const Cat &cat_ref{cat};
    cat_ref.print_object();

    return 0;
}