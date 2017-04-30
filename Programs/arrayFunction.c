#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>


// the function swipe only the first and last numbers.
   void SwapArrayEnds (int sortArray[], int arrSize) {
      
      int temp = 0;
      
      temp = sortArray[0];
      sortArray[0] = sortArray[arrSize - 1];
      sortArray[arrSize - 1] = temp;
      
      return;
      
   }




int main() {
   const int SORT_ARR_SIZE = 4;
   int sortArray[SORT_ARR_SIZE];
   int i = 0;

   sortArray[0] = 10;
   sortArray[1] = 20;
   sortArray[2] = 30;
   sortArray[3] = 40;

   SwapArrayEnds(sortArray, SORT_ARR_SIZE);

   for (i = 0; i < SORT_ARR_SIZE; ++i) {
      printf("%d ", sortArray[i]);
   }
   printf("\n");

}