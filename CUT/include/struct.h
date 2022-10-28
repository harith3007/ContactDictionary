#pragma once
#include<macros.h>
struct users
{
	char uname[MAX];
	char pword[MAX];
	struct users *link;
};

struct personal
{
	int contactid;
	char firstname[MAX];
	char lastname[MAX];
	char mobileno1[MAX];
	char mobileno2[MAX];
	char emailid1[MAX];
	char emailid2[MAX];
	char address[MAX];
	char whatsapp_mb[MAX];
	//int birthdate;
	char emergencycontact[MAX];
	struct personal *link;
};

struct business
{
	int contactid;
	char firstname[MAX];
	char lastname[MAX];
	char mobileno1[MAX];
	char mobileno2[MAX];
	char emailid1[MAX];
	char emailid2[MAX];
	char company[MAX];
	char designation[MAX];
	//char companywebsite[MAX];
	struct business *link;
};

