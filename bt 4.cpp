#include<stdio.h>

int main(){
	int arry[] = {2,5,6,3,7};
	int n = sizeof(arry)/sizeof(arry[0]);
	for(int i = 0; i < n-1; i++){
		int min_idx = i;
		for(int j = i + 1; j < n; j++){
			if(arry[j] < arry[min_idx]){
				min_idx = j;
			}
		}
		int temp = arry[min_idx];
		arry[min_idx] = arry[i];
		arry[i] = temp;
	}
	printf("xap xep theo thu tu tang dan: \n");
	for(int i = 0; i < n; i++){
		printf("%d", arry[i]);
	}
	printf("\n");
	return 0;
}
	
