#include<stdio.h>
#include<stdlib.h>
#include<functions.h>
#include<macros.h>

void options()
{
	
	int ch;
	while(1)
	{
		clear();
		int result,result2,result3;
		printf("\n\n1: Admin login");
		printf("\n\n2: User registration");
		printf("\n\n3: User Login");
		printf("\n\n4: Exit Application");
	    printf("\n\nPlease enter your option: ");
		scanf("%d",&ch);
			
			
		switch(ch)
		{
			case 1: result = admin();   //**********CALLING ADMIN LOGIN FUNCTION***********
			    	if(result == 1)
				       admin_menu();    //***********CALLING ADMIN MENU FUNCTION*********** 
			       else
				       printf("\nPlease Provide valid credentials !!");
			       break;
			
			case 2: result = user_reg();    //***************CALLING USER REGISTRATION FUNCTION*************    
				if(result == 1)
				{
					printf("\n\n\nPlease reset the password ");
					result2 = pass_reset();    //***********CALLING pASSWORD RESET FUNCTION**************
					if(result2 == 1)
						printf("\n\npassword updated successfully");
					else
						printf("\n\nPassword not Updated");
				}
				else
				{
					printf("\n\nPlease Provide valid credentials !!");
				}
			        break;
			
			case 3: result = user_login();     //*************CALLING USER LOGIN FUNCTION*****************
				if(result3 == 1)
					user_menu();
				else
					printf("\n\nPlease Provide valid credentials !!");
				break;
			
			case 4:exit(0);
			
			default:
					printf("\n\nPlease give valid option\n");
					
		}
	}
}


