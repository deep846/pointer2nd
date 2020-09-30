#include <stdio.h>
#include <conio.h>
#include <malloc.h>

int main()
{
    int *x,*y,*z ;
    x=(int*)malloc(sizeof(int));
    y=(int*)malloc(sizeof(int));
    z=(int*)malloc(sizeof(int));
    printf(" Enter the value of a & b = \n")
    scanf("%d %d",x,y);
    *z=*x+*y;
    printf("\nThe sum of the variable a & b is = %d",*z);
    return 0;    
}
