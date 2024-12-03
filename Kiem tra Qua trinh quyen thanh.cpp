/*
-MSSV: 110124168
-Ho ten: Le Quoc Quyen Thanh
-Lop: DA24TTA
*/
#define SIZE 7
#include <stdio.h>

void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
int tinhTong(int a[], int n);
float TBGio(int a[], int n); 
int ktMax(int a[], int n, int k);
int ktMin(int a[], int n, int l);

int main()
{
	int A[SIZE];
	int n, k, l;
	
	do
	{
		printf("\nNhap vao so ngay: ");
		scanf("%d", &n);
	}while(n<=0||n>7);
	

	nhapMang(A,n);
	
	//Goi ham cau b
	printf("\nThoi gian hoc la: ");
	xuatMang(A,n);
	
	tinhTong(A,n);
	
	TBGio(A,n);
	
	ktMax(A,n,k);
	
	ktMin(A,n,l);
}

void nhapMang(int a[], int n)
{
	int i;
	
	i = 2;
	while(i<=n+1)
	{
		printf("\nNhap thoi gian hoc thu %d: ", i);
		scanf("%d", &a[i]); //a+i
		i++;
	}
}

//ham xuat mang a
void xuatMang(int a[], int n)
{
	int i;
	for(i=2; i<=n+1; i++)
	{
		printf("\nThu %d: %d",i, a[i]);
	}
}

int tinhTong(int a[], int n)
{
	int tong = 0;
	int i=0;
	do
	{
		tong = tong + a[i];
		i++;
	}while(i<=n-1);
	return tong;
}

float TBGio(int a[], int n){
	int tong1 = 0;
	int i=0;
	do
	{
		tong1 = tong1 + a[i];
		i++;
	}while(i<=n+1);
	float TB=0;
	TB=tong1/n;
	printf("\nTrung binh so gio hoc la: %f", TB);
	return TB;
}

int ktMax(int a[],int n, int k){
	int Max=a[0];
	for(int i=0; i<n;i++){
		if(a[i]>Max){
			Max=a[i];
		}
	}
	for(int i=2; i<n+1; i++){
		if(Max==a[i]){
			int k=i;
			printf("\nNgay hoc nhieu nhat la thu: %d", k);
		}break;
	}
	return k;
}

int ktMin(int a[],int n, int l){
	int Min=a[0];
	for(int i=0; i<n;i++){
		if(a[i]<Min){
			Min=a[i];
		}
	}
	for(int i=2; i<n+1; i++){
		if(Min==a[i]){
			int l=i;
			printf("\nNgay hoc it nhat la thu: %d", l);
		}break;
	}
	return l;
}

