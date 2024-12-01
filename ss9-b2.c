#include<stdio.h>

int main () {
	int a[100];
	int addIdex, currentLength = 0;
	int m, n;
	
	printf("a[100]\n");
	printf("Hay nhap so luong phan tu ban muon nhap \n");
	scanf("%d", &n);
	
	printf("Hay nhap gia tri cho tung phan tu vao mang \n");
	printf("\n");
	for (int i = 0; i < n; i++){
		printf("Gia tri cua phan tu tai a[%d] = ", i+1);
	    scanf("%d", &a[i]);
	    currentLength++;
	}
	printf("Hay chon vi tri ban muon sua ");
	scanf("%d", &addIdex);
	addIdex--;
	int value;
	printf("Sua thanh ");
	scanf("%d", &value);
	if (addIdex >= 0 && addIdex < currentLength){

		a[addIdex] = value;
		for (int i = 0; i < currentLength + 1; i++){
			printf("%d \n", a[i]);
		}
	}else{
		printf("Khong hop le !!!");
	}

}
