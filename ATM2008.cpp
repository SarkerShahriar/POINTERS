#include <stdio.h>
#include <stdlib.h>

    unsigned long amount=100000, deposit,loan, withdraw;

    void delay(int number_of_seconds);

    int choice,age,option, pin,ebill=2000,gasbill=800,waterbill=400,telebill=1200,wifibill=1000,opinion,k,ActualBalance;

    int m1,m2,m3,m4,m5;

    char transaction ='y';


    int main()

    {
        system("color 1F");

        printf("\t\t\t\t****WELCOME TO DIU ATM SERVICE!****\n\n\n\a");

                    while (pin != 2017)

        {

            printf("ENTER YOUR SECRET PIN NUMBER:\a");

            scanf("%d", &pin);

            if (pin != 2017)

            printf("PLEASE ENTER VALID PASSWORD\n\a");



        }

        do

        {

            printf("********Welcome to ATM Service**************\n\a");

            printf("1. Check Balance\n\a");

            printf("2. Withdraw Cash\n\a");

            printf("3. Deposit Cash\n\a");

            printf("4. Loan\n\a");

            printf("5. Bills\n\a");

            printf("6. Quit\n\a");

            printf("********************************************\n\n");

            printf("Enter your choice:\a ");

            scanf("%d", &choice);

            switch(choice)

            {

            case 1:

                printf("\n YOUR BALANCE IN Tk: %lu\a ", amount);

                break;

            case 2:

                printf("\n ENTER THE AMOUNT TO WITHDRAW:\a ");

                scanf("%lu", &withdraw);

                if (withdraw % 100 != 0)

                {

                    printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100\a");

                }

                else if (withdraw >(amount - 500))

                {

                    printf("\n INSUFFICENT BALANCE\a");

                }

                else

                {

                    amount = amount - withdraw;

                    printf("\n\n PLEASE COLLECT CASH\a");

                    printf("\n YOUR CURRENT BALANCE IS: %lu\a", amount);

                }

                break;

            case 3:

                printf("\n ENTER THE AMOUNT TO DEPOSIT:\a");

                scanf("%lu", &deposit);

                            amount = amount + deposit;

                printf("YOUR CURRENT BALANCE IS: %lu\a", amount);

                break;

                case 4:

                printf("Enter your age:\a");

               scanf("%d",&age);

                    if (age>=25)
                    {
                        printf("7.Car loan\n\a");

                        printf("8.Home loan\n\a");

                        printf("9.Education loan\n\a");

                        printf("10.Industrial Loan\n\a");

                        printf("11.Business Loan\n\a");

                        printf("Enter option:\n\a");

                        scanf("%d",&option);

                       if(option==7)

                       {
                           loan=amount*0.4;

                        amount=amount+loan;

                        ActualBalance=amount-loan;

                        printf("Balance after loan is :Tk %1u\a ",amount);

                        printf("Loan=%d\n\n",loan);

                        printf("Current Balance=%d\n\n",ActualBalance);

                       }

                       else if(option==8)

                       {
                           loan=amount*0.8;

                        amount=amount+loan;

                        ActualBalance=amount-loan;

                        printf("Balance after loan is Tk %1u\a ",amount);

                         printf("Loan=%d\n\n",loan);

                        printf("Current Balance=%d\n\n",ActualBalance);

                       }

                       else if(option==9)

                       {
                           loan=amount*0.6;

                        amount=amount+loan;

                        ActualBalance=amount-loan;

                        printf("Balance after loan is Tk %1u\a ",amount);

                         printf("Loan=%d\n\n",loan);

                        printf("Current Balance=%d\n\n",ActualBalance);

                       }

                    else if(option==10)

                       {
                           loan=amount*0.5;

                        amount=amount+loan;

                        ActualBalance=amount-loan;

                        printf("Balance after loan is Tk %1u\a ",amount);

                         printf("Loan=%d\n\n",loan);

                        printf("Current Balance=%d\n\n",ActualBalance);

                       }
                       else if(option=11)
                      {
                           loan=amount*0.5;

                        amount=amount+loan;

                        ActualBalance=amount-loan;

                        printf("Balance after loan is Tk %1u\a ",amount);

                         printf("Loan=%d\n\n",loan);

                        printf("Current Balance=%d\n\n",ActualBalance);

                       }
                       else
                       printf("Invalid option\n\a");

                    }

                    else

                     {

                     printf("Your are not eligible for loan\a");

                    }

                break;

                case 5:
                        printf("12.Electricity bill\n\a");

                        printf("13.Gas bill\n\a");

                        printf("14.Water bill\n\a");

                        printf("15.Telephone bill\n\a");

                        printf("Enter opinion:\a");

                        scanf("%d",&opinion);

                       if(opinion==12)

                       {


                        printf("Your electricity bill is %d\n\n",ebill);

                        printf("Do you want to pay the bill? \n \a ");


                         printf("1.YES\n\n");

                        printf("2.NO\n\n");

                        printf("Enter your choice:\n\n");

                        scanf("%d",&m1);

                        if(m1==1)
                           {
                               amount=amount-ebill;

                               printf("Your electricity bill was paid successfully\n\n ");


                        printf("Balance after paying electricity bill is Tk %1u\n\a ",amount);

                       }
                       }

                       else if(opinion==13)

                       {


                            printf("Your gas bill is %d\n\n",gasbill);

                        printf("Do you want to pay the bill? \n \a ");

                         printf("1.YES\n\n");

                        printf("2.NO\n\n");

                        printf("Enter your choice:\n\n");

                        scanf("%d",&m2);

                        if(m2==1)

                           {
                               amount=amount-gasbill;

                               printf("Your bill was paid successfully\n\n ");

                        printf("Balance after paying gas bill is Tk %1u\a ",amount);

                       }
                       else
                       {
                           printf("thank u");
                       }
                       }

                       else if(opinion==14)

                       {


                        printf("Your bill is %d\n\n",waterbill);

                        printf("Do you want to pay the bill? \n \a ");


                         printf("1.YES\n\n");

                        printf("2.NO\n\n");

                        printf("Enter your choice:\n\n");

                        scanf("%d",&m3);

                        if(m3==1)

                           {
                               amount=amount-waterbill;

                               printf("Your bill was paid successfully\n\n ");

                        printf("Balance after paying water bill is Tk %1u\a ",amount);

                       }
                       else
                       {
                           printf("thank u");
                       }
                       }

                        else if(opinion==15)

                       {


                            printf("Your bill is %d\n\n",telebill);

                        printf("Do you want to pay the bill? \n \a ");


                         printf("1.YES\n\n");

                        printf("2.NO\n\n");

                        printf("Enter your choice:\n\n");

                        scanf("%d",&m4);

                        if(m4==1)
                           {
                               amount=amount-telebill;

                               printf("Your bill was paid successfully\n\n ");

                        printf("Balance after paying telephone bill is Tk %1u\a ",amount);

                       }
                       else
                       {
                           printf("thank u");
                       }
                       }

                       else

                       printf("Invalid option\n\a");

                       break;

            case 6:

                printf("\n THANK You for USING ATM!\a");

                break;

            default:

                printf("\n INVALID CHOICE\a");


                       }

            printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION? (y/n): \n\a");

            fflush(stdin);

            scanf("%c", &transaction);

            if (transaction == 'n'||transaction == 'n')

                        k = 1;

       }

     while (!k);

    printf("\n\n \t\t\t\t THANKS FOR USING OUR ATM SERVICE! \a");

return 0;

      }
