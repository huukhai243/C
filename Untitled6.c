#include <stdio.h> 
#include <math.h> 
int main() 
{
float A,B,C;
 
printf("\nEnter side A ") ;
scanf ("%f",&A) ;
printf("\nEnter side B ") ;
scanf ("%f ",&B) ;
C = sqrt( A*A + B*B ); 
printf("side C : %f ", C) ;
return 0;
}
