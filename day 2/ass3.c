#include <stdio.h>
void main ()
{
	int x;
    int y;
    int z;
	printf("Enter Num 1 : ");
    scanf(" %d",&x);	
	printf("Enter Num 2 : ");
    scanf(" %d",&y);
    printf("Enter Num 3 : ");
    scanf(" %d",&z);
     if      (x>y && x>z) {printf("MAX = %d",x);}	
	 else if (y>x && y>z) {printf("MAX = %d",y);}
	 else if (z>x && z>y) {printf("MAX = %d",z);}
}