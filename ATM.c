//Bank Account imanagement software systeim
//24 Hour Code Challenge 
//Date 02/02/2024
//Author: Lucky Griffin

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Define Maximum number of accounts that can be held by The Griffin Bank*/
#define MaxAccounts 1000
int numAccounts;

/*Bank Account Structure */
struct BankAccount{
	int AccNo;
	float Balance;
	int Pin;
	char Name[50];
};

void CreateAccount(struct BankAccount *Accounts, int *numAccounts);


int main(){
	struct BankAccount Accounts[MaxAccounts];
	int numAccounts = 0; /*Variable to keep track of the number of accounts*/
	CreateAccount(Accounts, &numAccounts);
	return 0;
}

/*Implement the Create Account Function*/
void CreateAccount(struct BankAccount *Accounts, int *numAccounts) {
	if (*numAccounts >= MaxAccounts ){
		 printf("Maximum Account Limit Error. Contact The Griffin Bank for assistance  \n");
		 return;
	}

	/*Assign a unique Account Number to Each Account Holder*/
	char Name[50];
	printf("Please Enter your Name: ");
	scanf(" %49[^\n]", Name);

	int AccNo = rand() % 9000000 + 1000000;
	printf("Hi %s\n.Your Griffin Bank Account Number is: %d\n",Name, AccNo);

	/*Set Pin for Account */
	/*prompt user for PIN*/
	int Pin;
	printf("Please Enter a 4 digit PIN for the Account: ");
	scanf("%d", &Pin);

	/* Initialize the account with default balance or any other relevant information*/
	struct BankAccount NewAccount = {AccNo, 0.0, Pin, ""};


	/*Add New Account to the Array*/
	Accounts[*numAccounts] = NewAccount;


	/*Increment the umber of accoutns by 1 at a time */
	(*numAccounts)++;

	printf("Account Created Successfully.\n");
	printf("Account Number: %d\n",AccNo);
	printf("Your Pin is : %d\n", Pin);
	printf("Thank You for Banking with The Griffin Bank\n");
	printf("Contact Lucky Griffin on +25478928515 to Report Fraud Cases\n");
	}

	
