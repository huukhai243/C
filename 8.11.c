#include <stdio.h>
main()
{
	int a,s,n,i,j,t;
	s=0;n=0;i=0;j=0;t=0;
	printf ("Enter some numbers:\n");
	while (s<=1550&&n<=100)
	{
		scanf("%d",&a);
		s+=a;
		n++;
		if (35<a&&a<70)
			i++;
		if (a%7==0)
		{
			t+=a;
			j++;
		}
	}
	printf ("The number of numbers between 35 and 70 is %d.\n",i);
	if (j==0)
		printf ("There is no number that can be divided by 7.\n");
	else
		printf ("The average of numbers divisible by 7 is %d.\n",t/j);
	return 0;
}
