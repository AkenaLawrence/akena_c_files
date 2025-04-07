#include <stdio.h>
int main() {
    int amount = 50000;
    int withdraw;
    printf("Enter the amount you want to withdraw:\n");
    scanf("%d", &withdraw);
    if(withdraw <= amount){
        printf("\nYou have successfully made a withdraw of Ugx.%d\n", withdraw);
    amount = amount- withdraw;
    printf("Your account balance is now ugx.%d\n", amount );
    printf("**Thanks** for banking with MTN.\n\n");

    }
    else{
        printf("\nYour request for Ugx.%d ", withdraw);
    printf("is not successful due to insufficent balance.\ndail *165# to make a deposit.\n\n");
    }
    return 0;
}