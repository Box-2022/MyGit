#include<stdio.h>
#include<string.h>
int main()
{
int i = 0;
int ch= 0;
char password[20] = {0};
printf("���������룺");
scanf("%s",password);//�������룬�������password������
//���û��س�ʱ�������\n
//ע������scanf�����ո��ֹͣ������
printf("�������������%s\n",password);//passwordֻ��ȡ\n֮ǰ��
//������ʣ��\n
//��ȡ\n
while ((ch=getchar()) !='\n')
{
    ;
}
printf("��ȷ�ϣ�Y/N��");
i = getchar();
if(i == 'Y')
{
    printf("ȷ�ϳɹ�\n");
}
else
{
    printf("ȷ��ʧ��\n");
}
}