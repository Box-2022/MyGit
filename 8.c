#include<stdio.h>
#include<string.h>
int main()
{
    //for(���ʽ1�����ʽ2�����ʽ3)
    //   (��ʼ��) ��(�ж�)��(����)
    //һ�㲻����forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
    //һ��forѭ�����Ʊ�����ȡֵ���á�ǰ�պ󿪡�д��
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
            continue;//��ֹ����ѭ��������i=5�����������������
        printf("%d\n",i);

    }
    // for(int a=0;a<10;a++)
    // {
    //     for(int b=0;b<10;b++)
    //     {
    //         printf("hhhhh\n");//ѭ��100�Σ����100��hhhhh
    //     }
    // }
    int a = 0;
    int b = 0;
    for(;a<10;a++)
    {
        for(;b<10;b++)
        {
            printf("hhhhh\n");//��a����0��b=1,2,3,4,5,6,7,8,9,10֮��a=2,bһֱ����10
            //ѭ��ִֻ��10��
        }
    }
    //������ forѭ���б��ʽ1,2,3������ʡ�ԣ���������ʡ��
    // int  n;
    // int product = 1;
    // printf("������n��ֵ\n");
    // scanf("%d",&n);
    // for(int m=1;m<=n;m++)
    // {
    //     product=product*m;
        
    // }
    // printf("n�Ľ׳�Ϊ%d\n",product);
    int n;
    int product = 1;
    int sum = 0;
    printf("������n��ֵ\n");
    scanf("%d",&n);
    for(int m=1;m<=n;m++)
    {
        product=product*m;
        sum=sum+product;
        
    }
        printf("ǰn��Ľ׳˵ĺ�Ϊ%d\n",sum);
    return 0;
}