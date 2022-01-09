#include <stdio.h>
int main() 
{
    int a,b,c;
    printf("enter the three sides of the triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if ((a == b) && (a == c) ) {
        printf("its an equalateral triangle\n");

    }
    else if(a == c && a!=b || b==a && b!=c || c==b && c!=a) {
        printf("its isocleses triangle\n");

    }
    if (a!=b && a!=c && b!=c) 
    {
        printf("its scaline triangle\n");
    }
    return 0;

}