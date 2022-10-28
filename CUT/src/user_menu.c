#include<stdio.h>
#include<stdlib.h>
#include<struct.h>
#include<functions.h>
void user_menu()
{
	
	int ch;
	while(1)
	{
		printf("\n\n1: Add new Contact\n\n2: Display contacts\n\n3:Back to main menu\n\n4:Exit Application\n");
		printf("\nEnter your choice:-");
	        scanf("%d",&ch);
		switch(ch)
		{
			case 1:add_new_contact();
		       	       break;
			case 2:display_contact_options();
			       break;
			case 3:options();
			       break;
			case 4:exit(0);
		}
	}
}	
