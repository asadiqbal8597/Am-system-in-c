#include <stdio.h>
#include <windows.h>
#include <winsock.h>
#include <mysql.h>
unsigned long amount=1000000000, deposit, withdraw,trans,account;
int choice, pin, k,old_n,new;
char transaction ='y';
int withdr();
int transfer();
int dep();
int mobile_number_update();
void main()
{
     MYSQL mysql;
if(mysql_init(&mysql)==NULL) {
printf("unable to connect\n");
			printf("\n\n");
            printf("\n\t___________________________________________________________________\n");
    printf("\n\t\t            PICT COMMERCIAL BANK               \n");
    printf("\n\t____________________________________________________________________\n\n");
            printf("\t\t\t--------Welcome to our ATM service---------------\n\n\n");
    system("color 1b");
	while (pin != 1959)
	{
		printf("ENTER YOUR PIN NUMBER:");
		scanf("%d", &pin);
		if (pin != 1959)
		printf("PLEASE ENTER VALID PASSWORD\n");
	}
	do
	{
		printf("********Welcome to ATM Service**************\n");
		printf("1. Check Balance         \t\t\t");
		printf("2. Withdraw Cash         \t\t\t\n");
		printf("3. Deposit Cash          \t\t\t");
		printf("4. Transfer Cash         \t\t\t\n");
		printf("5. Update Mobile Number  \t\t\t");
		printf("6. Quit");
		printf("\n******************?**************************?*\n\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\n YOUR BALANCE IS Rs : %lu ", amount);
			break;
		case 2:withdr();


			break;
		case 3:dep();

			break;
	    case 4:transfer();
		break;

			case 5:mobile_number_update();
			break;
				case 6:
			printf("\nTHANK YOU FOR USING ATM.\nHAVE A NICE DAY.");
			break;
		default:
			printf("\n INVALID CHOICE");
		}
		printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N')
                    k = 1;
	} while (!k);
	printf("\n\nTHANKS FOR USING OUR ATM SERVICE.\nHAVE A NICE DAY AHEAD.");
}
}
int withdr()
{


	printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
			scanf("%lu", &withdraw);
			if (withdraw % 100 != 0)
			{
				printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
			}
			else if (withdraw >(amount - 500))
			{
				printf("\n INSUFFICENT BALANCE");
			}
			else
			{
				amount = amount - withdraw;
				printf("\n\n PLEASE COLLECT CASH");
				printf("\n YOUR CURRENT BALANCE IS %lu", amount);
			}

}
int dep()
{
		printf("\nENTER THE AMOUNT TO DEPOSIT:");
			scanf("%lu", &deposit);
                        amount = amount + deposit;
            printf("AMOUNT SUCCESSFULLY DEPOSITED.\n");
			printf("YOUR BALANCE IS %lu.", amount);
}
int transfer()
{
	 printf("\nENTER A\C IN WHICH THE AMOUNT HAS TO BE TRANSFERRED: ");
	 scanf(" %lu",&account);
	 printf("\nENTER AMOUNT TO TRANSFER: ");
	 scanf(" %lu",&trans);

	 amount = amount - trans;
	 printf("\nYOUR CURRENT BALANCE IS %lu",amount);

	 printf("\nTRANSFER SUCCESSFUL.");
	 return 0;
}
int mobile_number_update()
{
		printf("\nENTER YOUR OLD MOBILE NUMBER:");
		scanf("\n%d",&old_n);
		printf("\nENTER YOUR PIN AGAIN:");
		scanf("\n%d",&pin);
		if (pin==1520)
	{
			printf("\nENTER YOUR NEW MOBILE NUMBER:\n");
		scanf("%d",&new);
		printf("MOBILE NO. SUCCESSFULLY UPDATED.\n\n");
		printf("YOUR NEW INFO IS :\n\n");
		printf("A\C NO.:         120000044500000098\n");
		printf("A\C HOLDER NAME: ASAD IQBAL\n");
		printf("CURRENT BALANCE: %lu\n",amount);

	}
	else printf("INVALID PIN");
	return 1;
}

