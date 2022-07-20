//accept number and check whether it contains 0 or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
 
BOOL ChkZero(int iNo)
{
	int iDigit=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
		iNo=iNo/10;
	}
}

int main()

{
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("enter a number:");
	scanf("%d",&iValue);
	
	bRet=ChkZero(iValue);
	if(bRet==TRUE)
	{
		printf("it contains zero");
	}
	else
	{
		printf("it does not contain zero");
	}
	
	return 0;	
}