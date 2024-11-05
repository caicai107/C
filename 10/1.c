#include <stdio.h>
int main()
{
	 int a,b,c,n=4;
	 for (a=1;a<=4;a++)
	 {
		 for (b=n-1;b>=a-1;b--)
		 {printf(" ");}
		 for (c=1;c<=2*a-1;c++)
		 {printf("*");}
			printf("\n");
	 }
	 for (a=1;a<=3;a++)
	 {
		 for (b=1;b<=a;b++)
		 {printf(" ");}
		 for (c=1;c<=5+(a-1)*-2;c++)
		 {printf("*");}
			printf("\n");
	 }
    return 0;
}
