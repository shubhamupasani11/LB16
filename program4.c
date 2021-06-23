//accpetone numbe from user aand display the numbers till that number on scrreen
/*
start
	accpet one number as ino
	if number is nagatvie convertto positive
	create one counter as icnt and set to
	iterate till counter less than or eqaul to that number..print the values on screen..
	increment value by one
	continue.
stop
*/
#include<stdio.h>
//prototype: void Display(int);
void Display(int ino)   //5
{
	//12345
	//start,end,steps(1,5,1)
	int icnt=0;
	if(ino<0)    //input updator..
	{
		ino=-ino;
	}
	for(icnt=1;icnt<=ino;icnt++)
	{
		printf("%d\n",icnt);
	}
	
	
}




int main()
{
	int ivalue=0;
	
	printf("enter the number\n");
	scanf("%d",&ivalue);
	
	
	Display(ivalue);
	
	return 0;
	
}