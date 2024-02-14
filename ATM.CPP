#include<stdio.h>
#include<conio.h>
void main()
{
 int login=0,card_num,pin_num,account_num=0,pin_num2,card_num2,trans,transaction,initial_deposit,deposit_amount,available_balance,withdrawl_amount;
 char customer_name[15];
 int count=0;

 clrscr();
 loginid:
 printf("\n enter the login : 1)admin  2)customer \n");
 scanf("%d",&login);

 if(login==1)
 {
	 if(account_num ==0)
	 {
	    printf("customer name: \n");
	    scanf("%s",&customer_name);
	    printf("account num: \n");
	    scanf("%d",&account_num);
	    printf("card num: \n");
	    scanf("%d",&card_num);
	    printf("pin num: \n");
	    scanf("%d",&pin_num);
	    printf("enter the initial deposit=\n");
	    scanf("%d",&initial_deposit);

	    if(initial_deposit<500)
	    {
	       printf("insufficient balance");
	       goto loginid;
	    }
	    else
	    {
	    printf("your available balance=%d",initial_deposit);
	    }

	 printf("customer details updated succesfully \n");
	 goto loginid;
	 }
	 else
	 {
	 printf("already customer details updated \n");
	 goto loginid;
	 }
}
else if(login==2)
 {
  if(account_num==0)
    {

    printf("please enter the customer details in admin loginid \n");
    goto loginid;
    }


    else
    {
     checking:
     printf("enter the card num2:");
     scanf("%d",&card_num2);
     printf("enter the pin num2:");
     scanf("%d",&pin_num2);
	if(card_num==card_num2 && pin_num==pin_num2)
	{
	transaction:
	printf("\n do you want trans : 1)yes  2)no \n");
	scanf("%d",&trans);

	   if(trans==1)
	   {
	   printf("transaction : 1)deposit  2)withdrawl  3)balance  \n");
	   scanf("%d",&transaction);


	    if(transaction==1)
	    {
	    printf("enter the depsoit amount:\n");
	    scanf("%d",&deposit_amount);
	    initial_deposit=initial_deposit+deposit_amount;
	    printf("your available balance = %d",initial_deposit);
	    goto transaction;
	    }
	   else if(transaction==2)
	   {
	   printf("enter the withdrawl amount:\n");
	   scanf("%d",&withdrawl_amount);
	     if(withdrawl_amount>initial_deposit)
	     {
	     printf("insufficient balance");
	     }
	     else
	     {
	     initial_deposit=initial_deposit-withdrawl_amount;
	     printf("your available balance = %d \n",initial_deposit);

	     goto transaction;
	     }
	   }
	    else
	    {
	    printf("your available balance =%d \n",initial_deposit);

	    goto transaction;
	    }


	 }
	}

	else
	{
       //	printf("invalid input");
	//goto checking;
	if(count<3)
	{
	printf("Invalid Input");
	count++;
	if(count==3)
	 {
	 printf("Account Locked");
	 }
	 else
	 {
	 goto checking;
	 }

	}

	}
     }
     }

 else
 {
 printf("Invalid Input");
 }

 getch();
}
