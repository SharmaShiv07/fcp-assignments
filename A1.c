#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter an integer: ");
    scanf("%d", &b);

    if (b%2 == 0){
        if (b%3 == 0){
            if (b%5 == 0){
                if (b%6 == 0){
                    if (b%7 == 0){
                        if (b%8 == 0){
                            printf("%d is divisible by 2,3,5,6,7 and 8.", b);
                        } else {
                        printf("%d is not divisible by 8.", b);}
                    } else {
                    printf("%d is not divisible by 7.", b);}
                } else {
                printf("%d is not divisible by 6.", b);}
            } else {
            printf("%d is not divisible by 5.", b);}
        } else {
        printf("%d is not divisible by 3.", b);}
    } else {
    printf("%d is not divisible by 2.", b);}

    return 0;
}