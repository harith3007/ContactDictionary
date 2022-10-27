#include<stdio.h>
#include<stdlib.h>
#include<functions.h>
void display_contact_options()
{
	int option;
	while(1)
	{
		printf("\nPress 1 for display all Personal Contacts: ");
		printf("\nPress 2 for display all Business Contacts: ");
		printf("\nPress 3 for go back to menu: ");
		printf("\nPlease enter your option:- ");
		scanf("%d",&option);
	
		switch(option)
		{
			case 1:if(option==1)
			       		List_all_personal_contacts();
		       		break;
			case 2:if(option == 2)
			      		List_all_business_contacts();
		       		break;
			case 3:user_menu();
			       break;
			default: printf("\nPlease enter valid option");
		}
	}
}
