#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

char* createStr(){
    static char str[20] = "my";
    return str;
}

int main(){
    char a[20];
	
	printf("\n");
    strcpy(a,createStr()); //this will copy the returned value of createStr() into a[]
    printf("%s\n",a);
    return 0;
}