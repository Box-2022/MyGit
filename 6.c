#include<stdio.h>
#include<string.h>
// 循环语句 
// while
// for
// do while 
int main()
{
//while（表达式）
//      循环语句;  //若表达式为真则反复执行
//if (表达式)
//      循环语句;  //若表达式为真则只执行一次
//在循环中只要遇到break，就停止后期的所有循环，直接终止循环
//所以break是用于永久终止循环的

int i = 0;
while (i<=10)
{
    if(i == 5)
        break;
        printf("%d\n",i);
        i++;    /* code */
}
//continue是用于终止本次循环的，也就是本次循环中的continue后边的代码不会再执行，
//而是直接跳转到while语句的循环部分，进行下一次循环的入口判断
while (i<=10)
{
    if(i == 5)
        continue;
        printf("%d\n",i);
        i++;   //continue终止本次循环，不再进行i++,一直执行i==5,进入死循环
}
int ch = 0;
//EOF---end of file---文件结束标志--（-1）
//ctrl+z
while ((ch=getchar()) != EOF)
{
    putchar(ch);
}


    return 0;
}