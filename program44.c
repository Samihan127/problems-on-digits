//accept number and print number of digits
//input: 7856
//output:4

#include<stdio.h>
int DisplayNoOfDigits(int iNo)
{
  int iDigit=0;
	int iCnt=0;
	
	while(iNo!=0)
	{
		//iDigit=iNo%10;
		iCnt++;
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
  
  iRet=DisplayNoOfDigits(iValue);
  printf("number of digits are:%d",iRet);
  return 0;
}