#include <stdio.h>

int main()
{
    int a;

    scanf("%d",&a);
    if ((a % 3 == 0) && (a % 5 == 0 ))
    	printf("%d is divsible by 3 and 5 \n ",a);
    	
    else
    	printf("%d is not divsible by 3 and 5 ",a);
    	

   

    return 0;
}

