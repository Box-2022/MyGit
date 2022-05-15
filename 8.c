#include<stdio.h>
#include<string.h>
int main()
{
    //for(表达式1；表达式2；表达式3)
    //   (初始化) ；(判断)；(调整)
    //一般不会在for循环体内修改循环变量，防止for循环失去控制
    //一般for循环控制变量的取值采用“前闭后开”写法
    int i=0;
    for(i=1;i<=10;i++)
    {
        if(i == 5)
            break;
        printf("%d\n",i);

    }
    for(i=1;i<=10;i++)
    {
        if(i == 5)
            continue;//终止本次循环，跳过i=5的输出，后面继续输出
        printf("%d\n",i);

    }
    // for(int a=0;a<10;a++)
    // {
    //     for(int b=0;b<10;b++)
    //     {
    //         printf("hhhhh\n");//循环100次，输出100次hhhhh
    //     }
    // }
    int a = 0;
    int b = 0;
    for(;a<10;a++)
    {
        for(;b<10;b++)
        {
            printf("hhhhh\n");//当a等于0，b=1,2,3,4,5,6,7,8,9,10之后a=2,b一直都是10
            //循环只执行10次
        }
    }
    //！！！ for循环中表达式1,2,3，均可省略，但不建议省略
    // int  n;
    // int product = 1;
    // printf("请输入n的值\n");
    // scanf("%d",&n);
    // for(int m=1;m<=n;m++)
    // {
    //     product=product*m;
        
    // }
    // printf("n的阶乘为%d\n",product);
    int n;
    int product = 1;
    int sum = 0;
    printf("请输入n的值\n");
    scanf("%d",&n);
    for(int m=1;m<=n;m++)
    {
        product=product*m;
        sum=sum+product;
        
    }
        printf("前n项的阶乘的和为%d\n",sum);
    return 0;
}