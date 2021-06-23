//accpet 2 numbes from user and return the max and min number..
/*
algorithm for maximum..
start
	accpet firstnumber as no1
	accpet seconnd number as no2
	
	if no1>no2
	then no1 is max,
	otherwise no2 is max

*/
//include user defined file..
#include"header2.h"
int main()
{
	int ino1=0;
	int ino2=0;
	int iret=0;
	printf("enter the first numer\n");
	scanf("%d",&ino1);
	
	printf("enter the second numer\n");
	scanf("%d",&ino2);
	
	iret=maximum(ino1,ino2);
	printf("maximum number is:%d\n",iret);
	return 0;
	
}