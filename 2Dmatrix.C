/*#include <stdio.h>
int main() {
    int AvailableSpace[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for(int i = 2; i < 3; i++) {
        for(int j = 2;   j < 3; j++) {
            printf("%d\n", AvailableSpace[i][j]);
            return 0;
        }
    }

}*/



#include <stdio.h>
int main() {
    int matrix[3][3];
    int i, j;
    //taking input from the user.
    printf("Enter values for a 3x3 matrix:\n");
    for(i = 0; i <3; i++) {
        for(j = 0; j <3; j++) {
            printf("Element at [%d][%d]:", i, j);
            scanf("%d", &matrix[i][j]);
        }
        }
        // Outputing the 2D array.
        printf("\nThe matrix is:\n");
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                printf("%d", matrix[i][j]);
            }
            printf("\n");











        }
     }



