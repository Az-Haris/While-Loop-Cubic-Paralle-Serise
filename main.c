#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, sum=0;

    a=1;

    while(a<=100)
    {
        sum=sum+pow(a,3);
        a++;
    }

    printf("1^3+2^3+3^3+4^3+5^3+.............+100^3 = %d",sum);


    getch();
    return 0;
}
