//accept number and return multiplication of all digits
//input:234
//output:24

#include<stdio.h>
int MultDigits(int iNo)
{
	int iDigit=0;
	int iMul=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			iDigit=iDigit+1;
		}
		
		iMul=iMul*iDigit;
		
		iNo=iNo/10;
	}
	return iMul;
}
int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("enter a number:");
	scanf("%d",&iValue);
	iRet=MultDigits(iValue);
	
	printf("%d",iRet);
	
	return 0;
}