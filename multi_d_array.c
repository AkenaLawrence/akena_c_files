#include <stdio.h>
int main() {
    int number[3][3] = {
        {2, 4, 8},
        {4, 0, 9},
        {1, 3, 10}

    };

    printf("The second element %d\n", number[2][2]);
    return 0;
}