#include<stdio.h>
int main(){
	int n;
	int sum=0,sum1=0,count1=0;
	float sum2,count2;
	printf("Input:");
	while(scanf("%d",&n)&&sum<=2021){
		sum+=n;
		if(n%3==0&&n%7==0){
			sum1+=n;
			count1++;
		
		}
	}
	sum2=sum1;
	count2=count1;
	if(sum2==0){
		printf("0");
	}
	else{
		printf("Trung binh cong cac so chia het cho 3 va 7:");
		printf("%f",sum2/count2);
	}
}
