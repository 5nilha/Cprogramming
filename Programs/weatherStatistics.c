//
//  main.c
//  Weather_Sample
//
//  Created by Fabio Quintanilha
//  Copyright © 2017 Fabio Quintanilha. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main () {
    
    // Open the file
    // * is point to the file
    FILE* fp;
    
    int year;
    int month;
    int day;
    int high;
    int low;
    float rain;
    float snow;
    int dummy;
    
    
    // to open in MAC right-click on the file, press and hold option button and select "copy file as path name.
    fp = fopen("/Users/fabioquintanilha/Desktop/sept_orl_weather.txt", "r") ;  // "r" = read, "w" = write
    
    
    //Check if opened ok
    
    if (fp == 0) {
        printf("Could not open the file\n");
        return 1;   // return 1 will end the program
    }
    else {
        printf("Opened ok!\n");
    }
    
    
    // loop through file contents
    
    
    
    // the while below will repeat until the file is not 0, an will stop when the file does not have any more data to read
    while ( fscanf(fp, "%d %d %d %d %d %f %f %d\n", &year, &month, &day, &high, &low, &rain, &snow, &dummy) > 0) {
    
    printf("%d %d %d %d %d %.2f %.2f %d\n", year, month, day, high, low, rain, snow, dummy);
        
        
        // print asterisks proporrtional to high temperature, creating a horizontal graphic of the temperature.
        for (int i = 0; i < high ; i++) {
            printf("*");
        }
        
        printf("\n");
        
        
    }
    
    
    
    
    // close file
    fclose( fp );
    return 1;
    
    return 0;
}



