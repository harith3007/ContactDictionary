#include<stdio.h>
#include<stdlib.h>
#include<macros.h>
#include<string.h>
#include<functions.h>
#include<ctype.h>
//**********************************validation for name*********************************************

int val_name(char *name)
{
	for(int i=0;i<strlen(name);i++)
	{
		if(isalpha(name[i]))
			continue;
		else
			return 0;
	}
	return 1;
}

//**************************************validation for mobile number**************************************

int val_mobileno(char *mobileno)
{
	int len=strlen(mobileno);
	if(len==10)
	{
		for(int i=0;i<len;i++)
		{
			if(isdigit(mobileno[i]))
				continue;
			else
				return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}


//***************************************validation for emailid***********************************

int val_emailid(char *emailid)
{
	int p1=0,p2=0;
	for(int i=0;i<emailid[i]!=0;i++)
	{
		if(emailid[i]=='@')
		{
			p1=i;
		}
		if(emailid[i]=='.')
		{
			p2=i;
		}
	}
	if(p1>3 && p2-p1>3)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//************************************validation for emergency contact****************************************

int val_emergencycontact(char *emergency)
{
	char a[4]="yes",b[4]="no",c[4]="YES",d[4]="NO",e[4]="Yes",f[4]="No";
	if(strcmp(emergency,"yes")==0 || strcmp(emergency,"no")==0 || strcmp(emergency,"YES")==0 || strcmp(emergency,"NO")==0 || strcmp(emergency,"Yes")==0 || strcmp(emergency,"No")==0)
	{
		return 1;
	}
	return 0;
}

