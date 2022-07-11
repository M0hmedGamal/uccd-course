#include <stdio.h>
void main ()
{
	float x ;
	printf ("Enter Your num of work hours");
	scanf(" %d",&x);
	if (x>=40)
	{
		x=x*50.0;
        printf("Your salary : %f ",x);
	}
 else
 {
	x= (x-(0.1*x))*50.0;
	printf("Your salary : %f ",x);
 }
 
 
}