#include<stdio.h>

int main(){
	int arry[5] = {2,6,9,4,5};
	int n = sizeof(arry) / sizeof(arry[0]);
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arry[j] > arry[j+1]){
				int temp = arry[j];
				arry[j] = arry[j + 1];
				arry[j + 1] = temp;
			}
		}
	}
	printf("xap xep theo thu tu tang dan: \n");
	for(int i=0; i<n ;i++){
		printf("%d", arry[i]);
	}
	printf("\n");
	return 0;
}

		
	
