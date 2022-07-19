//input: 7856
//output:
//6
//5
//8
//7
#include<stdio.h>
void DisplayDigits(int iNo)
{   
	
	for( ;iNo!=0;(iNo=iNo/10))
	{
		printf("%d\n",iNo%10);
	}
}
int main()
{
  int iValue=0;
  
  printf("enter a number:");
  scanf("%d",&iValue);
  
  DisplayDigits(iValue);
  return 0;
}