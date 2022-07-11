#include <stdio.h>
void main ()
{
	int x ;
	int y ;
	printf("Enter Your ID : ");
	scanf(" %d",&x);
	switch(x)
	{
		case 1234 :
		printf("Enter Your Password : ");
		scanf(" %d",&y);
		if (y==4567){printf("Hello Mohamed ");}
		else {printf("Wrong PASSWORD");}
		break;
		default : printf("Invalid ID");
	}
	
}