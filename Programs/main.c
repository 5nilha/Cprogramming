//
//  main.c
//  Project 6.4
//
//  Created by Fabio Quintanilha on 3/6/17.
//  Copyright © 2017 Fabio Quintanilha. All rights reserved.
//

/* 
 * This C program will read a Javascript program and give an statistic of different data.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // open the file
    FILE* fp ;
    int varCount = 0;
    int ifCount = 0;
    int elseCount = 0;
    int switchCount = 0;
    int forCount = 0;
    int semicolonsCount = 0;
    int structsCount = 0;
    int functionCount = 0;
    int arrayCount = 0;
    int blocksCount = 0;
    int commentCount = 0;
    int blankLineCount = 0;
    int totalLineCount = 0;
    double ifPercentage = 0.0;
    char line[2000];
    
    
    
    
    
    fp = fopen ( "/Users/fabioquintanilha/Dropbox/Valencia_Classes/Spring_2017/C_Programming/Assignments/Project 6.4/Project 6.4/bootstrap.js", "r") ;
    
    // Check opened OK
    if( fp == 0 )
    {
        printf( "Could not open file\n") ;
        return 0 ;
    }
    
    printf ( "Opened OK!\n") ;
    
    // Loop through file contents
    
    while (fgets (line, 1000, fp) > 0) {
      //  printf("%s", line);
        totalLineCount++;
        if (strstr (line , "//") ||  strstr (line , "/*")){
            commentCount++;
        }
        
        if (strstr (line , "var ")){
            varCount++;
        }
      
        
        if (strstr (line, "if")) {
            ifCount++;
        }
        
        if (strstr (line, "else")) {
            elseCount++;
        }
        
        if (strstr (line, "switch")) {
            switchCount++;
        }
        
        if (strstr (line, "for")) {
            forCount++;
        }
        
        if (strstr (line, ";")) {
            semicolonsCount++;
        }
        
        if (strstr (line, "structs")) {
            structsCount++;
        }
        
        if (strstr (line, "")) {
            blankLineCount++;
        }
        
        if (strstr (line, "function")) {
            functionCount++;
        }
        
        if ((strstr (line, "[")) || (strstr (line, "]"))) {
            arrayCount++;
        }
        if ((strstr (line, "{")) || (strstr (line, "}"))) {
            blocksCount++;
        }
    }
    
    arrayCount /= 2;
    blocksCount /= 2;
    
    ifPercentage = (double)ifCount / totalLineCount;
    
    double commentPercent = (double)commentCount / totalLineCount;
    double varPercent = (double) varCount / totalLineCount;
    double elsePercent = (double) elseCount / totalLineCount;
    double switchPercent = (double) switchCount / totalLineCount;
    double forPercent = (double) forCount / totalLineCount;
    double semicolonPercent = (double) semicolonsCount / totalLineCount;
    double structsPercent = (double) structsCount / totalLineCount;
    double functionPercent = (double) functionCount / totalLineCount;
    double arrayPercent = (double) arrayCount / totalLineCount;
    double blockPercent = (double) blocksCount / totalLineCount;
    double blankLinePercent = (double) blankLineCount / totalLineCount;
    
    
    printf("\n\n");
    printf("Total number of lines:  %d\n", totalLineCount + 1);
    printf("Number of comments: %d  ---------  %.2lf%%\n", commentCount, commentPercent * 100);
    printf("Number of var: %d  --------------  %.2lf%%\n", varCount, varPercent * 100);
    printf("Number of if: %d  ---------------  %.2lf%%\n", ifCount, ifPercentage * 100);
    printf("Number of else: %d  --------------  %.2lf%%\n", elseCount, elsePercent * 100);
    printf("Number of switch: %d  -------------  %.2lf%%\n", switchCount, switchPercent * 100);
    printf("Number of for: %d  ---------------  %.2lf%%\n", forCount, forPercent * 100);
    printf("Number of semicolons: %d  ------  %.2lf%%\n", semicolonsCount, semicolonPercent * 100);
    printf("Number of structs: %d  ------------  %.2lf%%\n", structsCount, structsPercent * 100);
    printf("Number of function: %d  ---------  %.2lf%%\n", functionCount, functionPercent * 100);
    printf("Number of Arrays: %d  ------------  %.2lf%%\n", arrayCount, arrayPercent * 100);
    printf("Number of blocks: %d  -----------  %.2lf%%\n", blocksCount, blockPercent * 100);
    
    
    // close file
    fclose ( fp ) ;
    return 0 ;
}
