#include <stdio.h>
#include <string.h>
//常量！！！
//枚举常量
enum Sex
{
   MALE,     //0
   FEMALE,  //1
   SECRET  //2
};
int main ()
{
     //const - 常属性
     //const修饰的常变量
     const int num = 4; 
     printf("%d\n",num);//num是变量，但是又是常属性，所以我们说num是常变量
     //int num = 8;
     //printf("%d\n",num);
     //#define 定义的标识符常量
     //枚举常量--一一列举 枚举关键字-enum



     //由双引号引起来的一串字符称为字符串
     //注：字符串的结束标志是\0的转义字符。在计算字符串长度时，\0是结束标志，不算作字符串内容
     char arr1[] = "abc";
     //"abc"--'a','b','c','\0'隐藏结束标志
     char arr2[] = {'a','b','c'};
     //'a','b','c' 没有结束标志
     printf("%s\n",arr1);
     printf("%s\n",arr2); 
     printf("%d\n",strlen(arr1));//3
     printf("%d\n",strlen(arr2));//6

     //转义字符\n \t \0 等，当要输出的内容与转义字符重合时，用\转移转移字符
     printf("D:\\t\\n");
     printf("\n");
     int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组
     int i = 0;
     while (i<10)
     {
          printf("%d\n",arr[i]);
          i++;
     }
     
     return 0;

}