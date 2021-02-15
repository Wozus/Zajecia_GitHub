#include <stdio.h>

int mnozenie (int a, int b)
{
    return a*b;
}

int main() {
    printf("Hello, World!\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    for(int i=1,j=1;i<=5 && j<=10;i++,j+=2)
    {
        printf("%d ",mnozenie(i,j));
    }
    return 0;
}
