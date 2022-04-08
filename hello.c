#include <stdio.h>//standard input output 标准输入输出
int a = 10;//全局变量-定义在代码块（{}）之外的变量，当全局变量与局部变量相同时，局部变量优先
int main()//主函数-程序的入口-main函数有且只有一个（前面有int，说明返回整型）
{
    printf("hello world!\n");//print function - printf-打印函数
    printf("%d\n",sizeof(char));//1字节(sizeof是操作符，不是函数后面的括号可省略)
    printf("%d\n",sizeof(short));//2
    printf("%d\n",sizeof(int));//4
    printf("%d\n",sizeof(long));//4
    printf("%d\n",sizeof(long long));//8
    printf("%d\n",sizeof(float));//4
    printf("%d\n",sizeof(double));//8
    return 0;//返回整型0，与main函数前面的int相对应
}