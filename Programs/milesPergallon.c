# include <stdio.h>

int main (){
    
    double mpg, gasoline, miles, sumMiles = 0, sumGas = 0, averageMPG = 0;
    
    printf("Enter the gallon of gas used (-1 to quit): ");
    scanf("%lf", &gasoline);
    
    while (gasoline != -1){
        sumGas = sumGas + gasoline;
        
        printf("\nEnter the miles driven: ");
        scanf("%lf", &miles);
        
        sumMiles = sumMiles + miles;
        mpg = miles / gasoline;
        
        printf("\nMiles per Gallon = %.2lf\n\n", mpg);
        
        printf("Enter the gallon of gas used (-1 to quit): ");
        scanf("%lf", &gasoline);
    }
    averageMPG = sumMiles / sumGas;
    printf("Your average for this tanks is: %.2lf miles per gallon.\n\n", averageMPG);
    
}