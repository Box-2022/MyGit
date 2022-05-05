#include<stdio.h>
#include<string.h>
int main()
{
int i = 0;
int ch= 0;
char password[20] = {0};
printf("请输入密码：");
scanf("%s",password);//输入密码，并存放在password数组中
//当敲击回车时，会出现\n
//注！！！scanf遇到空格会停止！！！
printf("您输入的密码是%s\n",password);//password只读取\n之前的
//缓冲区剩下\n
//读取\n
while ((ch=getchar()) !='\n')
{
    ;
}
printf("请确认（Y/N）");
i = getchar();
if(i == 'Y')
{
    printf("确认成功\n");
}
else
{
    printf("确认失败\n");
}
}