#include<stdio.h>
#include<stdio.h>
//分支语句 
// if 
// Switch
int main(){
    int age;//C语言中一个分号为一条语句
    printf("请输入你的年龄：\n");
    scanf("%d", &age);
    //;//只有一个分号是一条空语句
    if(age<18)
    {
        printf("未成年\n");
        printf("好好学习\n");
        //这里的一对{}就是一个代码块
    }
    else
    {
        printf("成年\n");
    }
    int a = 0;
    int b = 2;
    if(a==1)
        if (b==2)
            printf("hehe\n");
        else 
        printf("haha\n");//注！！！else与最近的未匹配的if配对
    // int i=1;
    // while (i<=100)
    // {
    //     if(i%2==1)
    //     printf("这个数是奇数%d\n",i);
    //     else
    //     printf("这个数是偶数%d\n",i);
    //     i++;
    // }
    int day = 0;
    printf("请输入数字1-7\n");
    scanf("%d",&day);
    //Switch语句中，我们没法实现分支，搭配break才能实现真正的分支
    //Switch语句中可以使用if语句,也可以允许使用嵌套
    switch (day)//为整型表达式
    {
    case 1://case 整形常量表达式
        printf("今天是星期一");
        break;
    case 2:
        printf("今天是星期二");
        break;
    case 3:
        printf("今天是星期三");
        break;
    case 4:
        printf("今天是星期四");
        break;
    case 5:
        printf("今天是星期五");
        break;   
    case 6:
        printf("今天是星期六");
        break;
    case 7:
        printf("今天是星期七");
        break;
    default://没有严格的顺序
        break;
    }
    

    return 0;
}