#include<stdio.h>
#include<macros.h>
#include<functions.h>
#include<stdlib.h>
#include<struct.h>
#include<string.h>
void delete_personal( )
{
    FILE *fr;
    fr = fopen ("../data/perosnal.txt","r");
    FILE *fw;
    fw = fopen("../data/temp.txt","w");

    char name[30];
    printf("\nEnter the first name of the record to be deleted: ");
    scanf("%s",name);

    int cid;
    char fname[MAX];
    char lname[MAX];
    char mob1[MAX];
    char mob2[MAX];
    char e1[MAX];
    char e2[MAX];
    char addr[MAX];
    char wno[MAX];
    char ecno[MAX];
    fscanf(fr,"%d%s%s%s%s%s%s%s%s%s",&cid,fname,lname,mob1,mob2,e1,e2,addr,wno,ecno);
    while(!feof(fr))
    {
        if(strcmp(fname,name)!=0)
        {
		    fprintf(fw,"%d %s %s %s %s %s %s %s %s %s\n",cid,fname,lname,mob1,mob2,e1,e2,addr,wno,ecno);
        }
	    fscanf(fr,"%d%s%s%s%s%s%s%s%s%s",&cid,fname,lname,mob1,mob2,e1,e2,addr,wno,ecno);
    }
    fclose(fw);
    fclose(fr);
    remove("../data/personal.txt");
    rename("../data/temp.txt","../data/personal.txt");
    
}
