#include <stdio.h>



int main() {
      int i, n;
      printf("nhap so gia tri muon tao: ");
      scanf("%d",&n);
      int mang[n];
      for(i=0;i<n;i++){
            printf("mang[%d] = ", i);
            scanf("%d",&mang[i]);
      }

      float tong=0, trungBinh;
      int dem=0;
      for(i=0;i<n;i++){
            if(mang[i]%3==0 && mang[i]%7==0){
                  tong+=mang[i];
                  dem++;
            }
      }
      trungBinh = tong/dem;
      printf("Trung binh tong cac so chia het cho 3 va 7 trong mang la %.2f", trungBinh);

	  
      return 0;
}
