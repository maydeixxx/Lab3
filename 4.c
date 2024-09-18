#include <stdio.h>
#include <math.h>

int main()
{
    int M;
    int D;
    int DofY;

    printf("Enter the month number and day number:\n");
    scanf("%d %d", &M, &D);

    switch(M){
        case 1: //January
            if(D>31){
                printf("Entered a wrong day number\n");
                return 1;
            }
            DofY = D;
            break;
        case 2: //February
            if(D>28){
                printf("Entered a wrong day number\n");
                return 1;
            }
            DofY = 31 + D;
            break;
        case 3: //March
            if(D>31){
                printf("Entered a wrong day number\n");
                return 1;
            }
            DofY = 59 + D;
            break;
        case 4: //April
            if(D > 30){
                printf("Entered a wrong day number\n");
                return 1;
            }
            DofY = 90 + D;
            break;
        case 5: //May
            if(D > 31 || D < 1){
                printf("Entered a wrong day number\n");
                return 1;
            }
            DofY = 121 + D;
            break;
        case 6: //June
            if(D > 30 || D < 1){
                printf("Entered a wrong day number\n");
                return 1;
            }
            DofY = 151  + D;
            break;
        case 7: //July
            if(D > 31 || D < 1){
                printf("Entered a wrong day number\n");
                return 1;
            }
            DofY = 182 + D;
            break;
        case 8: //August
            if(D > 31 || D < 1){
                printf("Entered a wrong day number\n");
                return 1;
            }
            DofY = 213 + D;
            break;
        case 9: //September
            if(D > 30 || D < 1){
                printf("Entered a wrong day number\n");
                return 1;
            }
            DofY = 243 + D;
            break;
        case 10: //October
            if(D > 31 || D < 1){
                printf("Entered a wrong day number\n");
                return 1;
            }
            DofY = 274 + D;
            break;
        case 11: //November
            if(D > 30 || D < 1){
                printf("Entered a wrong day number\n");
                return 1;
            }
            DofY = 304 + D;
            break;
        case 12: //December
            if(D > 31 || D < 1){
                printf("Entered a wrong day number\n");
                return 1;
            }
            DofY = 335 + D;
            break;
        default:
            printf("You entered a wrong numbers :( \n");
    }
    
    printf("The number in the year you've chosen: \n%d", DofY);
    return 0;
}