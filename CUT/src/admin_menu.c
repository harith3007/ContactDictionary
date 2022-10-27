#include<stdio.h>
#include<stdlib.h>
#include<struct.h>
#include<functions.h>
void admin_menu()
{
	int ch;
	while(1)
	{
		printf("\n1:List of all Personal contacts\n2:List of all Business contacts\n3:Delete Personal Contact\n4:Delete Business Contact\n5:Update Personal contact\n6:Update Business Contact\n7:Back to main menu\n");
		printf("\nEnter your choice:-");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:List_all_personal_contacts();
			       break;
			case 2:List_all_business_contacts();
			       break;
			case 3:delete_personal();
			       break;
			case 4:delete_business();
			       break;
			case 5:update_personal();
			       break;
			case 6:update_business();
			       break;
			case 7:options();
		}
	}
}

