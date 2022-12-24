#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

struct fastFood
{
    float price1, price2, price3, price4;
    int code1, code2 ,code3, code4;
    char item1 [MAX], item2  [MAX], item3 [MAX], item4[MAX];

};

int code, quantity, price;
float amount, totalAMOUNT, cashTender, cashTotal, change;
char addmore;

int main()
{
    struct fastFood menu;
    menu.price1 = 35;
    menu.price2 = 40;
    menu.price3 = 50;
    menu.price4 = 50;
    strcpy (menu.item1, "Burger");
    strcpy (menu.item2, "Cheese Burger");
    strcpy (menu.item3, "Footlong");
    strcpy (menu.item4, "French Fries");
    menu.code1 = 1;
    menu.code2 = 2;
    menu.code3 = 3;
    menu.code4 = 4;
do {
    printf("\t\t= = = = = = = = = = = = = = = =\n");
    printf("\t\t\t  EAT N RUN\n");
    printf("\t\t= = = = = = = = = = = = = = = =\n\n");


    printf("\t[%d]\t\t%s = %.2f\n", menu.code1, menu.item1, menu.price1);
    printf("\t[%d]\t\t%s = %.2f\n", menu.code2, menu.item2, menu.price2);
    printf("\t[%d]\t\t%s = %.2f\n", menu.code3, menu.item3, menu.price3);
    printf("\t[%d]\t\t%s = %.2f\n", menu.code4, menu.item4, menu.price4);

    do
    {
    printf("\nPLEASE ENTER CODE: ");
    scanf("%d)", &code);
    } while (code < 0 || code > 3);
    printf("\nPLEASE ENTER QUANTITY: ");
    scanf("%d", &quantity);

    switch (code)
    {
      case(1): price = menu.price1;
      break;
      case(2): price = menu.price2;
      break;
      case(3): price = menu.price3;
      break;
    }

    amount = price * quantity;
    printf("\nAmount: %.2f\n", amount);

    totalAMOUNT = totalAMOUNT + amount;
    printf("\nTOTAL AMOUNT PAYABLE: %.2f", totalAMOUNT);

    printf("\nADD MORE ORDER (y/n)? ");
    addmore = getche();

    printf("\n\n\n");
} while( addmore == 'y' || addmore == 'y');


    do
    {
    printf("\nCASH TENDERED: ");
    scanf("%f", &cashTender);

    cashTotal = cashTotal + cashTender;
    printf("\nCASH TOTAL: %.2f", cashTotal);
    } while (totalAMOUNT > cashTotal);

    change = cashTotal - totalAMOUNT;
    printf("\nTOTAL CHANGE: %.2f", change);

    return 0;
}
