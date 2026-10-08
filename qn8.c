#include <stdio.h>

int main()
{
    int a ,b , c , d ,e , sum ;
    
    float avg ;
    
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    
    sum = a + b + c +d +e;
    
    avg = (float) sum / 5 ;
    
    printf("%d\n",sum );
    
    printf("%.2f",avg );
    
}
