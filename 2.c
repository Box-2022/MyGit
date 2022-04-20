#include <stdio.h>
#include <string.h>
int main()
{
    int a = 10;
    int b = a++;//后置++，先使用，再++
    int c = ++a;//前置++，先++。再使用
    printf("a = %d\nb = %d\nc = %d\n",a,b,c);
    int n = (int)3.14;//强制类型转换
    int max = 0;
    max = (a > b ? a:b);//条件操作符
    printf("max = %d\n",max);
    //只要是整数，内存中存储的都是二进制的补码
    //正数的原码，反码，补码相同
    //负数：
    //原码（直接按照正负写出二进制序列）
    //反码（原码的符号位不变，其他位按位取反）
    //补码（反码+1）


    //typedef - 类型定义-类型重定义
    typedef unsigned int u_int;
    u_int num1 = 20;//无符号的整型 signed int是有符号的整型

    //static 修饰局部变量 --- 局部变量的生命周期变长
    //static 修饰全局变量 --- 改变变量的作用域---让静态的全局变量只能在自己所在的源文件内部使用
    //static 修饰函数 --- 改变了函数的链接属性（外部链接属性————>内部链接属性）
     int* p = &a;//取地址
     printf("%p\n",&a);//有一种变量是用来存放地址的---指针变量
     printf("%p\n",p);
     *p = 20;//* ---解引用操作符
     printf("a = %d\n",a);
     printf("%d\n",sizeof(p));//指针大小在32位平台位4字节，64位平台位8字节
    return 0;
}