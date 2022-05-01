#include<stdio.h>
#include<string.h>
//结构体---复杂对象---我们自己创造出来的一种类型
//创建结构体
struct Book
{
    char name[10];
    short price;
};
int main()
{
   struct Book b1 = {"C/C++",45};
   struct Book* pb = &b1;
   //->  结构体指针->成员
   printf("%s\n",pb->name);
   printf("%d\n",pb->price);
   //.   结构体变量.成员
   printf("%s\n",b1.name);
   printf("%d\n",b1.price);
   b1.price = 30;
   printf("%d\n",b1.price);
    

    return 0;
}