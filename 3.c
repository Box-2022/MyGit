#include <stdio.h>
#include <string.h>
//函数的实现
int Max(int x,int y)
{
    if (x>y)
    return x;
    else
    return y;

}
//宏的定义
#define MAX(X,Y) (X>Y?X:Y)
#define ADD(m,n) ((m)+(n))
int main(){
    int a = 10;
    int b = 20;
    int max = Max(a,b);
    printf("max = %d\n",max);
    int MAX = MAX(a,b);
    printf("MAx = %d\n",MAX);
    int sum = ADD(a,b);
    printf("sum = %d\n",sum);


}