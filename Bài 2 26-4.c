#include<stdio.h>
int main(){
	int a,min=1e9, max=-1e9, cmin=0 ,cmax=0,count=0;
	do{
		scanf("%d",&a);
		count++;
		if(a>max){
			max=a;
			cmax=1;
		}
		if(a==max){
			cmax++;
		}
		if(a<min){
			min=a;
			cmin=1;
		}
		if(a==min){
			cmin++;
			}
			
	}
	while(count<=1000);
	printf("So max la: %d\n",max);
	printf("So min la: %d\n",min);
	printf("So lan max xuat hien la:%d\n",cmax);
	printf("So lan min xuat hien la:%d\n",cmin);
}
