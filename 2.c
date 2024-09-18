#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer from -9 to 9:\n");
    scanf("%d", &n);
    

    if(n >= -9 && n <= 9){
        switch(n){
            case -9:
                printf("That number is minus nine");
                break; 
            case -8:
                printf("That number is minus eight");
                break; 
            case -7:
                printf("That number is minus seven");
                break; 
            case -6:
                printf("That number is minus six");
                break;
            case -5:
                printf("That number is minus five");
                break; 
            case -4:
                printf("That number is minus four");
                break;
            case -3:
                printf("That number is minus three");
                break; 
            case -2:
                printf("That number is minus two");
                break; 
            case -1:
                printf("That number is minus one");
                break; 
            case 0:
                printf("That number is zero");
                break; 
            case 1:
                printf("That number is  one");
                break; 
            case 2:
                printf("That number is  two");
                break;
            case 3: 
                printf("That number is  three");
                break; 
             case 4:
                printf("That number is  four");
                break; 
            case 5:
                printf("That number is  five");
                break; 
            case 6:
                printf("That number is  six");
                break; 
            case 7:
                printf("That number is  seven");
                break;
            case 8:
                printf("That number is  eight");
                break; 
            case 9:
                printf("That number is nine");
                break; 
        }

    } else {
        printf("The number must be in the range of -9 to 9\n");
    }

    return 0;
}