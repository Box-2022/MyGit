#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int a;
    int b;
    int c;
    printf("请输入三个数：");
    //思路：a中放最大，b次之，c最小
    scanf("%d%d%d",&a,&b,&c);
    if (a<b){
        int tamp = a;//引入一个 临时变量tamp让a中放b的值，b中放a的值
        a = b;
        b = tamp;
    }
    if (a<c){
        int tamp = a;
        a = c;
        c = tamp;
    }
    if (b<c){
        int tamp = b;
        b = c;
        c = tamp;

    }
    printf("三个数从大到小为：%d,%d,%d\n",a,b,c);
    //输出0-100的3的倍数
    int i;
    for(i=1;i<=100;i++){
        if(i%3 == 0){
            printf("%d ",i);
            printf("\n");
        }
    }
    //求两个数的最大公约数
    //辗转相除法
    int m = 100;
    int n = 45;
    int r = 0;
    while (m%n)
    {
        r = m%n;
        m = n;
        n = r;
        /* code */
    }
    printf("最大公约数为：%d\n",n);
    //判断是否为闰年
    int year = 0;
    for (year=1000;  year<=2000;year++){
        if(year%4 == 0 && year%100 != 0)
        {
            printf("该年为闰年%d ",year);
        }
        else if(year%400 == 0)
        {
            printf("该年为闰年%d ",year);
        }
        // //两者结合
        // if(((year%4 == 0) &&(year%100 != 0)) || (year%400 == 0))
        // {
        //     printf("该年为闰年%d ",year);
        // }
    }
    //判断100-200之间的素数
    //1.试除法（最差的）
    int x;
    int y;
    for (x=100; x<=200; x++){
        for(y=2;y<x;y++){
            if(x%y == 0){
                break;
            }
        }
        if (y == x){
            printf("%d ",x);
        }
    }
    //2.算到开平方
    //     for (x=100; x<=200; x++){
    //     for(y=2;y<=sqrt(x);y++){
    //         if(x%y == 0){
    //             break;
    //         }
    //     }
    //     if (y>sqrt(x)){
    //         printf("%d ",x);
    //     }
    // }
    //3.排除偶数
    //     for (x=101; x<=200; x+=2){
    //     for(y=2;y<sqrt(x);y++){
    //         if(x%y == 0){
    //             break;
    //         }
    //     }
    //     if (y<sqrt(x)){
    //         printf("%d ",x);
    //     }
    // }
    return 0;
}