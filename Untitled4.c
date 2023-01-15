#include<stdio.h>
int main(){
	int myarray[]={5,9,10,11,4,3,1,6,7};
	int max;
	int i;
	max = myarray[0];
	for(i=0;i<9;i++)
	{
		printf("Checking myarray[%d] =%d\n",i,myarray[i]);
		if(myarray[i]>max)
		max= myarray[i];
		printf("New max found = %d\n",max);
	}
	printf("Maximum=%d",max);
	return 0;
}
