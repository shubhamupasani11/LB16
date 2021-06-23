//accpet a number from user and return the addition of all the digits upto that numeber..

#include<stdio.h>
int Sum(int no)
{
	
	int icnt=0;
	int sum=0;
	if(no==0)
	{
		return 0;
	}
	if(no<0)
	{
		no=-no;
	}
	for (icnt=1;icnt<=no;icnt++)
	{
		sum=sum+icnt;
	}
	return sum;
}

int main()
{
	int value1=0;
	int iret=0;
	printf("enter the number\n");
	scanf("%d",&value1);
	
	iret=Sum(value1);
	printf("summation is:%d",iret);
	return 0;
	
}