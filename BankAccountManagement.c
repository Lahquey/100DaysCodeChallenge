//Bank Account management software system
//24 Hour Code Challenge 
//Date 02/02/2024
//Author: Lucky Griffin

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Bank Account Structure */

struct BankAccount(){
	int AccNo;
	float Balance;
	int Pin;
	char Name[50];

}

/*Define Maximum number of accounts that can be held by The Griffin Bank*/

#define MaxAccounts 1000
struct BankAccount Account[MaxAccounts];
int numAccounts = 0; /*Variable to keep track of the number of accounts*/

/*Declare the function prototype for the createAccount function.*/
/*Place this at the top of your file, after the struct BankAccount definition.*/

//Function Prototype

void CreateAccount(struct BankAccount *Accounts, int *numAccounts){

/*Implement the createAccount function. 
 * This function takes the array of BankAccount structures (accounts) and the pointer to the variable tracking the number of accounts (numAccounts).*/

// Check if the maximum number of accounts has been reached

if (*numAccounts >= MaxAccounts ){
	printf("Maximum Account Limit Error. Contact The Griffin Bank for assistance" \n);
	return;
}

/*Assign a unique Account Number to Each Account Holder*/

int AccNo = *numAccounts + 1;

/*Set Pin for Account */
/*prompt user for PIN*/
printf("Please Enter a 4 digit PIN for the Account: ");
scanf("%d", &Accounts[numAccounts].Pin);

/* Initialize the account with default balance or any other relevant information*/
struct BankAccount NewAccount = {AccNo, Pin, 8500.80 /*initial Balance*/};

/*Add New Account to the Array*/
Accounts[*numAccounts] = NewAccount;

/*Increment the umber of accoutns by 1 at a time */
(numAccounts)++;

printf("Account Created Successfully.\n");
printf("Account Number: %d\n",AccNo);
printf("Your Pin is : %d\n", Pin);
printf("Thank You for Banking with The Griffin Bank");
printf("In case of emergencies or to report fraud contact Lucky Griffin on +254 719 449508");

}
