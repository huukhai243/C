#include "stdio.h"
#include "conio.h"
#include "math.h"
 
#define E 0.0001
#define PI 3.141592654
 
long giaithua(int N);
int main()
{
    float angle; 
    float e = 1; 
    int n = 0;
    float sinx = 0;
    printf("\n Nhap vao so do goc (do) = ");
    scanf("%f", &angle);
    while(e > E)
    {
        e = pow(float(angle*PI/180), (2*n+1))/giaithua(2*n+1); 
  
        if(n%2 == 0)
        {
            sinx = sinx + e;
        }
        else 
        {
            sinx = sinx - e;
        }
        n++;
    }
    printf("\n sin(%f) = %f", angle, sinx); 
    getch();
}
long giaithua(int N)
{
    if(N == 0 || N == 1)
        return 1;
    else
        return N*giaithua(N-1);
}
