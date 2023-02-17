#include <stdio.h>
#include <conio.h>
#define MAX 1000

int nhapmang(int mang[], int &n){
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&n);
	printf("nhap mang cos %d phan tu ",n);
	for(int i=0;i<n;i++){
		printf("\n mang[%d]=",i);
		scanf("%d",&mang[i]);
	}
	return 0;
}
int xuatmang(int mang[],int n){
	printf("-------------------------");
	for(int i=0;i<n;i++){
		printf("\n mang[%d]=%d",i,mang[i]);
	}
	return 0;
}
int main(){
	int mang[MAX],n;
	
	nhapmang(mang,n);
	xuatmang(mang,n);
	
	return 0;
}
