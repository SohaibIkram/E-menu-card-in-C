#pragma warning(disable : 4996)
#include <stdio.h>
#include <time.h>
#include <string.h>


void intro_screen();
void main_menu();
void breakfast();
void lunch();
void dinner();
void mid_night();
void user_choice();
int coupon();
void exitscreen();

void main()
{
	intro_screen();
	main_menu();
}

void intro_screen() {
	int x, i = 0;

	printf("\t\t******************************************************************************\n");
	printf("\t\t\t\t\tWELCOME TO LUMBER 1 CAFE \n\n\n");
	printf("\t\t\t**         **     **   **      **   *******    ********   *******\n");
	printf("\t\t\t**         **     **   ** *  * **   **    **   **         **    **\n");
	printf("\t\t\t**         **     **   **  **  **   *******    ****       *******\n");
	printf("\t\t\t**         **     **   **      **   **    **   **         **  **\n");
	printf("\t\t\t*********    *****     **      **   *******    ********   **    **\n\n\n");
	printf("\t\t\t                                ****\n");
	printf("\t\t\t                              **   **\n");
	printf("\t\t\t                                   **\n");
	printf("\t\t\t                                   **\n");
	printf("\t\t\t                                   **\n");
	printf("\t\t\t                                   **\n");
	printf("\t\t\t                              ***********\n");

	for (i;; i++) {
		printf("Press 1 to continue\n");
		scanf_s("%d", &x);

		if (x == 1)
		{
			system("cls");
			break;
		}
		else
		{
			printf("You high? We said press '1'\n\n");
		}
	}

}

void main_menu() {
	int i, j, n;
	time_t x;
	time(&x);

	struct tm* y = localtime(&x);
	i = y->tm_hour;
	j = y->tm_min;

	if (i >= 0 && i < 3) {
		printf("As the time is %d:%d (military time), we suggest you want to avail mid-night discounts\n", i, j);
		printf("If yes press 1, if no press 0 (or any other number)\n");
		scanf_s("%d", &n);

		if (n == 1) {
			system("cls");
			char name[20];
			printf("Enter your name please: ");
			for (int i = 0; i < 2; i++)
				gets(name);
			mid_night();
		}
		else {
			user_choice();
		}
	}
	else if (i >= 3 && i < 7) {
		printf("The restaurant is closed\n");
	}
	else if (i >= 7 && i < 12) {
		printf("As the time is %d:%d (military time), we suggest you want to have breakfast\n", i, j);
		printf("If yes press 1, if no press 0 (or any other number)\n");
		scanf_s("%d", &n);

		if (n == 1) {
			system("cls");
			breakfast();
		}
		else {
			user_choice();
		}
	}
	else if (i >= 12 && i < 18) {
		printf("As the time is %d:%d (military time), we suggest you want to have lunch\n", i, j);
		printf("If yes press 1, if no press 0 (or any other number)\n");
		scanf_s("%d", &n);

		if (n == 1) {
			system("cls");
			lunch();
		}
		else {
			user_choice();
		}
	}
	else if (i >= 18 && (i <= 23 && j <= 59)) {
		printf("As the time is %d:%d (military time), we suggest you want to have dinner\n", i, j);
		printf("If yes press 1, if no press 0 (or any other number)\n");
		scanf_s("%d", &n);

		if (n == 1) {
			system("cls");
			dinner();
		}
		else {
			user_choice();
		}
	}
	else {
		printf("Error\n");
	}
}

void user_choice()
{
	int a;
	printf("\n");
	printf("What do you want to have then?\n");
	printf("Press 1 for Breakfast\n");
	printf("Press 2 for Lunch\n");
	printf("Press 3 for Dinner\n");
	printf("Press 4 for Mid-night\n");

	scanf_s("%d", &a);

	if (a == 1) {
		system("cls");
		breakfast();
	}
	else if (a == 2) {
		system("cls");
		lunch();
	}
	else if (a == 3) {
		system("cls");
		dinner();
	}
	else if (a == 4) {
		system("cls");
		mid_night();
	}
	else {
		printf("\n");
		printf("Invalid input\nTry again\n\n");
		user_choice();
	}
}

void lunch()

{
	char x[20];
	int i, deal, n;
	printf("What do you want to have for lunch?\n");
	printf("We have the following deals\n\n");
	printf("\tDeal 1:\n");
	printf("\t\t Chicken Biryani + 5 cutlets + Soft drink\t\t\t For PKR 280\n\n");
	printf("\tDeal 2:\n");
	printf("\t\t Chicken Handi + Egg Fried Rice + Soft Drink + Naan\t\t\t For PKR 600\n\n");
	printf("Deals don't suit you? Don't worry, you can pick individual stuff from the menu\n\n");
	printf("Rice:\n");
	printf("1. Chicken Biryani \t\t\t\t For PKR 150\n");
	printf("2. Chinese Rice \t\t\t\t For PKR 250\n");
	printf("3. Egg Fried Rice \t\t\t\t For PKR 200\n\n");
	printf("Desi Food:\n");
	printf("1. Chicken Handi \t\t\t\t For PKR 400\n");
	printf("2. Pulses \t\t\t\t\t For PKR 200\n");
	printf("3. Cutlets (5 pieces) \t\t\t\t For PKR 100\n");
	printf("Beverages:\n");
	printf("1. Mineral Water \t\t\t\t For PKR 30\n");
	printf("2. Soft Drink \t\t\t\t\t For PKR 50\n");
	printf("3. Tea \t\t\t\t\t\t For PKR 50\n\n");
	printf("Others:\n");
	printf("1. Chapati (Roti) \t\t\t\t For PKR 7\n");
	printf("2. Naan \t\t\t\t\t For PKR 10\n");
	printf("3. Raita \t\t\t\t\t For PKR 40\n");
	printf("4. Salad \t\t\t\t\t For PKR 50\n\n");
	printf("If you want to get a deal, type 'deal'\n");
	printf("If you want to pick individually, type 'no deal'\n\n");

	for(i = 0; i<2; i++)
	gets(x);

	if (strcmp(x,"deal") == 0) {
		system("cls");
		printf("Ah I see, deal it is then\n");
		printf("Again\n");
		printf("\tDeal 1:\n");
		printf("\t\t Chicken Biryani + 5 cutlets + Soft drink\t\t\t\t For PKR 280\n\n");
		printf("\tDeal 2:\n");
		printf("\t\t Chicken Handi + Egg Fried Rice + Soft Drink + Naan\t\t\t For PKR 600\n\n");
		printf("Deal 1 or 2?\n");
		scanf_s("%d", &deal);
		if (deal == 1) {
			int quantity, bill;
			printf("Enter the qunatity you want to get\n");
			scanf_s("%d", &quantity);
			printf("\n");
			bill = quantity * 280;
			printf("Your bill is %d\n", bill);
			n = coupon();
			if (n == 0)
			{
				printf("We can't take bill from you\n");
			}
			else if (n == 1)
			{
				printf("Your bill after discount is %.0f PKR\n", bill - (0.3 * bill));

			}
			else if (n == 2)
			{
				printf("Your bill remains %d\n", bill);
			}
		}
		else if (deal == 2) {
			int quantity, bill;
			printf("Enter the qunatity you want to get\n");
			scanf_s("%d", &quantity);
			printf("\n");
			bill = quantity * 600;
			printf("Your bill is %d\n", bill);
			n = coupon();
			if (n == 0)
			{
				printf("We can't take bill from you\n");
			}
			else if (n == 1)
			{
				printf("Your bill after discount is %.0f PKR\n", bill - (0.3 * bill));

			}
			else if (n == 2)
			{
				printf("Your bill remains %d\n", bill);
			}
		}
	}
	else if (strcmp(x, "no deal") == 0) {
		system("cls");
		printf("Invidual pick? Okay\n");
		printf("Again, the menu is:\n\n");
		printf("Rice:\n");
		printf("1. Chicken Biryani \t\t\t\t For PKR 150\n");
		printf("2. Chinese Rice \t\t\t\t For PKR 250\n");
		printf("3. Egg Fried Rice \t\t\t\t For PKR 200\n\n");
		printf("Desi Food:\n");
		printf("1. Chicken Handi \t\t\t\t For PKR 400\n");
		printf("2. Pulses \t\t\t\t\t For PKR 200\n");
		printf("3. Cutlets (5 pieces) \t\t\t\t For PKR 100\n");
		printf("Beverages:\n");
		printf("1. Mineral Water \t\t\t\t For PKR 30\n");
		printf("2. Soft Drink \t\t\t\t\t For PKR 50\n");
		printf("3. Tea \t\t\t\t\t\t For PKR 50\n\n");
		printf("Others:\n");
		printf("1. Chapati (Roti) \t\t\t\t For PKR 7\n");
		printf("2. Naan \t\t\t\t\t For PKR 10\n");
		printf("3. Raita \t\t\t\t\t For PKR 40\n");
		printf("4. Salad \t\t\t\t\t For PKR 50\n\n");
		printf("Enter the serial number of the individual pick\n\n");
		int a, b, c, d = 0;
		printf("Rice choice? (0 for no choice)\n");
		scanf_s("%d", &a);
		int bill1 = 0, bill2 = 0, bill3 = 0, bill4 = 0, bill = 0;
		if (a == 1) {
			int quantity;
			printf("Enter the qunatity of Chicken Biryani you want to get\n");
			scanf_s("%d", &quantity);
			bill1 = quantity * 150;
			printf("Your bill for %d Chicken Biryani(s) is %d\n\n", quantity, bill1);
		}
		else if (a == 2) {
			int quantity;
			printf("Enter the qunatity of Chinese rice you want to get\n");
			scanf_s("%d", &quantity);
			bill1 = quantity * 250;
			printf("Your bill for %d Chinese rice plate(s) is %d\n\n", quantity, bill1);
		}
		else if (a == 3) {
			int quantity;
			printf("Enter the qunatity of Egg Fried Rice you want to get\n");
			scanf_s("%d", &quantity);
			bill1 = quantity * 60;
			printf("Your bill for %d Egg Fried Rice plate(s) is %d\n\n", quantity, bill1);
		}
		else if (a == 0) {
			printf("Okay. Got it, you don't want rice.\n\n");
			bill1 = 0;
		}

		printf("Desi food? (0 for no desi thing)\n");
		scanf_s("%d", &b);
		if (b == 1) {
			int quantity;
			printf("Enter the qunatity of Chicken handi you want (kgs)\n");
			scanf_s("%d", &quantity);
			bill2 = quantity * 400;
			printf("Your bill for %d kg Chicken Handi is %d\n\n", quantity, bill2);
		}
		else if (b == 2) {
			int quantity;
			printf("Enter the qunatity pulses you want to get\n");
			scanf_s("%d", &quantity);
			bill2 = quantity * 200;
			printf("Your bill for %d pulses is %d\n\n", quantity, bill2);
		}
		else if (b == 3) {
			int quantity;
			printf("Enter the qunatity of Cutlets you want to get\n");
			scanf_s("%d", &quantity);
			bill2 = quantity * 20;
			printf("Your bill for %d Cutlet(s) is %d\n\n", quantity, bill2);

		}
		else if (b == 0) {
			printf("Oh, so no desi food. Okay.\n\n");
			bill2 = 0;
		}

		printf("Among the Beverages? (0 for no Beverage)\n");
		scanf_s("%d", &c);
		if (c == 1) {
			int quantity;
			printf("Enter the qunatity of Mineral water bottles you want to get\n");
			scanf_s("%d", &quantity);
			bill3 = quantity * 30;
			printf("Your bill for %d Mineral Water Bottle(s) is %d\n\n", quantity, bill3);
		}
		else if (c == 2) {
			int quantity;
			char drink[10];
			printf("Enter the quantity of Soft drinks you want to get\n");
			scanf_s("%d", &quantity);
			printf("Specify the drink too please\n");
			for (int i = 0; i < 2; i++)
				gets(drink);
			printf("Got it\n");
			bill3 = quantity * 50;
			printf("Your bill for %d %s soft drinks is %d\n\n", quantity, drink, bill3);
		}
		else if (c == 3) {
			int quantity;
			printf("Enter the qunatity of tea you want to get\n");
			scanf_s("%d", &quantity);
			bill3 = quantity * 50;
			printf("Your bill for %d tea is %d\n\n", quantity, bill3);
		}
		else if (c == 0) {
			printf("Ok, got it, no beverage\n\n");
			bill3 = 0;
		}

		printf("From the others list? (0 to pass)\n");
		scanf_s("%d", &d);
		if (d == 1) {
			int quantity;
			printf("Enter the qunatity of Rotis you want to get\n");
			scanf_s("%d", &quantity);
			bill4 = quantity * 7;
			printf("Your bill for %d Rotis is %d\n\n", quantity, bill4);
		}
		else if (d == 2) {
			int quantity;
			printf("Enter the qunatity of Naans you want to get\n");
			scanf_s("%d", &quantity);
			bill4 = quantity * 10;
			printf("Your bill for %d naan(s) is %d\n\n", quantity, bill4);
		}
		else if (d == 3) {
			int quantity;
			printf("Enter the quantity of raita you want to get\n");
			scanf_s("%d", &quantity);
			bill4 = quantity * 40;
			printf("Your bill for %d raita is %d\n\n", quantity, bill4);
		}
		else if (d == 4) {
			int quantity;
			printf("Enter the quantity of salad you want to get\n");
			scanf_s("%d", &quantity);
			bill4 = quantity * 50;
			printf("Your bill for %d salad is %d\n\n", quantity, bill4);
		}
		else if (d == 0) {
			printf("Ok, got it, you don't want side orders\n\n");
			bill3 = 0;
		}

		bill = bill1 + bill2 + bill3 + bill4;
		printf("Your gross bill is %d\n\n", bill);

		n = coupon();
		if (n == 0)
		{
			printf("We can't take bill from you\n");
		}
		else if (n == 1)
		{
			printf("Your bill after discount is %.0f PKR\n", bill - (0.3 * bill));

		}
		else if (n == 2)
		{
			printf("Your bill remains %d\n\n", bill);
		}
	}
	system("pause");
	system("cls");
	exitscreen();
}

void dinner()

{
	char x[20];
	int i, deal, n;
	printf("What do you want to have for dinner?\n");
	printf("We have the following deals\n\n");
	printf("\tDeal 1:\n");
	printf("\t\t Chicken Karahi + Seekh Kaba + 2 Naan\t\t\t For PKR 630\n\n");
	printf("\tDeal 2:\n");
	printf("\t\t Chowmen  + Manchurian + Chinese Rice\t\t\t For PKR 600\n\n");
	printf("Deals don't suit you? Don't worry, you can pick individual stuff from the menu\n\n");
	printf("Chinese:\n");
	printf("1. Chowmen \t\t\t\t\t For PKR 300\n");
	printf("2. Chinese Rice \t\t\t\t For PKR 250\n");
	printf("3. Chicken Manchurian \t\t\t\t For PKR 350\n\n");
	printf("Desi Food:\n");
	printf("1. Sajji with Rice \t\t\t\t For PKR 400\n");
	printf("2. Chicken Karahi \t\t\t\t For PKR 400\n");
	printf("3. Tikka Boti (1kg) \t\t\t\t For PKR 250\n");
	printf("4. Seekh Kabab \t\t\t\t\t For PKR 40\n\n");
	printf("Beverages:\n");
	printf("1. Mineral Water \t\t\t\t For PKR 30\n");
	printf("2. Soft Drink \t\t\t\t\t For PKR 50\n");
	printf("3. Fresh Lime \t\t\t\t\t For PKR 80\n\n");
	printf("Others:\n");
	printf("1. Chapati (Roti) \t\t\t\t For PKR 7\n");
	printf("2. Naan \t\t\t\t\t For PKR 10\n");
	printf("3. Raita \t\t\t\t\t For PKR 40\n");
	printf("4. Salad \t\t\t\t\t For PKR 50\n\n");
	printf("If you want to get a deal, type 'deal'\n");
	printf("If you want to pick individually, type 'no deal'\n\n");
	
	for(int i = 0; i <2 ; i++)
	gets(x);

	if (strcmp(x, "deal") == 0) {
		system("cls");
		printf("Ah I see, deal it is then\n");
		printf("Again\n");
		printf("\tDeal 1:\n");
		printf("\t\t Chicken Karahi + Seekh Kaba + 2 Naan\t\t\t For PKR 630\n\n");
		printf("\tDeal 2:\n");
		printf("\t\t Chowmen  + Manchurian + Chinese Rice\t\t\t For PKR 600\n\n");
		printf("Deal 1 or 2?\n");
		scanf_s("%d", &deal);
		if (deal == 1) {
			int quantity, bill;
			printf("Enter the qunatity you want to get\n");
			scanf_s("%d", &quantity);
			printf("\n");
			bill = quantity * 630;
			printf("Your bill is %d\n", bill);
			n = coupon();
			if (n == 0)
			{
				printf("We can't take bill from you\n");
			}
			else if (n == 1)
			{
				printf("Your bill after discount is %.0f PKR\n", bill - (0.3 * bill));
			}
			else if (n == 2)
			{
				printf("Your bill remains %d\n", bill);
			}
		}
		else if (deal == 2) {
			int quantity, bill;
			printf("Enter the qunatity you want to get\n");
			scanf_s("%d", &quantity);
			printf("\n");
			bill = quantity * 600;
			printf("Your bill is %d\n", bill);
			n = coupon();
			if (n == 0)
			{
				printf("We can't take bill from you\n");
			}
			else if (n == 1)
			{
				printf("Your bill after discount is %.0f PKR\n", bill - (0.3 * bill));
			}
			else if (n == 2)
			{
				printf("Your bill remains %d\n", bill);
			}
		}
	}
	else if (strcmp(x, "no deal") == 0) {
		system("cls");
		printf("Invidual pick? Okay\n");
		printf("Again, the menu is:\n\n");
		printf("Chinese:\n");
		printf("1. Chowmen \t\t\t\t\t For PKR 300\n");
		printf("2. Chinese Rice \t\t\t\t For PKR 250\n");
		printf("3. Chicken Manchurian \t\t\t\t For PKR 350\n\n");
		printf("Desi Food:\n");
		printf("1. Sajji with Rice \t\t\t\t For PKR 400\n");
		printf("2. Chicken Karahi \t\t\t\t For PKR 400\n");
		printf("3. Tikka Boti (1kg) \t\t\t\t For PKR 250\n");
		printf("4. Seekh Kabab \t\t\t\t\t For PKR 40\n");
		printf("Beverages:\n");
		printf("1. Mineral Water \t\t\t\t For PKR 30\n");
		printf("2. Soft Drink \t\t\t\t\t For PKR 50\n");
		printf("3. Fresh Lime \t\t\t\t\t For PKR 80\n\n");
		printf("Others:\n");
		printf("1. Chapati (Roti) \t\t\t\t For PKR 7\n");
		printf("2. Naan \t\t\t\t\t For PKR 10\n");
		printf("3. Raita \t\t\t\t\t For PKR 40\n");
		printf("4. Salad \t\t\t\t\t For PKR 50\n\n");
		printf("Enter the serial number of the individual pick\n\n");
		int a, b, c, d = 0;
		printf("What among the Chinese? (0 for no choice)\n");
		scanf_s("%d", &a);
		int bill1 = 0, bill2 = 0, bill3 = 0, bill4 = 0, bill = 0;
		if (a == 1) {
			int quantity;
			printf("Enter the qunatity of Chowmen you want to get\n");
			scanf_s("%d", &quantity);
			bill1 = quantity * 300;
			printf("Your bill for %d Chowmen(s) is %d\n\n", quantity, bill1);
		}
		else if (a == 2) {
			int quantity;
			printf("Enter the qunatity of Chinese rice you want to get\n");
			scanf_s("%d", &quantity);
			bill1 = quantity * 250;
			printf("Your bill for %d Chinese rice plate(s) is %d\n\n", quantity, bill1);
		}
		else if (a == 3) {
			int quantity;
			printf("Enter the qunatity of Chicken Manchurian you want to get\n");
			scanf_s("%d", &quantity);
			bill1 = quantity * 350;
			printf("Your bill for %d Chicken Manchurian plate(s) is %d\n\n", quantity, bill1);
		}
		else if (a == 0) {
			printf("Okay. Got it, No Chinese stuff\n\n");
			bill1 = 0;
		}
		printf("Desi food? (0 for no desi thing)\n");
		scanf_s("%d", &b);
		if (b == 1) {
			int quantity;
			printf("Enter the qunatity of Saji with Rice you want\n");
			scanf_s("%d", &quantity);
			bill2 = quantity * 400;
			printf("Your bill for %d Saji with Rice is %d\n\n", quantity, bill2);
		}
		else if (b == 2) {
			int quantity;
			printf("Enter the kgs of Chicken Karahi you want to get\n");
			scanf_s("%d", &quantity);
			bill2 = quantity * 400;
			printf("Your bill for %d kg Karahi(s) is %d\n\n", quantity, bill2);
		}
		else if (b == 3) {
			int quantity;
			printf("Enter the kgs of Tikka boti you want to get\n");
			scanf_s("%d", &quantity);
			bill2 = quantity * 250;
			printf("Your bill for %d kg Tikka(s) is %d\n\n", quantity, bill2);
		}
		else if (b == 4) {
			int quantity;
			printf("Enter the qunatity of Seekh Kaba you want to get\n");
			scanf_s("%d", &quantity);
			bill2 = quantity * 40;
			printf("Your bill for %d Seekh Kabab(s) is %d\n\n", quantity, bill2);
		}
		else if (b == 0) {
			printf("Oh, so no desi food. Okay.\n\n");
			bill2 = 0;
		}

		printf("Among the Beverages? (0 for no Beverage)\n");
		scanf_s("%d", &c);
		if (c == 1) {
			int quantity;
			printf("Enter the qunatity of Mineral water bottles you want to get\n");
			scanf_s("%d", &quantity);
			bill3 = quantity * 30;
			printf("Your bill for %d Mineral Water Bottle(s) is %d\n\n", quantity, bill3);
		}
		else if (c == 2) {
			int quantity;
			char drink[10];
			printf("Enter the qunatity of Soft drinks you want to get\n");
			scanf_s("%d", &quantity);
			printf("Specify the drink too please\n");
			for (int i = 0; i < 2; i++)
				gets(drink);
			printf("Got it\n");
			bill3 = quantity * 50;
			printf("Your bill for %d %s soft drinks is %d\n\n", quantity, drink, bill3);
		}
		if (c == 3) {
			int quantity;
			printf("Enter the qunatity of Fresh Limes you want to get\n");
			scanf_s("%d", &quantity);
			bill3 = quantity * 80;
			printf("Your bill for %d Fresh lime(s) is %d\n\n", quantity, bill3);
		}
		else if (c == 0) {
			printf("Ok, got it, no beverage\n\n");
			bill3 = 0;
		}

		printf("From the others list? (0 to pass)\n");
		scanf_s("%d", &d);
		if (d == 1) {
			int quantity;
			printf("Enter the qunatity of Rotis you want to get\n");
			scanf_s("%d", &quantity);
			bill4 = quantity * 7;
			printf("Your bill for %d Rotis is %d\n\n", quantity, bill4);
		}
		else if (d == 2) {
			int quantity;
			printf("Enter the qunatity of Naans you want to get\n");
			scanf_s("%d", &quantity);
			bill4 = quantity * 10;
			printf("Your bill for %d naan(s) is %d\n\n", quantity, bill4);
		}
		else if (d == 3) {
			int quantity;
			printf("Enter the quantity of raita you want to get\n");
			scanf_s("%d", &quantity);
			bill4 = quantity * 40;
			printf("Your bill for %d raita is %d\n\n", quantity, bill4);
		}
		else if (d == 4) {
			int quantity;
			printf("Enter the quantity of salad you want to get\n");
			scanf_s("%d", &quantity);
			bill4 = quantity * 50;
			printf("Your bill for %d salad is %d\n\n", quantity, bill4);
		}
		else if (d == 0) {
			printf("Ok, got it, you don't want side orders\n");
			bill3 = 0;
		}

		bill = bill1 + bill2 + bill3 + bill4;
		printf("Your gross bill is %d\n", bill);

		n = coupon();
		if (n == 0)
		{
			printf("We can't take bill from you\n");
		}
		else if (n == 1)
		{
			printf("Your bill after discount is %.0f PKR\n", bill - (0.3 * bill));
		}
		else if (n == 2)
		{
			printf("Your gross bill remains %d\n", bill);
		}
	}
	system("pause");
	system("cls");
	exitscreen();
}

void mid_night()

{
	char x[20];
	int i, deal, n;
	printf("Mid-night cravings? No worries, We are here\n");
	printf("We are offering 15 percent discount on mid-night deal\n");
	printf("We have the following deals\n\n");
	printf("\tDeal 1:\n");
	printf("\t\t 2 Zinger Burgers + 2 Soft Drinks\t\t\t\t\t\t\t\t For PKR 530\n\n");
	printf("\tDeal 2:\n");
	printf("\t\t 3 Zinger Burgers with fries\t\t\t\t\t\t\t\t\t For PKR 720\n\n");
	printf("\tDeal 3:\n");
	printf("\t\t 1 Chicken Fajita Pizza (small) + 1 Mushroom Sauce Burger + 1 Cheese Fries\t\t\t For PKR 900\n\n");
	printf("\tDeal 4:\n");
	printf("\t\t 2 Grilled Chicken Burgers + 1 BBQ Pizza (small) + 1 Soft drink\t\t\t\t\t For PKR 1000\n\n");
	printf("Deals don't suit you? Don't worry, you can pick individual stuff from the menu (You'll be missing discount this way though)\n\n");
	printf("Burgers:\n");
	printf("1. Zinger Burger\t\t\t\t\t For PKR 250\n");
	printf("2. Mushroom Sauce Grilled Chicken Burger \t\t For PKR 280\n");
	printf("3. Grilled Chicken Burger \t\t\t\t For PKR 270\n\n");
	printf("Pizza:\n");
	printf("1. Cheese lover\n");
	printf("2. BBQ pizza\n");
	printf("3. Chicke Fajita\n");
	printf("Beverages:\n");
	printf("1. Mineral Water \t\t\t\t\t For PKR 30\n");
	printf("2. Soft Drink \t\t\t\t\t\t For PKR 50\n\n");
	printf("If you want to get a deal, type 'deal'\n");
	printf("If you want to pick individually, type 'no deal'\n\n");

	for (int i = 0; i < 2; i++)
	gets(x);

	if (strcmp(x, "deal") == 0) {
		system("cls");
		printf("Ah I see, deal it is then\n");
		printf("Again\n");
		printf("\tDeal 1:\n");
		printf("\t\t 2 Zinger Burgers + 2 Soft Drinks\t\t\t\t\t\t\t\t For PKR 530\n\n");
		printf("\tDeal 2:\n");
		printf("\t\t 3 Zinger Burgers with fries\t\t\t\t\t\t\t\t\t For PKR 720\n\n");
		printf("\tDeal 3:\n");
		printf("\t\t 1 Chicken Fajita Pizza (small) + 1 Mushroom Sauce Burger + 1 Cheese Fries\t\t\t For PKR 900\n\n");
		printf("\tDeal 4:\n");
		printf("\t\t 2 Grilled Chicken Burgers + 1 BBQ Pizza (small) + 1 Soft drink\t\t\t\t\t For PKR 1000\n\n");
		printf("Deal 1, 2, 3 or 4?\n");
		scanf_s("%d", &deal);
		if (deal == 1) {
			int quantity, bill;
			printf("Enter the quantity you want to get\n");
			scanf_s("%d", &quantity);
			printf("\n");
			bill = quantity * 530;
			printf("Your bill is %d\n", bill);
			n = coupon();
			if (n == 0)
			{
				printf("We can't take bill from you\n");
			}
			else if (n == 1)
			{
				printf("Your bill after privileged and the mid-night discount is %.0f\n", bill - (0.45 * bill));
			}
			else if (n == 2)
			{
				printf("But you still got the mig-night discount\n");
				printf("Your bill becomes %.0f", bill - (0.15 * bill));
			}
		}
		else if (deal == 2) {
			int quantity, bill;
			printf("Enter the quantity you want to get\n");
			scanf_s("%d", &quantity);
			printf("\n");
			bill = quantity * 720;
			printf("Your bill is %d\n", bill);
			n = coupon();
			if (n == 0)
			{
				printf("We can't take bill from you\n");
			}
			else if (n == 1)
			{
				printf("Your bill after privileged and the mid-night discount is %.0f\n", bill - (0.45 * bill));
			}
			else if (n == 2)
			{
				printf("But you still got the mig-night discount\n");
				printf("Your bill becomes %.0f", bill - (0.15 * bill));
			}
		}
		else if (deal == 3) {
			int quantity, bill;
			printf("Enter the quantity you want to get\n");
			scanf_s("%d", &quantity);
			printf("\n");
			bill = quantity * 900;
			printf("Your bill is %d\n", bill);
			n = coupon();
			if (n == 0)
			{
				printf("We can't take bill from you\n");
			}
			else if (n == 1)
			{
				printf("Your bill after privileged and the mid-night discount is %.0f\n", bill - (0.45 * bill));
			}
			else if (n == 2)
			{
				printf("But you still got the mig-night discount\n");
				printf("Your bill becomes %.0f", 0.15 * bill);
			}
		}
		else if (deal == 4) {
			int quantity, bill;
			printf("Enter the quantity you want to get\n");
			scanf_s("%d", &quantity);
			printf("\n");
			bill = quantity * 1000;
			printf("Your bill is %d\n", bill);
			n = coupon();
			if (n == 0)
			{
				printf("We can't take bill from you\n");
			}
			else if (n == 1)
			{
				printf("Your bill after privileged and the mid-night discount is %.0f\n", bill - (0.45 * bill));
			}
			else if (n == 2)
			{
				printf("But you still got the mig-night discount\n");
				printf("Your bill becomes %.0f", bill - (0.15 * bill));
			}
		}
	}
	else if (strcmp(x, "no deal") == 0) {
		system("cls");
		printf("Invidual pick? Okay\n");
		printf("Again, the menu is:\n\n");
		printf("Burgers:\n");
		printf("1. Zinger Burger\t\t\t\t\t For PKR 250\n");
		printf("2. Mushroom Sauce Grilled Chicken Burger \t\t For PKR 280\n");
		printf("3. Grilled Chicken Burger \t\t\t\t For PKR 270\n\n");
		printf("Pizza:\n");
		printf("1. Cheese lover\n");
		printf("2. BBQ pizza\n");
		printf("3. Chicke Fajita\n");
		printf("Beverages:\n");
		printf("1. Mineral Water \t\t\t\t\t For PKR 30\n");
		printf("2. Soft Drink \t\t\t\t\t\t For PKR 50\n\n");
		printf("Enter the serial number of the individual pick\n\n");
		int a, b, c;
		printf("What among the Burgers? (0 for no choice)\n");
		scanf_s("%d", &a);
		int bill1 = 0, bill2 = 0, bill3 = 0, bill = 0;
		if (a == 1) {
			int quantity;
			printf("Enter the qunatity of Zinger Burgers you want to get\n");
			scanf_s("%d", &quantity);
			bill1 = quantity * 250;
			printf("Your bill for %d Zinger(s) is %d\n\n", quantity, bill1);
		}
		else if (a == 2) {
			int quantity;
			printf("Enter the qunatity of Mushroom Sauce Burger you want to get\n");
			scanf_s("%d", &quantity);
			bill1 = quantity * 280;
			printf("Your bill for %d Mushroom Sauce Burger(s) is %d\n\n", quantity, bill1);
		}
		else if (a == 3) {
			int quantity;
			printf("Enter the qunatity of Grilled Chicken you want to get\n");
			scanf_s("%d", &quantity);
			bill1 = quantity * 270;
			printf("Your bill for %d Grilled Chicken Bruger(s) is %d\n\n", quantity, bill1);
		}
		else if (a == 0) {
			printf("Okay so no Burger\n\n");
			bill1 = 0;
		}
		printf("Pizza? (0 for no)\n");
		scanf_s("%d", &b);
		if (b == 1 || b == 2 || b == 3) {
			printf("Enter the size please\n");
			printf("Small for 200, Medium for 400, Large for 600, XL for 900\n");
			char size[20];
			for (int i = 0; i < 2; i++)
				gets(size);
			if (strcmp(size, "small") == 0) {
				int quantity;
				printf("Enter the qunatity of small pizza you want\n");
				scanf_s("%d", &quantity);
				bill2 = quantity * 200;
				printf("Your bill for %d pizzas is %d\n\n", quantity, bill2);
			}
			else if (strcmp(size, "medium") == 0) {
				int quantity;
				printf("Enter the qunatity of medium pizza you want\n");
				scanf_s("%d", &quantity);
				bill2 = quantity * 400;
				printf("Your bill for %d pizzas is %d\n\n", quantity, bill2);
			}
			else if (strcmp(size, "large") == 0) {
				int quantity;
				printf("Enter the qunatity of large pizza you want\n");
				scanf_s("%d", &quantity);
				bill2 = quantity * 600;
				printf("Your bill for %d pizzas is %d\n\n", quantity, bill2);
			}
			else if (strcmp(size, "XL") == 0) {
				int quantity;
				printf("Enter the qunatity of XL pizza you want\n");
				scanf_s("%d", &quantity);
				bill2 = quantity * 900;
				printf("Your bill for %d pizzas is %d\n\n", quantity, bill2);
			}
		}
		else if (b == 0) {
			printf("Oh, so no pizza. Okay.\n\n");
			bill2 = 0;
		}

		printf("Among the Beverages? (0 for no Beverage)\n");
		scanf_s("%d", &c);
		if (c == 1) {
			int quantity;
			printf("Enter the qunatity of Mineral water bottles you want to get\n");
			scanf_s("%d", &quantity);
			bill3 = quantity * 30;
			printf("Your bill for %d Mineral Water Bottle(s) is %d\n\n", quantity, bill3);
		}
		else if (c == 2) {
			int quantity;
			char drink[10];
			printf("Enter the qunatity of Soft drinks you want to get\n");
			scanf_s("%d", &quantity);
			printf("Specify the drink too please\n");
			for (int i = 0; i < 2; i++)
				gets(drink);
			printf("Got it\n");
			bill3 = quantity * 50;
			printf("Your bill for %d %s soft drinks is %d\n\n", quantity, drink, bill3);
		}
		else if (c == 0) {
			printf("Ok, got it, no beverage\n\n");
			bill3 = 0;
		}

		bill = bill1 + bill2 + bill3;
		printf("Your gross bill is %d\n\n", bill);

		n = coupon();
		if (n == 0)
		{
			printf("We can't take bill from you\n");
		}
		else if (n == 1)
		{
			printf("Your bill after privileged and the mid-night discount is %.0f\n", bill - (0.45 * bill));
		}
		else if (n == 2)
		{
			printf("But you still got the mig-night discount\n");
			printf("Your bill becomes %.0f", bill - (0.15 * bill));
		}
	}
	system("pause");
	system("cls");
	exitscreen();
}

int coupon()
{
	int x;
	int i;
	char coupon1[7] = "283756";
	char coupon2[7] = "302073";
	char coupon3[7] = "293418";
	char coupon4[7] = "284126";
	char coupon5[7] = "290358";
	char coupon6[7] = "286527";
	char coupon7[7] = "321940";
	char coupon8[7] = "297333";
	char coupon9[7] = "291196";
	char coupon10[7] = "287400";
	char entered_coupon[7];

	printf("Are you member of good scene? Then you're a privilaged member\n");
	printf("Enter your cms as your coupon code to avail the discount\n");

	for (i = 0; i < 2; i++)
		gets(entered_coupon);

	if (strcmp(entered_coupon, coupon1) == 0) {
		printf("Hello boss\n");
		printf("Everything is free for you boss\n");
		x = 0;
	}
	else if (strcmp(entered_coupon, coupon2) == 0) {
		printf("Hello boss lady\n");
		printf("Everything is free for you boss\n");
		x = 0;
	}
	else if (strcmp(entered_coupon, coupon3) == 0) {
		printf("Hello Muaaz\n");
		printf("You're a privileged member Muaaz, you got 30 percent discount\n");
		x = 1;
	}
	else if (strcmp(entered_coupon, coupon4) == 0) {
		printf("Hello Kainat\n");
		printf("You're a privileged member Kainat, you got 30 percent discount\n");
		x = 1;
	}
	else if (strcmp(entered_coupon, coupon5) == 0) {
		printf("Hello Fatima\n");
		printf("You're a privileged member Fatima, you got 30 percent discount\n");
		x = 1;
	}
	else if (strcmp(entered_coupon, coupon6) == 0) {
		printf("Hello Noor\n");
		printf("You're a privileged member Noor, you got 30 percent discount\n");
		x = 1;
	}
	else if (strcmp(entered_coupon, coupon7) == 0) {
		printf("Hello Daniya\n");
		printf("You're a privileged member Daniya, you got 30 percent discount\n");
		x = 1;
	}
	else if (strcmp(entered_coupon, coupon8) == 0) {
		printf("Hello Areeb\n");
		printf("You're a privileged member Areeb, you got 30 percent discount\n");
		x = 1;
	}
	else if (strcmp(entered_coupon, coupon9) == 0) {
		printf("Hello Haleema\n");
		printf("You're a privileged member Haleema, you got 30 percent discount\n");
		x = 1;
	}
	else if (strcmp(entered_coupon, coupon10) == 0) {
		printf("Hello Sial\n");
		printf("You're a privileged member Sial, you got 30 percent discount\n");
		x = 1;
	}
	else {
		printf("No sorry, you're not a priviliged member\n");
		printf("You got no discount\n");
		x = 2;
	}
	return x;
}

void breakfast()
{
	char x[20];
	int i, d, n;
	printf("What do you want to have for breakfast?\n");
	printf("We have the following deals\n\n");
	printf("\tDeal 1:\n");
	printf("\t\t Omelette, 2 slices of bread, a cup of coffee\t\t\t For PKR 250\n\n");
	printf("\tDeal 2:\n");
	printf("\t\t 2 Fried eggs, 2 French toasts, a cup of tea\t\t\t For PKR 350\n\n");
	printf("Deals don't suit you? Don't worry, you can pick individual stuff from the menu\n\n");
	printf("Eggs:\n");
	printf("1. Fried egg \t\t\t\t For PKR 30\n");
	printf("2. Omelette \t\t\t\t For PKR 40\n");
	printf("3. Scrambled eggs \t\t\t For PKR 60\n\n");
	printf("Bread:\n");
	printf("1. Simple bread \t\t\t For PKR 20\n");
	printf("2. Simple bread with jam \t\t For PKR 50\n");
	printf("3. French toast \t\t\t For PKR 100\n");
	printf("4. Bran bread \t\t\t\t For PKR 70\n\n");
	printf("Beverages\n");
	printf("1. Coffee capucuino \t\t\t For PKR 100\n");
	printf("2. Coffee espresso \t\t\t For PKR 125\n");
	printf("3. Cold Coffee \t\t\t\t For PKR 175\n");
	printf("4. Tea \t\t\t\t\t For PKR 50\n\n");
	printf("If you want to get a deal, type 'deal'\n");
	printf("If you want to pick individually, type 'no deal'\n\n");

	for (i = 0; i < 2; i++)
		gets(x);

	if (strcmp(x, "deal") == 0) {
		system("cls");
		printf("Ah I see, deal it is then\n");
		printf("Again\n");
		printf("\tDeal 1:\n");
		printf("\t\t Omelette, 2 slices of bread, a cup of coffee\t\t\t For PKR 250\n\n");
		printf("\tDeal 2:\n");
		printf("\t\t 2 Fried eggs, 2 French toasts, a cup of tea\t\t\t For PKR 350\n\n");
		printf("Deal 1 or 2?\n");
		scanf_s("%d", &d);
		if (d == 1) {
			int quantity, bill;
			printf("Enter the qunatity you want to get\n");
			scanf_s("%d", &quantity);
			printf("\n");
			bill = quantity * 250;
			printf("Your bill is %d\n", bill);
			n = coupon();
			if (n == 0)
			{
				printf("We can't take bill from you\n");
			}
			else if (n == 1)
			{
				printf("Your bill after discount is %.0f PKR\n", (0.3 * bill));

			}
			else if (n == 2)
			{
				printf("Sorry you're not a privileged member\n");
			}
		}
		else if (d == 2) {
			int quantity, bill;
			printf("Enter the qunatity you want to get\n");
			scanf_s("%d", &quantity);
			printf("\n");
			bill = quantity * 350;
			printf("Your bill is %d\n", bill);
			n = coupon();
			if (n == 0)
			{
				printf("We can't take bill from you\n");
			}
			else if (n == 1)
			{
				printf("Your bill after discount is %.0f PKR\n", (0.3 * bill));

			}
			else if (n == 2)
			{
				printf("Sorry you're not a privileged member\n");
			}
		}
	}
	else if (strcmp(x, "no deal") == 0) {
		system("cls");
		printf("Invidual pick? Okay\n");
		printf("Again, the menu is:\n\n");
		printf("Eggs:\n");
		printf("1. Fried egg \t\t\t\t For PKR 30\n");
		printf("2. Omelette \t\t\t\t For PKR 40\n");
		printf("3. Scrambled eggs \t\t\t For PKR 60\n\n");
		printf("Bread:\n");
		printf("1. Simple bread \t\t\t For PKR 20\n");
		printf("2. Simple bread with jam \t\t For PKR 50\n");
		printf("3. French toast \t\t\t For PKR 100\n");
		printf("4. Bran bread \t\t\t\t For PKR 70\n\n");
		printf("Beverages\n");
		printf("1. Coffee capucuino \t\t\t For PKR 100\n");
		printf("2. Coffee espresso \t\t\t For PKR 125\n");
		printf("3. Cold Coffee \t\t\t\t For PKR 175\n");
		printf("4. Tea \t\t\t\t\t For PKR 50\n\n");
		printf("Enter the serial number of the individual pick\n\n");
		int a, b, c;
		printf("Among the eggs? (0 for no egg)\n");
		scanf_s("%d", &a);
		int bill1 = 0, bill2 = 0, bill3 = 0, bill = 0;
		if (a == 1) {
			int quantity;
			printf("Enter the qunatity of Fried eggs you want to get\n");
			scanf_s("%d", &quantity);
			bill1 = quantity * 30;
			printf("Your bill for %d fried egg(s) is %d\n\n", quantity, bill1);
		}
		else if (a == 2) {
			int quantity;
			printf("Enter the qunatity of Omelette you want to get\n");
			scanf_s("%d", &quantity);
			bill1 = quantity * 40;
			printf("Your bill for %d Omelette is %d\n\n", quantity, bill1);
		}
		else if (a == 3) {
			int quantity;
			printf("Enter the qunatity of scrambled eggs you want to get\n");
			scanf_s("%d", &quantity);
			bill1 = quantity * 60;
			printf("Your bill for %d scrambelled eggs is %d\n\n", quantity, bill1);
		}
		else if (a == 0) {
			printf("Okay. Got it, no egg\n\n");
			bill1 = 0;
		}

		printf("Among the Bread? (0 for no Bread)\n");
		scanf_s("%d", &b);
		if (b == 1) {
			int quantity;
			printf("Enter the qunatity of simple bread slices you want to get\n");
			scanf_s("%d", &quantity);
			bill2 = quantity * 20;
			printf("Your bill for %d bread slices is is %d\n\n", quantity, bill2);
		}
		else if (b == 2) {
			int quantity;
			printf("Enter the qunatity bread slices with jam you want to get\n");
			scanf_s("%d", &quantity);
			bill2 = quantity * 50;
			printf("Your bill for %d bread slices with jam is %d\n\n", quantity, bill2);
		}
		else if (b == 3) {
			int quantity;
			printf("Enter the qunatity of French toasts you want to get\n");
			scanf_s("%d", &quantity);
			bill2 = quantity * 100;
			printf("Your bill for %d French toast(s) is %d\n\n", quantity, bill2);
		}
		else if (b == 4) {
			int quantity;
			printf("Enter the qunatity of bran bread slices you want to get\n");
			scanf_s("%d", &quantity);
			bill2 = quantity * 70;
			printf("Your bill for %d bran brean slices is %d\n\n", quantity, bill2);
		}
		else if (b == 0) {
			printf("Okay, got it, no bread\n");
			bill2 = 0;
		}

		printf("Among the Beverages? (0 for no Beverage)\n");
		scanf_s("%d", &c);
		if (c == 1) {
			int quantity;
			printf("Enter the qunatity of capucinos you want to get\n");
			scanf_s("%d", &quantity);
			bill3 = quantity * 100;
			printf("Your bill for %d capucinos is %d\n\n", quantity, bill3);
		}
		else if (c == 2) {
			int quantity;
			printf("Enter the qunatity of espressos you want to get\n");
			scanf_s("%d", &quantity);
			bill3 = quantity * 120;
			printf("Your bill for %d espressos is %d\n\n", quantity, bill3);
		}
		else if (c == 3) {
			int quantity;
			printf("Enter the qunatity of cold coffees you want to get\n");
			scanf_s("%d", &quantity);
			bill3 = quantity * 175;
			printf("Your bill for %d cold coffees is %d\n\n", quantity, bill3);
		}
		else if (c == 4) {
			int quantity;
			printf("Enter the qunatity of tea you want to get\n");
			scanf_s("%d", &quantity);
			bill3 = quantity * 50;
			printf("Your bill for %d tea is %d\n\n", quantity, bill3);
		}
		else if (c == 0) {
			printf("Ok, got it, no beverage\n\n");
			bill3 = 0;
		}

		bill = bill1 + bill2 + bill3;
		printf("Your gross bill is %d\n", bill);

		n = coupon();
		if (n == 0)
		{
			printf("We can't take bill from you\n");
		}
		else if (n == 1)
		{
			printf("Your bill after discount is %.0f PKR\n", (0.3 * bill));

		}
		else if (n == 2)
		{
			printf("Sorry you're not a privileged member\n");
		}
	}
	system("pause");
	system("cls");
	exitscreen();
}

void exitscreen()
{
	int n, a;
	int x[100];
	int y[100];
	printf("Dine-in or takeaway?\n");
	printf("1 for dine-in, 2 for takeaway\n");

	scanf_s("%d", &n);
	printf("\n");

	if (n == 1)
	{
		printf("Enter your table number\n");
		printf("The table number is written on the right side in case you don't know\n");
		scanf_s("%d", &a);
		printf("Any special instructions?\n");
		for (int i = 0; i < 2; i++)
			fgets(x, 100, stdin);
		printf("\n");
		printf("Your order has been punched and instructions been given to the cooks\n");
	}
	else if (n == 2)
	{
		printf("Enter your address\n");
		for (int i = 0; i < 2; i++)
			fgets(x, 100, stdin);
		printf("\n");
		printf("Any special instructions?\n");
		for (int i = 0; i < 2; i++)
			fgets(x, 100, stdin);
		printf("\n");
		printf("Got it, you'll get a confirmation call from our official shortly\n");
	}

	printf("\n\n\n");
	printf("\t\t\t***************************************\n");
	printf("\t\t\tThank you for visiting, come again :)\n");
	printf("\t\t\t***************************************");
	printf("\n\n\n");
}
