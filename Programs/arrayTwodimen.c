#include<stdio.h>

#define QUIZZES 5
#define STUDENTS 4

int main(){
    
    int quizScores[STUDENTS][QUIZZES] = {
        { 90, 90, 90, 90, 90 },
        { 90, 80, 70, 60, 50 },
        { 90, 89, 89, 87, 86 },
        { 90, 85, 80, 75, 70 }
    };

    int studentTotal = 0, quizTotal, row, col;
    double quizAverage, studentAverage;

    
    for(row = 0; row < STUDENTS; row++){
		studentTotal = 0;
        
        for (col = 0; col < QUIZZES; col++){
            studentTotal += quizScores[row][col];
        }
        
        studentAverage = (double)studentTotal / QUIZZES;
        printf("Student %i has average %.2lf\n", row + 1, studentAverage);
        
    }
	printf("\n\n");
    
    for (col = 0; col < QUIZZES; col++) {
        quizTotal = 0;
        for(row = 0; row < STUDENTS; row++){
            quizTotal += quizScores[row][col];
        }
        
        quizAverage = (double)quizTotal / STUDENTS;
        printf("The quiz %i Average is: %.2lf\n", col + 1, quizAverage);
    }
    printf("\n\n");
}