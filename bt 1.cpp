#include<stdio.h>

int main(){
	int arry[5] = {1,2,3,4,5};
	int size = sizeof(arry) / sizeof(arry[0]);
	int n,found=0;
	printf("Nhap vao so can kiem tra: ");
	scanf("%d", &n);
	for(int i=0; i<size; i++){
		if(arry[i]==n){
			printf("phan tu %d co trong mang o vi tri %d. \n",n,i);
			found=1;
			break;
		}
	}
	if(!found){
		printf("%d khong co o trong mang.\n",n);
	}
	return 0;
}
		
