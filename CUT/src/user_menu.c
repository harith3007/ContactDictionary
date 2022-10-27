#include<stdio.h>
#include<stdlib.h>
#include<struct.h>
#include<functions.h>
void user_menu()
{
	
	int ch;
	while(1)
	{
		printf("\n1.Add new Contact\n2.Display all contacts\n3.Back to main menu\n");
		printf("\nEnter your choice:-");
	        scanf("%d",&ch);
		switch(ch)
		{
			case 1:add_new_contact();
		       	       break;
			case 2:display_contact_options();
			       break;
			case 3:options();
		}
	}
}	
