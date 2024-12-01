#include<stdio.h>

int main () {
	int a[100];
	int deleteIdex, currentLength = 0;
	int n;
	
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
	printf("Hay chon vi tri ban muon xoa ");
	scanf("%d", &deleteIdex);
	
    for (int i = deleteIdex; i < currentLength; i++){
    	a[i] = a[i+1];
	}
	int value;
	if (deleteIdex >= 0 && deleteIdex < currentLength){

		for (int i = 0; i < currentLength; i++){
			printf("Gia tri phan tu thu %d sau khi sua la %d \n",i+1, a[i]);
		}
	}else{
		printf("Khong hop le !!!");
	}

}
