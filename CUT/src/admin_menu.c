#include<stdio.h>
#include<stdlib.h>
#include<struct.h>
#include<functions.h>
void admin_menu()
{
	int ch;
	while(1)
	{
		
		printf("\n\n1:List of all Personal contacts\n\n2:List of all Business contacts\n\n3:Delete Personal Contact\n\n4:Delete Business Contact\n\n5:Update Personal contact\n\n6:Update Business Contact\n\n7:Back to main menu\n\n8:Exit Application\n");
		printf("\n\nEnter your choice:-");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:List_all_personal_contacts();  //************CALLING LIST OF PERSONAL CONTACTS FUNCTION***************
			       break;
			case 2:List_all_business_contacts();  //************CALLING LIST OF BUSINESS CONTACTS FUNCTION***************
			       break;
			case 3:delete_personal();    //*************CALLING DELETE PERSONAL CONTACT FUNCTION******************** 
			       break;
			case 4:delete_business();    //*************CALLING DELETE BUSINESS CONTACT FUNCTION********************
			       break;
			case 5:update_personal();    //*************CALLING UPDATE PERSONAL CONTACT FUNCTION******************** 
			       break;
			case 6:update_business();    //*************CALLING UPDATE BUSINESS CONTACT FUNCTION********************
			       break;
			case 7:options();           //**************CALLING MAIN MENU FUNCTION**********************************
					break;
			case 8:exit(0);
		}
	}
}

