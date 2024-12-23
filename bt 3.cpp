#include<stdio.h>

int main(){
	int arry[] = {3,5,7,1,9};
	int n = sizeof(arry)/sizeof(arry[0]);
	for(int i = 1; i < n; i++){
		int key = arry[i];
		int j = i - 1;
		while(j >= 0 && arry[j] > key){
			arry[j + 1] = arry[j];
			j = j - 1;
		}
		arry[j + 1] = key;
	}
	printf("Mang sau khi xap xep tang dan: \n");
	for( int i = 0; i < n; i++){
		printf("%d", arry[i]);
	}
	printf("\n");
	return 0;
}

