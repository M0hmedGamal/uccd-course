
#include <stdio.h>
void main ()
{
	float x ;
	printf(" the grade is positive \n ");
	printf("enter your grade");
	scanf(" %f",&x);
		if (x>=0 && x<50)  {printf("failed");}
	else if (x>=50 && x<65){printf("Normal");}
	else if (x>=65 && x<75){printf("Good");}
	else if (x>=75 &&x<85 ){printf("very Good");}
 	else if (x>=85){printf("excellent");}	
}
//To day we have 5 labs 