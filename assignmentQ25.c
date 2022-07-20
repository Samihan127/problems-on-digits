//accept number and count frequency of such digits which are less than 6
//input:234
//output:3

#include<stdio.h>
int CountTwo(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit<6)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}
int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("enter a number:");
	scanf("%d",&iValue);
	iRet=CountTwo(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
