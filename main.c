#include <stdio.h>

int mnozenie (int a, int b)
{
    return a*b;
}
int dodawanie(int a,b)
{
    return a+b;
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
        printf("%d %d\n",dodawanie(i,j),mnozenie(i,j));
    }

    return 0;
}
