#include<stdio.h>
#include<stdlib.h>
#include<functions.h>
void options()
{
	int ch;
	while(1)
	{
		clear();
		int result;
		printf("\nPress 1 for Admin login");
		printf("\nPress 2 for User registration");
		printf("\nPress 3 for User Login");
		printf("\nPress 4 for Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: result = admin();
			    	if(result == 1)
				       admin_menu();
			       else
				       printf("\nPlease Provide valid credentials !!");
			       break;
			case 2: result = user_reg();
				if(result == 1)
				{
					printf("\nPlease reset the password ");
					result = pass_reset();
					if(result == 1)
						printf("\npassword updated successfully");
					else
						printf("\nNot Updated");
				}

				else
				{
					printf("\nPlease Provide valid credentials !!");
				}
			        break;
			case 3: result = user_login();
				if(result == 1)
					user_menu();
				else
					printf("\nPlease Provide valid credentials !!");
				break;
			case 4:exit(0);
		}
	}
}


