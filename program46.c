//accept number and print sum of digits
//input: 234
//output:9

#include<stdio.h>
int SumOfDigits(int iNo)
{
  int iDigit=0;
	int iSum=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
	}
	return iSum;

}
int main()
{
  int iValue=0;
  int iRet=0;
  
  printf("enter a number:");
  scanf("%d",&iValue);
  
  iRet=SumOfDigits(iValue);
  printf("sum of digits is:%d",iRet);
  return 0;
}