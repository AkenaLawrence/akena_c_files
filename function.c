#include <stdio.h>
#include <stdlib.h>
int add(int a, int b) {   // function declaration (prototype).
    return a + b; //defines what the function does. & returns the sum of a and b.
}
int main()
{
    int a = 40, b = 20;

    //fuction call
    int result = add(a, b);

   // output results
    printf("sum: %d\n", result);
    system("pause");
    return 0;




}
