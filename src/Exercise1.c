/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	int arr[30][30];
 	for (int row = 0; row <= n; row++){
        for (int colum = 0; colum <= row; colum++){ 
	        if (row == colum || colum == 0){
	            arr[row][colum] = 1;
			} 
	        else{         
        arr[row][colum]= arr[row-1][colum-1] + arr[row-1][colum];
			}
	printf("%d ", arr[row][colum]);
		}	
 printf("\n");
  	}
}
int main(int argc, char *argv[]) {
	int testcase = atoi(argv[1]);	
	Ex1(testcase);
	return 0;
}
