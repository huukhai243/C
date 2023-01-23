#include <stdio.h>
#include <string.h>
typedef struct ttsv
{
	char Name[31];
	char Id[13];
	char Home_town[31];
	float GPA;	
} svien;
svien sv[10000];
int n=0;
float sum=0;
void correct(char s[])
{
	int i;
	for (i=0;i<strlen(s);i++)
	{
		if (i==0||s[i-1]==' ')
		{
			if (s[i]>='a'&&s[i]<='z')
				s[i]='A'+(s[i]-'a');
		}
		else if (s[i]>='A'&&s[i]<='Z')
			s[i]='a'+(s[i]-'A');
		if (s[i]=='\n')
			s[i]='\0';
	}
}
void in()
{
	int m,i; 
	printf("1. Nhap thong tin sinh vien\n");
	do
	{
		printf("So luong sinh vien nhap moi: ");
		scanf("%d",&m);
		if (m<=0)
			printf("So luong sinh vien khong hop le. Vui long nhap lai.\n");
	}
	while (m<=0);
	for (i=n;i<n+m;i++)
	{
		fflush(stdin);
		printf("Ten sinh vien: ");
		fgets(sv[i].Name,30,stdin);
		correct(sv[i].Name);
		fflush(stdin);
		printf("MSSV: ");
		fgets(sv[i].Id,12,stdin);
		correct(sv[i].Id);
		fflush(stdin);
		printf("Que quan: ");
		fgets(sv[i].Home_town,30,stdin);
		correct(sv[i].Home_town);
		do
		{
			printf("GPA: ");
			scanf("%f",&sv[i].GPA);
			if (sv[i].GPA<0.0||sv[i].GPA>4.0)
				printf("GPA khong hop le. Vui long nhap lai.\n");
		}
		while (sv[i].GPA<0.0||sv[i].GPA>4.0);
		sum+=sv[i].GPA;
		printf("\n");
	}
	n+=m;
}
void out()
{
	int i;
	printf("2. In thong tin cac sinh vien\n");
	printf("Danh sach sinh vien:\n\n");
	printf("STT    Ten                               MSSV            Que quan          GPA\n");
	for (i=0;i<n;i++)
	{
		printf("%-3d    %-30s    %-12s    %-14s    %3.1f\n",i+1,sv[i].Name,sv[i].Id,sv[i].Home_town,sv[i].GPA);
	}
	printf("\nDiem GPA trung binh tat ca sinh vien: %3.1f\n\n",sum/n);
}
void search()
{
	char MSSV[13];
	int i, j=1;
	printf("3. Tim kiem theo ma so sinh vien\n");
	printf("Nhap MSSV can tim: ");
	fflush(stdin);
	fgets(MSSV,12,stdin);
	correct(MSSV);
	for (i=0;i<n;i++)
	{
		if (strcmp(MSSV,sv[i].Id)==0)
		{
			printf("Tim thay sinh vien co MSSV %s:\n\n",MSSV);
			printf("STT    Ten                               MSSV            Que quan          GPA\n");	
			printf("%-3d    %-30s    %-12s    %-14s    %3.1f\n\n",j,sv[i].Name,sv[i].Id,sv[i].Home_town,sv[i].GPA);
			break;
		}
	}
		if (i==n)
			printf("Khong tim thay sinh vien co MSSV %s.\n\n",MSSV);
}
void seek()
{
	char Que[31];
	int i, j=0;
	printf("4. Tim kiem theo GPA va que quan\n");
	fflush(stdin);
	printf("Nhap que quan: ");
	fgets(Que,30,stdin);
	correct(Que);
	for (i=0;i<n;i++)
		if (sv[i].GPA>(sum/n))
			if (strcmp(sv[i].Home_town,Que)==0)
			{
				j++;
				if (j==1)
				{
					printf("Tim thay cac sinh vien sau co diem GPA lon hon GPA trung binh (la %3.1f) gom:\n\n",sum/n);
					printf("STT    Ten                               MSSV            Que quan          GPA\n");
				}
				printf("%-3d    %-30s    %-12s    %-14s    %3.1f\n",j,sv[i].Name,sv[i].Id,sv[i].Home_town,sv[i].GPA);
			}
	if (j==0)
		printf("Khong tim thay sinh vien que quan %s va co GPA cao hon GPA trung binh (la %3.1f).\n",Que,sum/n);	
	printf("\n");			
}
void sort()
{
	svien svcpy[10000];
	svien tmp;
	int i,j;
	printf("5. Sap xep\n");
	for (i=0;i<n;i++)
		svcpy[i]=sv[i];
	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
			if (svcpy[i].GPA<svcpy[j].GPA)
			{
				tmp=svcpy[i];
				svcpy[i]=svcpy[j];
				svcpy[j]=tmp;
			}
	printf("Danh sach sinh vien da sap xep:\n\n");
	printf("STT    Ten                               MSSV            Que quan          GPA\n");
	for (i=0;i<n;i++)
	{
		printf("%-3d    %-30s    %-12s    %-14s    %3.1f\n",i+1,svcpy[i].Name,svcpy[i].Id,svcpy[i].Home_town,svcpy[i].GPA);
	}
	printf("\nDiem GPA trung binh tat ca sinh vien: %3.1f\n\n",sum/n);
}
int main()
{
	int menu;
	do
	{
		do
		{
			printf("---- Menu ----\n");
			printf("1. Nhap thong tin sinh vien\n");
			printf("2. In thong tin cac sinh vien\n");
			printf("3. Tim kiem theo ma so sinh vien\n");
			printf("4. Tim kiem theo GPA va que quan\n");
			printf("5. Sap xep\n");
			printf("6. Thoat\n");
			printf("Chon 1 chuc nang (1 - 6): ");
			scanf("%d",&menu);
			if (menu<1||menu>6)
				printf("Gia tri khong hop le. Vui long chon lai.\n\n");
		}
		while (menu<1||menu>6);
		printf("\n");
		switch(menu)
		{
			case 1: in(); break;
			case 2: out(); break;
			case 3: search(); break;
			case 4: seek(); break;
			case 5: sort(); break;
			case 6: printf("6. Thoat\n"); return 0;
		}
	}
	while (menu!=6);
}
