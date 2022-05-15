#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *isimp;
	
	isimp = (char*)malloc(13 * sizeof(char));
    
    char isim[13]="zeynep yilmaz";
    
    strcpy(isimp, isim);
    printf("%s", isim);
	
	return 0;
}
