#include<stdio.h>
#include<stdio.h>
//��֧��� 
// if 
// Switch
int main(){
    int age;//C������һ���ֺ�Ϊһ�����
    printf("������������䣺\n");
    scanf("%d", &age);
    //;//ֻ��һ���ֺ���һ�������
    if(age<18)
    {
        printf("δ����\n");
        printf("�ú�ѧϰ\n");
        //�����һ��{}����һ�������
    }
    else
    {
        printf("����\n");
    }
    int a = 0;
    int b = 2;
    if(a==1)
        if (b==2)
            printf("hehe\n");
        else 
        printf("haha\n");//ע������else�������δƥ���if���
    // int i=1;
    // while (i<=100)
    // {
    //     if(i%2==1)
    //     printf("�����������%d\n",i);
    //     else
    //     printf("�������ż��%d\n",i);
    //     i++;
    // }
    int day = 0;
    printf("����������1-7\n");
    scanf("%d",&day);
    //Switch����У�����û��ʵ�ַ�֧������break����ʵ�������ķ�֧
    //Switch����п���ʹ��if���,Ҳ��������ʹ��Ƕ��
    switch (day)//Ϊ���ͱ��ʽ
    {
    case 1://case ���γ������ʽ
        printf("����������һ");
        break;
    case 2:
        printf("���������ڶ�");
        break;
    case 3:
        printf("������������");
        break;
    case 4:
        printf("������������");
        break;
    case 5:
        printf("������������");
        break;   
    case 6:
        printf("������������");
        break;
    case 7:
        printf("������������");
        break;
    default://û���ϸ��˳��
        break;
    }
    

    return 0;
}