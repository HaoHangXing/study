/*
	GMW 编译器   i++ ++i 原思想 
	GCC 编译器 	 奇怪？
	 
*/ 
#include<stdio.h>
	
int main(void)
{
	int i = 1, j = 0;
															
	int a = 5, b = 5, c = 5, d = 5, e = 5, f = 5, A, B, C, D, F;		//gcc 编译器 的思想？？？ 
	A = (++a) + (++a);			//从左往右看：1、没使用 内部 x + 1。2、 没使用 x + 1。  3、整体使用 7 + 7 
	B = (b++) + (++b);			//   		  1、使用 b = 5； 内部 b + 1。 2、没使用内部 b + 1 。 3、 整体使用 5 + 7 
	C = (++c) + (c++);			//            1、没使用 内部 t + 1 。  2、使用 t = 6。再内部 t + 1    3  整体使用  7 + 6 
	D = (d++) + (d++); 			//			  1、 使用 a = 5  再 内部a + 1。 2、使用a = 6， 在内部 a + 1.  3、整体使用  5 + 6 
	F = (f++)+(++f)+(f++);
	printf("%d   %d  %d  %d    %d\n\n", A, B, C, D, F);
	
	switch(i++)
	{
		case 1:printf("进入case1：%d\n", i);break;
		case 2:printf("进入case2：%d\n", i);break;
		default:printf("进入default：%d\n", i);break;
	}
	printf("i最终是：%d\n\n", i);
	
	if(j++)
	{
		printf("条件符合并进入，j = %d\n", j);
	}
	else
	{
		printf("条件不符合, j = %d\n", j);
	}
	
	printf("b最终是：%d\n", j);	
	return 0;
	
}
