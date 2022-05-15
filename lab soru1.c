#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, n;
	int max;
	int *dizip;
	
	printf("bir eleman sayisi giriniz:");
	scanf("%d", &n);
	
	dizip = (int*)calloc(n,sizeof(int));
	
	max = *(dizip+i);
	
	for(i=0; i<n; i++){
		printf("dizi[%d]:", i);
		scanf("%d", dizip+i);
	}
	
	for(i=0; i<n; i++){
		if(*(dizip+i)>max){
			max = *(dizip+i);}}
			
	printf("%d", max);
	return 0;
}
