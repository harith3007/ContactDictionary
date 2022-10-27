#include<stdio.h>
#include<macros.h>
#include<functions.h>
#include<stdlib.h>
#include<string.h>
void delete_business( )
{
    FILE *fr;
    fr =  fopen ("../data/business.txt","r");
    FILE *fw;
    fw = fopen("../data/temp.txt","w");

 

    char name[30];
    printf("Enter the first name of the record to be deleted ");
    scanf("%s",name);

 

    int cid;
    char fname[MAX],lname[MAX],mob1[MAX],mob2[MAX],e1[MAX],e2[MAX],com[MAX],desi[MAX];
    fscanf(fr,"%d%s%s%s%s%s%s%s%s",&cid,fname,lname,mob1,mob2,e1,e2,com,desi);
    while(!feof(fr))
    {
        if(strcmp(fname,name) !=0)
        {
        fprintf(fw,"%d %s %s %s %s %s %s %s %s\n",cid,fname,lname,mob1,mob2,e1,e2,com,desi);
        }
    fscanf(fr,"%d%s%s%s%s%s%s%s%s",&cid,fname,lname,mob1,mob2,e1,e2,com,desi);
    }
    fclose(fw);
    remove("../data/business.txt");
    rename("../data/temp.txt","../data/business.txt");
    fclose(fr);
}
