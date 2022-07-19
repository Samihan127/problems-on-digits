//accept number and print sum of even digits
//input: 234
//output:6

#include<stdio.h>
int SumOfEvenDigits(int iNo)
{
    int iDigit=0;
	int iSum=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
		iSum=iSum+iDigit;
		}
		
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
  
  iRet=SumOfEvenDigits(iValue);
  printf("sum of even digits is:%d",iRet);
  return 0;
}