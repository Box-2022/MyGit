#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int a;
    int b;
    int c;
    printf("��������������");
    //˼·��a�з����b��֮��c��С
    scanf("%d%d%d",&a,&b,&c);
    if (a<b){
        int tamp = a;//����һ�� ��ʱ����tamp��a�з�b��ֵ��b�з�a��ֵ
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
    printf("�������Ӵ�СΪ��%d,%d,%d\n",a,b,c);
    //���0-100��3�ı���
    int i;
    for(i=1;i<=100;i++){
        if(i%3 == 0){
            printf("%d ",i);
            printf("\n");
        }
    }
    //�������������Լ��
    //շת�����
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
    printf("���Լ��Ϊ��%d\n",n);
    //�ж��Ƿ�Ϊ����
    int year = 0;
    for (year=1000;  year<=2000;year++){
        if(year%4 == 0 && year%100 != 0)
        {
            printf("����Ϊ����%d ",year);
        }
        else if(year%400 == 0)
        {
            printf("����Ϊ����%d ",year);
        }
        // //���߽��
        // if(((year%4 == 0) &&(year%100 != 0)) || (year%400 == 0))
        // {
        //     printf("����Ϊ����%d ",year);
        // }
    }
    //�ж�100-200֮�������
    //1.�Գ��������ģ�
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
    //2.�㵽��ƽ��
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
    //3.�ų�ż��
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