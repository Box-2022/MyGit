#include <stdio.h>
#include <string.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int sz = sizeof(arr)/sizeof(arr[0]);//����Ԫ�ظ���
    int left = 0;//���±�
    int right = sz-1;//���±�
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
            printf("�ҵ���,�±��ǣ�%d\n",mid);
            break;
        }
    }
    if(left>right){
        printf("�Ҳ���\n");
    }


    return 0;
}
//-----------------------------------------------------------------------------------

//���� ���ֲ��ҷ�
// int dichotomySearch(int arr[],int liftIndex,int rightIndex,int num){
 
//         int midval=(rightIndex+liftIndex)/2;//�����м�ֵ���±�
 
//         if(liftIndex > rightIndex){//�ж��Ƿ�Խ�磬Խ�����ѯ����
//                 return -1;
//         }
//         if(arr[midval] > num){//���߲�ѯ
//                 dichotomySearch(arr,liftIndex,midval-1,num);
//                 return 1;
//         }
//         else if(arr[midval] < num){//�Ұ�߲�ѯ
//                 dichotomySearch(arr,midval+1,rightIndex,num);
//                 return 1;
//         }
//         else{//��ѯ��ֵ�����м��±��ֵ
//                 return 1;
//         }
// }
 
// int main(){
 
//         int arr[]={11,34,89,77,99,-10,100};
//         int len=sizeof(arr)/sizeof(int);//�����������
//         int liftIndex=len-1;//�б߽����
 
//         int findVal=dichotomySearch(arr,0,liftIndex,-100);//���ַ���ѯ����
 
//         if(findVal==1){//�ж��Ƿ��ѯ����ֵ
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
//     char arr1[] = "hello Box������������";
//     char arr2[] = "####################";
//     int left = 0;
//     //int right = sizeof(arr1)/sizeof(arr[0])-2  //������ԭ��Ϊ�ַ�����Ĭ�ϵĽ�����־\0
//     int right = strlen(arr1)-1;//Ĭ�ϵ��ַ���������־�������ַ�������
//     while (left<=right)
//     {
//         arr2[left] = arr1[left];
//         arr2[right] = arr1[right];
//         printf("%s\n",arr2);
//         //��Ϣһ��
//         Sleep(1000);
//         system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
//         left++;
//         right--;
//     }
//     printf("%s\n",arr2);
//     return 0;
// }
