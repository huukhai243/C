#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    float S = 1;
    int i = 1;
    while (i <= n)
    {
        S = (float)1/(1+S);
        i = i + 1;
    }
    printf("%f", S);
}
