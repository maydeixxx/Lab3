#include <stdio.h>

int main()
{
    printf("enter an int in range 9 / -9:\n");
    
    ch: int n;
    scanf("%d", &n);
    
    if(n < 0 && n >= -9){
        n *= -1;
        printf("That number is minus ");
    }
    
    switch(n){
        case 1:
            printf("one");
            break; 
        case 2:
            printf("two");
            break;
        case 3: 
            printf("three");
            break; 
        case 4:
            printf("four");
            break; 
        case 5:
            printf("five");
            break; 
        case 6:
            printf("six");
            break; 
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break; 
        case 9:
            printf("nine");
            break;
        default:
            printf("entered a wrong int\ntry again:\n");
            goto ch;
        }
    return 0;
}
