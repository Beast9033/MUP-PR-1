#include<stdio.h>

int main()
{
    int fa, sa;
    int ta = 180-(fa+sa);

    printf("Enter the First Angle: ");
    scanf("%d", &fa);

    printf("Enter the Second Angle: ");
    scanf("%d", &sa);

    printf("\n First angle is: %d", fa);
    printf("\n Second angle is: %d", sa);
    printf("\n Third angle is: %d", ta);
    
    return 0;
}