#include <stdio.h>
int main() {
    int AvailableSpace[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for(int i = 1; i < 3; i++) {
        for(int j = 2;   j < 3; j++) {
            printf("%d\n", AvailableSpace[i][j]);
            return 0;
        }
    }

}