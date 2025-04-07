//#include <stdio.h>
//int main() {
  //  int number[3][3] = {
    //    {2, 4, 8},
      //  {4, 0, 9},
        //{1, 3, 10}
//
  //  };
//
  //  printf("The second element %d\n", number[2][2]);
    //return 0;
//}



#include <stdio.h>
int main() {
    int number[5][5] = {
        {0, 5, 8, 7, 4},
        {1, 3, 9, 8, 6},
        {5, 0, 7, 2, 5},
        {3, 9, 6, 1, 0},
        {2, 7, 8, 0, 4}
    };
    printf("The fourth index element is:%d\n", number[3][1]);
    return 0;
}