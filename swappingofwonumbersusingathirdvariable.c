#include<stdio.h>
void main()
{
	float a,b,c;
	printf("Enter the value of a and b\n");
	scanf("%f%f",&a,&b);
	printf("the value of a and b befor swapping a=%f\n b=%f\n",a,b);
	//logic for swapping of numbers
	c=a;
    a=b;
    b=c;
	printf("the value of a and b after swapping a=%f\n b=%f\n",a,b);
}
