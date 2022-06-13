#include <stdio.h>
#include <string.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int sz = sizeof(arr)/sizeof(arr[0]);//计算元素个数
    int left = 0;//左下标
    int right = sz-1;//右下标
    while (left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid]>k)
        {
            right = mid-1;

        }
        else if(arr[mid]<k){
            left = mid+1;

        }
        else{
            printf("找到了,下标是：%d\n",mid);
            break;
        }
    }
    if(left>right){
        printf("找不到\n");
    }


    return 0;
}
//-----------------------------------------------------------------------------------

//函数 二分查找法
// int dichotomySearch(int arr[],int liftIndex,int rightIndex,int num){
 
//         int midval=(rightIndex+liftIndex)/2;//计算中间值的下标
 
//         if(liftIndex > rightIndex){//判断是否越界，越界则查询不到
//                 return -1;
//         }
//         if(arr[midval] > num){//左半边查询
//                 dichotomySearch(arr,liftIndex,midval-1,num);
//                 return 1;
//         }
//         else if(arr[midval] < num){//右半边查询
//                 dichotomySearch(arr,midval+1,rightIndex,num);
//                 return 1;
//         }
//         else{//查询的值等于中间下标的值
//                 return 1;
//         }
// }
 
// int main(){
 
//         int arr[]={11,34,89,77,99,-10,100};
//         int len=sizeof(arr)/sizeof(int);//计算数组个数
//         int liftIndex=len-1;//有边界个数
 
//         int findVal=dichotomySearch(arr,0,liftIndex,-100);//二分法查询函数
 
//         if(findVal==1){//判断是否查询到数值
//                 printf("fingding!\n");
//         }
//         else{
//                 printf("no find\n");
//         }
//         return 0;
// }
//----------------------------------------------------------------------------------------------

//
// #include <stdio.h>
// #include <string.h>
// #include <windows.h>
// #include <stdlib.h>
// int main()
// {
//     char arr1[] = "hello Box！！！！！！";
//     char arr2[] = "####################";
//     int left = 0;
//     //int right = sizeof(arr1)/sizeof(arr[0])-2  //减二的原因为字符串有默认的结束标志\0
//     int right = strlen(arr1)-1;//默认的字符串结束标志不计入字符串长度
//     while (left<=right)
//     {
//         arr2[left] = arr1[left];
//         arr2[right] = arr1[right];
//         printf("%s\n",arr2);
//         //休息一秒
//         Sleep(1000);
//         system("cls");//执行系统命令的一个函数-cls-清空屏幕
//         left++;
//         right--;
//     }
//     printf("%s\n",arr2);
//     return 0;
// }
