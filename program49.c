 //accept number from user and print reverse number
//input:127
//output:721

#include<stdio.h>
int Reverse(int iNo)
{
	int iDigit=0;
	int iRev=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}
	return iRev;
}
	
int main()
{
  int iValue=0;
  int iRet=0;
  
  printf("enter a number:");
  scanf("%d",&iValue);
  
  iRet=Reverse(iValue);
  
  printf("Reverse number is:%d\n",iRet);
  
  return 0; 
}
