#include <stdio.h>

int main()
{
    int price;
    float per;	

    scanf("%d", &price);

    per = price - price * (20.0 / 100.0);

    printf("The final bill is %.2f", per);

    return 0;
}
