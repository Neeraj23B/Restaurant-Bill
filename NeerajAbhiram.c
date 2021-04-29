#include <stdlib.h>
#include <stdio.h>
#define BURGER_PRICE 159.00
#define FRIES_PRICE  99.00
#define PIZZA_PRICE  299.00
#define JUICE_PRICE  129.00
#define HOTDOG_PRICE 259.00
#define TACOS_PRICE  199.00

main()
{
               int choice = 0;
	double totalPrice = 0;
	
	printf("\t\tWelcome to Marina Restaurant!!\n\n");
	printf("May I take your order ? \n");
do{
		printf("|--------MENU--------|\n");
		printf("1. Burger   --  Rs.%.2lf \n", BURGER_PRICE);
		printf("2. Fries    --  Rs.%.2lf \n", FRIES_PRICE);
		printf("3. Pizza    --  Rs.%.2lf \n", PIZZA_PRICE);
		printf("4. Juice    --  Rs.%.2lf \n", JUICE_PRICE);
		printf("5. HotDog   --  Rs.%.2lf \n", HOTDOG_PRICE);
		printf("6. Tacos    --  Rs.%.2lf \n", TACOS_PRICE);
		printf("7. Exit\n\n");
		printf("Enter an item: ");
		scanf("%i", &choice);

		switch(choice){
		case 1:
			totalPrice += BURGER_PRICE;
			break;
		case 2:
			totalPrice += FRIES_PRICE;
			break;
		case 3:
			totalPrice += PIZZA_PRICE;
			break;
		case 4:
			totalPrice += JUICE_PRICE;
			break;
		case 5:
			totalPrice += HOTDOG_PRICE;
			break;
		case 6:
			totalPrice += TACOS_PRICE;
			break;
		case 7:
			printf("Thank you for ordering at Marina Restaurant! \n");
			break;
		default:
			printf("* Error:  This is not on the menu. \n");
			break;
		}
		
		printf("Total so far: Rs.%.2lf\n\n", totalPrice);
	} while (choice != 7);
	
	printf("Your Order Amount is Rs.%.2lf \n\n", totalPrice);
	printf("\tThanks for Visiting Marina Restaurant.\n");
	printf("\t\t\t Have a Nice Day!!\n");
    printf("\t\t\tPlease Visit Again :) :)\n");
    printf("\t\t+=============================+");
}
