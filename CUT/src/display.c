#include<stdio.h>
#include<stdlib.h>
#include<functions.h>
void display_contact_options()
{
	int option;
	while(1)
	{
		printf("\n1:Display all Personal Contacts ");
		printf("\n\n2:Display all Business Contacts");
		printf("\n\n3:Back to menu");
		printf("\n\nPlease enter your option:- ");
		scanf("%d",&option);
	
		switch(option)
		{
			case 1:if(option==1)
			       		List_all_personal_contacts();
		       		break;
			case 2:if(option == 2)
			      		List_all_business_contacts();
		       		break;
			case 3:user_menu();//**********CALLING USER MENU**********
			       break;
			default: printf("\nPlease enter valid option");
		}
	}
}
