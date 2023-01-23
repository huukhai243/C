#include <stdio.h>
#include <string.h>
typedef struct{
	char Ten[30];
	int NS;
}SinhVien;
 main(){
	SinhVien DS[100], SV;
	int N,i,j;
	printf("Nhap So sinh vien : "); scanf("%d",&N);
	fflush(stdin);
	for ( i=0; i < N; i++ ){
	   fflush(stdin);
	   printf("Nhap du lieu cho sinh vien %d: \n", i+1);
	   printf("Ho ten : "); gets(DS[i].Ten);
	   printf("Nam sinh :");scanf("%d", &DS[i].NS);
	}
printf("\n\n DANH SACH SINH VIEN SINH NAM 1990\n\n");
	for(i = 0; i < N; i ++) 
	   if(DS[i].NS ==1990)
	      printf("%s\n",DS[i].Ten);
	      
	for(i = 0; i < N - 1; i ++) 
		for(j = i+1; j < N; j ++) 
			if(strcmp(DS[i].Ten,DS[j].Ten) > 0){
				SV= DS[i];
				DS[i]=DS[j];
				DS[j] = SV;
			}
			
	printf("\n\n DANH SACH SINH VIEN DA SAP XEP\n\n");
	for(i = 0; i < N; i ++) 
	      printf("%s\n",DS[i].Ten);			      
}

