#include <stdio.h>

void main()
{
    int n, qt, r;
    float amt = 0, totamt = 0;

    printf("             WELCOME TO OUR CANTEEN!               \n");

    abc:
    printf("\nWhat would you like to order? ");
    printf("\nPRESS\n 1 ----> Full meal ----> $100");
    printf("\n 2 ----> Sandwich ----> $50");
    printf("\n 3 ----> Farmhouse Pizza ----> $90");
    printf("\n 4 ----> Pink sauce Pasta ----> $80");
    printf("\n 5 ----> Panner Bun ----> $40");
    printf("\n 6 ----> Dosa ----> $30");
    printf("\n 7 ----> Bhel puri ----> $30");
    scanf("%d", &n);

    switch (n)
    {
        case 1:
            printf("\nHow many Full meal do u wish to order?");
            scanf("%d", &qt);
            amt += qt * 100;
            break;
        case 2:
            printf("\nHow many Sandwiches do u wish to order?");
            scanf("%d", &qt);
            amt += qt * 50;
            break;
        case 3:
            printf("\nHow many Pizzas do u wish to order?");
            scanf("%d", &qt);
            amt += qt * 90;
            break;
        case 4:
            printf("\nHow many Pasta do u wish to order?");
            scanf("%d", &qt);
            amt += qt * 80;
            break;
        case 5:
            printf("\nHow many Paneer buns do u wish to order?");
            scanf("%d", &qt);
            amt += qt * 40;
            break;
        case 6:
            printf("\nHow many Dosa do u wish to order?");
            scanf("%d", &qt);
            amt += qt * 30;
            break;
        case 7:
            printf("\nHow many Bhel puri do u wish to order?");
            scanf("%d", &qt);
            amt += qt * 30;
            break;
        default:
            printf("Enter the number in the range (1-7)");
            goto abc;
    }

    totamt += amt;
    amt = 0;
    order_again:
    printf("Do u wish to order anything else?");
    printf("\nPress 1 to jump to menu\nPress 2 to get the bill\n");
    scanf("%d", &r);

    if (r == 1)
    {
        goto abc;
    }
    else if (r == 2)
    {
        printf("             BILL                  \n");
        printf("You need to pay $%f\n", totamt);
        printf(" \n      Thanks for visiting!          \n");

    }
    else
    {
        printf("Invalid option. Please try again.\n");
        goto order_again;
    }
}
