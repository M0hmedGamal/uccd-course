#include <stdio.h>
void main ()
{
	int x ;
	printf("Please enter your id");
	scanf(" %d",&x);
	switch (x)
	{
		case 1234 :
		printf("welcome Ahmed");
		break;
		case 5678 :
		printf("welcome yousef");
		break;
		case 1145 :
		printf("welcome Mina");
		break;
		default :
		printf("Wrong ID");
		
	}
}