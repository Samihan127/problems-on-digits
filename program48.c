//accept number and print  even digits
//input: 234
//output:2 4

#include<stdio.h>
void EvenDigits(int iNo)
{
    int iDigit=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
		  printf("%d\n",iDigit);
		}
		
		iNo=iNo/10;
	}
}
int main()
{
  int iValue=0;

  printf("enter a number:");
  scanf("%d",&iValue);
  
  EvenDigits(iValue);
  
  return 0;
}