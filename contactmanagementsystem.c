#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void addContact();
void viewContact();
void help();
char fname[50];
char lname[50];
char phone_number[50];
char email_address[50];
char address[50];
void main()
{
	int choice;
	printf("\n\n\t------------MOST WELCOME IN CONTACT MANAGE SYSTEM --------");
	printf("\n\t[1]---> TO ADD  CONTACT");
	printf("\n\t[2]---> TO VIEW  CONTACT");
	printf("\n\t[3]---> TO TAKE HELP");
	printf("\n\t[4]---> TO EXIT FROM THIS APPLICATION");
	printf("\n\tENTER YOUR CHOICE AMONG THE GIVEN OPTIONS.");
	scanf("%d", &choice);
	switch (choice)
	{

	case 1:
		addContact();
		break;
	case 2:
		viewContact();
		break;
	case 3:
		help();
		break;
	case 4:
		exit(1);
	default:
		printf("\n\tPLEASE ENTER THE CORRECT CHOICE TO USE THIS APPLICATION\n");
		main();
	}
}
void addContact()
{
	int i;
	system("cls");
	FILE *fp;						// use of file handling concept
	fp = fopen("CONTACT.txt", "w"); // file is opened in write mode.
	printf("\n\tPLEASE ENTER THE FIRST NAME OF CONTACT.");
	scanf("%s", fname);
	printf("\n\tPLEASE ENTER THE LAST NAME OF CONTACT.");
	scanf("%s", lname);
	printf("\n\tPLEASE ENTER THE PHONE NUMBER OF CONTACT.");
	scanf("%s", phone_number);
	printf("\n\tPLEASE ENTER THE EMAIL ADDRESS OF CONTACT.");
	scanf("%s", email_address);
	printf("\n\tPLEASE ENTER THE ORIGINAL ADDRESS OF CONTACT.");
	scanf("%s", address);
	if (strlen(phone_number) == 10)
	{

		/*fputs(fname,fp);//first name string(fname) is put in THE txt file.

		fputs(lname,fp);
		//last name string(lname) is put in THE txt file.
		fputs(phone_number,fp);
		 fputs(address,fp);*/
		fprintf(fp, "\n\tNAME:%s %s\n\tphone_number:%s\n\temail_address:%s\n\taddress:%s", fname, lname, phone_number, email_address, address);
		printf("\n\tCONTACT DATA IS ADDED SUCCESFULLY");
	}

	else
	{
		printf("\n\tPLEASE ENTER THE PHONE NUMBER HAVING 10 DIGITS ONLY!");
	}
	fclose(fp);
	main();
}
void viewContact()
{
	system("cls");
	FILE *fp;
	char ch;

	fp = fopen("CONTACT.txt", "r");

	if (fp == NULL)
	{
		printf("....!!AN ERROR IS OCCURRED!!....\n");
		exit(1);
	}
	printf("\n\t------THE LIST OF CONTACTS-------\n");
	ch = fgetc(fp);
	//printf("\n");
	printf("--:THIS LIST CONTAINS THE FOLLOWING DETAILS OF CONTACT:--\n");
	printf("NAME,PHONE NUMBER AND EMAIL ADDRESS.\n");
	while (!feof(fp)) // feof returns 1 if end of file is achieved else it returns 0.!1=0 loop will not run,!0=1 loop will run
	{

		printf("%c", ch);
		ch = fgetc(fp);
	}

	fclose(fp);

	main();
}
void help()
{
	printf("\n\t THIS IS CONTACT MANAGEMENT APPLICATION");
	printf("\n\tplease enter THE valid data only!");
	printf("\n\tplease enter THE valid choice only!");
	main();
}