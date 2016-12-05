# include <stdio.h>

int main(){
    
    int i = 1, n, factor = 1;
    
    printf("Insert a factorial number (n!): ");
    scanf("%i", &n);
    
    while ( i <= n){
        factor = factor * i;
        printf("%i ", i);
         i = i + 1;
       
    }
    printf("= %i\n\n", factor);
}