#include <stdio.h>

int main()
{
	int NofM;
	printf("Input a number of the month:\n");
	scanf("%d", &NofM);

	switch(NofM)
	{
		case 1:
			printf("This is the first quarter and its Winter!");
			break;
		case 2:
			printf("This is the first quarter and its Winter!");
			break;
		case 3:
			printf("This is the first quarter and its Spring!");
			break;
		case 4:
			printf("This is the second quarter and its Spring!");
			break;
		case 5:
			printf("This is the second quarter and its Spring!");
			break;
		case 6:
			printf("This is the second quarter and its Summer!");
			break;
		case 7:
			printf("This is the third quarter and its Summer!");
			break;
		case 8:
			printf("This is the third quarter and its Summer!");
			break;
		case 9:
			printf("This is the third quarter and its Autumn!");
			break;
		case 10:
			printf("This is the fourth quarter and its Autumn!");
			break;
		case 11:
			printf("This is the fourth quarter and its Autumn!");
			break;
		case 12:
			printf("This is the fourth quarter and its Winter!");
			break;
		default:
			printf("Wrong number!\n");
	}

	return 0;
}