/*
	GMW ������   i++ ++i ԭ˼�� 
	GCC ������ 	 ��֣�
	 
*/ 
#include<stdio.h>
	
int main(void)
{
	int i = 1, j = 0;
															
	int a = 5, b = 5, c = 5, d = 5, e = 5, f = 5, A, B, C, D, F;		//gcc ������ ��˼�룿���� 
	A = (++a) + (++a);			//�������ҿ���1��ûʹ�� �ڲ� x + 1��2�� ûʹ�� x + 1��  3������ʹ�� 7 + 7 
	B = (b++) + (++b);			//   		  1��ʹ�� b = 5�� �ڲ� b + 1�� 2��ûʹ���ڲ� b + 1 �� 3�� ����ʹ�� 5 + 7 
	C = (++c) + (c++);			//            1��ûʹ�� �ڲ� t + 1 ��  2��ʹ�� t = 6�����ڲ� t + 1    3  ����ʹ��  7 + 6 
	D = (d++) + (d++); 			//			  1�� ʹ�� a = 5  �� �ڲ�a + 1�� 2��ʹ��a = 6�� ���ڲ� a + 1.  3������ʹ��  5 + 6 
	F = (f++)+(++f)+(f++);
	printf("%d   %d  %d  %d    %d\n\n", A, B, C, D, F);
	
	switch(i++)
	{
		case 1:printf("����case1��%d\n", i);break;
		case 2:printf("����case2��%d\n", i);break;
		default:printf("����default��%d\n", i);break;
	}
	printf("i�����ǣ�%d\n\n", i);
	
	if(j++)
	{
		printf("�������ϲ����룬j = %d\n", j);
	}
	else
	{
		printf("����������, j = %d\n", j);
	}
	
	printf("b�����ǣ�%d\n", j);	
	return 0;
	
}
