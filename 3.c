#include <stdio.h>

int main()
{
    int pet;
    printf("Enter the year from 2008 to 2019:\n");

    scanf("%d", &pet);

    switch(pet){
        case 2008:
            printf("You've entered the year of the rat\n");
            break;
        case 2009:
            printf("You've entered the year of the bull\n");
            break;
        case 2010:
            printf("You've entered the year of the tiger\n");
            break;
        case 2011:
            printf("You've entered the year of the rabbit\n");
            break;
        case 2012:
            printf("You've entered the year of the dragon\n");
            break;
        case 2013:
            printf("You've entered the year of the snake\n");
            break;
        case 2014:
            printf("You've entered the year of the horse \n");
            break;
        case 2015:
            printf("You entered the year of the goat\n");
            break;
        case 2016:
            printf("You've entered the year of the monkey\n");
            break;
        case 2017:
            printf("You've entered the year of the rooster\n");
            break;
        case 2018:
            printf("You entered the year of the dog\n");
            break;
        case 2019:
            printf("You entered the year of the pig\n");
            break;
        default:
            printf("You entered a wrong year!\n");
            
    }

    return 0;
}