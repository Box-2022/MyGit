#include<stdio.h>
#include<string.h>
// ѭ����� 
// while
// for
// do while 
int main()
{
//while�����ʽ��
//      ѭ�����;  //�����ʽΪ���򷴸�ִ��
//if (���ʽ)
//      ѭ�����;  //�����ʽΪ����ִֻ��һ��
//��ѭ����ֻҪ����break����ֹͣ���ڵ�����ѭ����ֱ����ֹѭ��
//����break������������ֹѭ����

int i = 0;
while (i<=10)
{
    if(i == 5)
        break;
        printf("%d\n",i);
        i++;    /* code */
}
//continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ���е�continue��ߵĴ��벻����ִ�У�
//����ֱ����ת��while����ѭ�����֣�������һ��ѭ��������ж�
while (i<=10)
{
    if(i == 5)
        continue;
        printf("%d\n",i);
        i++;   //continue��ֹ����ѭ�������ٽ���i++,һֱִ��i==5,������ѭ��
}
int ch = 0;
//EOF---end of file---�ļ�������־--��-1��
//ctrl+z
while ((ch=getchar()) != EOF)
{
    putchar(ch);
}


    return 0;
}