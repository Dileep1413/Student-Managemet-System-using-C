#include<stdio.h>
#include<stdlib.h>
struct stud
{
	char fn[30],ln[30],d[30];
	int rn,p;
};
int main()
{
	char ch,a;
	int op,rollno,k;
	do{
			printf("$$$$$$$========Welcome to Student Managment System========$$$$$$$\n\n" );
	printf("1.IT\n2.EEE\n3.ECE\n4.CSE\n5.Exit\n");
	printf("\nEnter a number:");
	scanf("%d",&k);
	switch(k)
	{
		case 1:
	do{
	printf("\n1.add student\n2.student record\n3.search student\n4.update\n5.deletion\n");
	printf("\nchoise a number:");
	scanf("%d",&op);
	switch(op)
	{
	case 1:
	FILE *f;
	char ch;
	struct stud s1;	
	printf("\n=======Add Student Information=======\n\n");
	f=fopen("abc1.txt","a");
	printf("first name:");
	scanf("%s",&s1.fn);
	printf("last name:");
	scanf("%s",&s1.ln);
	printf("depatment:");
	scanf("%s",&s1.d);
	printf("roll no:");
	scanf("%d",&s1.rn);
	printf("percentage:");
	scanf("%d",&s1.p);
	if (f==NULL)

{
	printf("file not created");
	}	else
	{
	printf("added successfully\n");
}
	fprintf(f,"\n%s %s %s %d %d\n",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
	fclose(f);
	break;	
case 2:
	f=fopen("abc1.txt","r");
	if(f==NULL)
	printf("file not created");
	else
	{
	printf("\n========Student Information========\n\n");
	}
	while((ch=fgetc(f))!=EOF)
	{
		fseek(f,-1,SEEK_CUR);
		fscanf(f,"%s%s%s%d%d",s1.fn,s1.ln,s1.d,&s1.rn,&s1.p);
	printf("\nfirst name:%s\nlast name:%s\n",s1.fn,s1.ln);
 printf("department:%s\nroll no:%d\npercentage:%d\n",s1.d,s1.rn,s1.p);
 printf("------------------------------------------------------------");
}
fclose(f);
break;
case 3:
	int rollno;
	f=fopen("abc1.txt","r");
	printf("\n======Search Student Record=======\n\n");
	printf("enter student roll number:");
	scanf("%d",&rollno);
	while((ch=fgetc(f))!=EOF)
	{
	fseek(f,-1,SEEK_CUR);
	fscanf(f,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,&s1.rn,&s1.p);
if(rollno==s1.rn)
{
printf("first name:%s\nlast name:%s\ndepatment:%s\nroll no:%d\npercentage:%d\n",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
printf("------------------------------------------------------------");
break;
}
else
{
	printf("no data found");
	break;

}
}
fclose(f);
break;
case 4:
	FILE *fp;
	printf("\n======Update Student Record======\n");
	printf("enter the roll no:");
	scanf("%d",&rollno);
	f=fopen("abc1.txt","r");
	fp=fopen("it.txt","w");
	while((ch=fgetc(f))!=EOF)
	{
		fseek(f,-1,SEEK_CUR);
		fscanf(f,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,&s1.rn,&s1.p);
		if(s1.rn!=rollno)
		{
			fprintf(fp,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
        }
    }
    fclose(f);
    fclose(fp);
	    f=fopen("abc1.txt","w");
    printf("first name:");
	scanf("%s",&s1.fn);
	printf("last name:");
	scanf("%s",&s1.ln);
	printf("depatment:");
	scanf("%s",&s1.d);
	printf("roll no:");
	scanf("%d",&s1.rn);
	printf("percentage:");
	scanf("%d",&s1.p);
        fclose(f);
       f=fopen("abc1.txt","a");
       fp=fopen("it.txt","r");
          while((ch=fgetc(fp))!=EOF)
          {
          	fputc(ch,f);
		  }
	fprintf(f,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
	printf("\nupdated successfully\n");
	fclose(f);
	break;
	case 5:
		FILE *p;
		printf("\n=======Delete Student Record=======\n\n");
		printf("enter roll no:");
		scanf("%d",&rollno);
		f=fopen("abc1.txt","r");
		p=fopen("temp.txt","w");
		while((ch=fgetc(f))!=EOF)
		{
			fseek(f,-1,SEEK_CUR);
			fscanf(f,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,&s1.rn,&s1.p);
			if(s1.rn!=rollno)
		{
        	fprintf(p,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
        }
    }
    fclose(f);
    fclose(p);
		f=fopen("abc1.txt","w");
		p=fopen("temp.txt","r");
		while((ch=fgetc(p))!=EOF)
		{
			fputc(ch,f);
		}
		printf("\ndeleted successfully\n");
		fclose(f);
		break;
			default:
				printf("\nEnter a valid number\n");
}
printf("\nAre you want to continue?(y):\t");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
break;
case 2:
	do{
	printf("\n1.add student\n2.student record\n3.search student\n4.update\n5.deletion\n");
	printf("\nchoise a number:");
	scanf("%d",&op);
	switch(op)
	{
	case 1:
	FILE *f;
	char ch;
	struct stud s1;	
	printf("\n=======Add Student Information=======\n\n");
	f=fopen("eee.txt","a");
	printf("first name:");
	scanf("%s",&s1.fn);
	printf("last name:");
	scanf("%s",&s1.ln);
	printf("depatment:");
	scanf("%s",&s1.d);
	printf("roll no:");
	scanf("%d",&s1.rn);
	printf("percentage:");
	scanf("%d",&s1.p);
	if (f==NULL)

{
	printf("file not created");
	}	else
	{
	printf("added successfully\n");
}
	fprintf(f,"\n%s %s %s %d %d\n",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
	fclose(f);
	break;	
case 2:
	f=fopen("eee.txt","r");
	if(f==NULL)
	printf("file not created");
	else
	{
	printf("\n========Student Information========\n\n");
	}
	while((ch=fgetc(f))!=EOF)
	{
		fseek(f,-1,SEEK_CUR);
		fscanf(f,"%s%s%s%d%d",s1.fn,s1.ln,s1.d,&s1.rn,&s1.p);
	printf("\nfirst name:%s\nlast name:%s\n",s1.fn,s1.ln);
 printf("department:%s\nroll no:%d\npercentage:%d\n",s1.d,s1.rn,s1.p);
 printf("------------------------------------------------------------");
}
fclose(f);
break;
case 3:
	int rollno;
	f=fopen("eee.txt","r");
	printf("\n======Search Student Record=======\n\n");
	printf("enter student roll number:");
	scanf("%d",&rollno);
	while((ch=fgetc(f))!=EOF)
	{
	fseek(f,-1,SEEK_CUR);
	fscanf(f,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,&s1.rn,&s1.p);
if(rollno==s1.rn)
{
printf("first name:%s\nlast name:%s\ndepatment:%s\nroll no:%d\npercentage:%d\n",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
printf("------------------------------------------------------------");
break;
}
else {
	printf("\nNo Data Found\n");
	break;
}
}
fclose(f);	
break;
case 4:
	FILE *fp;
	printf("\n======Update Student Record======\n");
	printf("enter the roll no:");
	scanf("%d",&rollno);
	f=fopen("eee.txt","r");
	fp=fopen("eee1.txt","w");
	while((ch=fgetc(f))!=EOF)
	{
		fseek(f,-1,SEEK_CUR);
		fscanf(f,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,&s1.rn,&s1.p);
		if(s1.rn!=rollno)
		{
			fprintf(fp,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
        }
    }
    fclose(f);
    fclose(fp);
	    f=fopen("eee.txt","w");
    printf("first name:");
	scanf("%s",&s1.fn);
	printf("last name:");
	scanf("%s",&s1.ln);
	printf("depatment:");
	scanf("%s",&s1.d);
	printf("roll no:");
	scanf("%d",&s1.rn);
	printf("percentage:");
	scanf("%d",&s1.p);
        fclose(f);
       f=fopen("eee.txt","a");
       fp=fopen("eee1.txt","r");
          while((ch=fgetc(fp))!=EOF)
          {
          	fputc(ch,f);
		  }
	fprintf(f,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
	printf("\nupdated successfully\n");
	fclose(f);
	break;
	case 5:
		FILE *p;
		printf("\n=======Delete Student Record=======\n\n");
		printf("enter roll no:");
		scanf("%d",&rollno);
		f=fopen("eee.txt","r");
		p=fopen("eee2.txt","w");
		while((ch=fgetc(f))!=EOF)
		{
			fseek(f,-1,SEEK_CUR);
			fscanf(f,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,&s1.rn,&s1.p);
			if(s1.rn!=rollno)
		{
        	fprintf(p,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
        }
    }
    fclose(f);
    fclose(p);
		f=fopen("eee.txt","w");
		p=fopen("eee2.txt","r");
		while((ch=fgetc(p))!=EOF)
		{
			fputc(ch,f);
		}
		printf("\ndeleted successfully\n");
		fclose(f);
		break;
			default:
				printf("\nEnter a valid number\n");
}
printf("\nAre you want to continue?(y):\t");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
break;
case 3:
		do{
	printf("\n1.add student\n2.student record\n3.search student\n4.update\n5.deletion\n");
	printf("\nchoise a number:");
	scanf("%d",&op);
	switch(op)
	{
	case 1:
	FILE *f;
	char ch;
	struct stud s1;	
	printf("\n=======Add Student Information=======\n\n");
	f=fopen("ece.txt","a");
	printf("first name:");
	scanf("%s",&s1.fn);
	printf("last name:");
	scanf("%s",&s1.ln);
	printf("depatment:");
	scanf("%s",&s1.d);
	printf("roll no:");
	scanf("%d",&s1.rn);
	printf("percentage:");
	scanf("%d",&s1.p);
	if (f==NULL)

{
	printf("file not created");
	}	else
	{
	printf("added successfully\n");
}
	fprintf(f,"\n%s %s %s %d %d\n",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
	fclose(f);
	break;	
case 2:
	f=fopen("ece.txt","r");
	if(f==NULL)
	printf("file not created");
	else
	{
	printf("\n========Student Information========\n\n");
	}
	while((ch=fgetc(f))!=EOF)
	{
		fseek(f,-1,SEEK_CUR);
		fscanf(f,"%s%s%s%d%d",s1.fn,s1.ln,s1.d,&s1.rn,&s1.p);
	printf("\nfirst name:%s\nlast name:%s\n",s1.fn,s1.ln);
 printf("department:%s\nroll no:%d\npercentage:%d\n",s1.d,s1.rn,s1.p);
 printf("------------------------------------------------------------");
}
fclose(f);
break;
case 3:
	int rollno;
	f=fopen("ece.txt","r");
	printf("\n======Search Student Record=======\n\n");
	printf("enter student roll number:");
	scanf("%d",&rollno);
	while((ch=fgetc(f))!=EOF)
	{
	fseek(f,-1,SEEK_CUR);
	fscanf(f,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,&s1.rn,&s1.p);
if(rollno==s1.rn)
{
printf("first name:%s\nlast name:%s\ndepatment:%s\nroll no:%d\npercentage:%d\n",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
printf("------------------------------------------------------------");
break;
}
else {
	printf("\nNo Data Found\n");
	break;
}
}
fclose(f);	
break;
case 4:
	FILE *fp;
	printf("\n======Update Student Record======\n");
	printf("enter the roll no:");
	scanf("%d",&rollno);
	f=fopen("ece.txt","r");
	fp=fopen("ece1.txt","w");
	while((ch=fgetc(f))!=EOF)
	{
		fseek(f,-1,SEEK_CUR);
		fscanf(f,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,&s1.rn,&s1.p);
		if(s1.rn!=rollno)
		{
			fprintf(fp,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
        }
    }
    fclose(f);
    fclose(fp);
	    f=fopen("ece.txt","w");
    printf("first name:");
	scanf("%s",&s1.fn);
	printf("last name:");
	scanf("%s",&s1.ln);
	printf("depatment:");
	scanf("%s",&s1.d);
	printf("roll no:");
	scanf("%d",&s1.rn);
	printf("percentage:");
	scanf("%d",&s1.p);
        fclose(f);
       f=fopen("ece.txt","a");
       fp=fopen("ece1.txt","r");
          while((ch=fgetc(fp))!=EOF)
          {
          	fputc(ch,f);
		  }
	fprintf(f,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
	printf("\nupdated successfully\n");
	fclose(f);
	break;
	case 5:
		FILE *p;
		printf("\n=======Delete Student Record=======\n\n");
		printf("enter roll no:");
		scanf("%d",&rollno);
		f=fopen("ece.txt","r");
		p=fopen("ece2.txt","w");
		while((ch=fgetc(f))!=EOF)
		{
			fseek(f,-1,SEEK_CUR);
			fscanf(f,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,&s1.rn,&s1.p);
			if(s1.rn!=rollno)
		{
        	fprintf(p,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
        }
    }
    fclose(f);
    fclose(p);
		f=fopen("ece.txt","w");
		p=fopen("ece2.txt","r");
		while((ch=fgetc(p))!=EOF)
		{
			fputc(ch,f);
		}
		printf("\ndeleted successfully\n");
		fclose(f);
		break;
			default:
				printf("\nEnter a valid number\n");
}
printf("\nAre you want to continue?(y):\t");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
break;
case 4:
		do{
	printf("\n1.add student\n2.student record\n3.search student\n4.update\n5.deletion\n");
	printf("\nchoise a number:");
	scanf("%d",&op);
	switch(op)
	{
	case 1:
	FILE *f;
	char ch;
	struct stud s1;	
	printf("\n=======Add Student Information=======\n\n");
	f=fopen("cse.txt","a");
	printf("first name:");
	scanf("%s",&s1.fn);
	printf("last name:");
	scanf("%s",&s1.ln);
	printf("depatment:");
	scanf("%s",&s1.d);
	printf("roll no:");
	scanf("%d",&s1.rn);
	printf("percentage:");
	scanf("%d",&s1.p);
	if (f==NULL)

{
	printf("file not created");
	}	else
	{
	printf("added successfully\n");
}
	fprintf(f,"\n%s %s %s %d %d\n",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
	fclose(f);
	break;	
case 2:
	f=fopen("cse.txt","r");
	if(f==NULL)
	printf("file not created");
	else
	{
	printf("\n========Student Information========\n\n");
	}
	while((ch=fgetc(f))!=EOF)
	{
		fseek(f,-1,SEEK_CUR);
		fscanf(f,"%s%s%s%d%d",s1.fn,s1.ln,s1.d,&s1.rn,&s1.p);
	printf("\nfirst name:%s\nlast name:%s\n",s1.fn,s1.ln);
 printf("department:%s\nroll no:%d\npercentage:%d\n",s1.d,s1.rn,s1.p);
 printf("------------------------------------------------------------");
}
fclose(f);
break;
case 3:
	int rollno;
	f=fopen("cse.txt","r");
	printf("\n======Search Student Record=======\n\n");
	printf("enter student roll number:");
	scanf("%d",&rollno);
	while((ch=fgetc(f))!=EOF)
	{
	fseek(f,-1,SEEK_CUR);
	fscanf(f,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,&s1.rn,&s1.p);
if(rollno==s1.rn)
{
printf("first name:%s\nlast name:%s\ndepatment:%s\nroll no:%d\npercentage:%d\n",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
printf("------------------------------------------------------------");
break;
}
else {
	printf("\nNo Data Found\n");
	break;
}
}
fclose(f);	
break;
case 4:
	FILE *fp;
	printf("\n======Update Student Record======\n");
	printf("enter the roll no:");
	scanf("%d",&rollno);
	f=fopen("cse.txt","r");
	fp=fopen("cse1.txt","w");
	while((ch=fgetc(f))!=EOF)
	{
		fseek(f,-1,SEEK_CUR);
		fscanf(f,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,&s1.rn,&s1.p);
		if(s1.rn!=rollno)
		{
			fprintf(fp,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
        }
    }
    fclose(f);
    fclose(fp);
	    f=fopen("cse.txt","w");
    printf("first name:");
	scanf("%s",&s1.fn);
	printf("last name:");
	scanf("%s",&s1.ln);
	printf("depatment:");
	scanf("%s",&s1.d);
	printf("roll no:");
	scanf("%d",&s1.rn);
	printf("percentage:");
	scanf("%d",&s1.p);
        fclose(f);
       f=fopen("cse.txt","a");
       fp=fopen("cse1.txt","r");
          while((ch=fgetc(fp))!=EOF)
          {
          	fputc(ch,f);
		  }
	fprintf(f,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
	printf("\nupdated successfully\n");
	fclose(f);
	break;
	case 5:
		FILE *p;
		printf("\n=======Delete Student Record=======\n\n");
		printf("enter roll no:");
		scanf("%d",&rollno);
		f=fopen("cse.txt","r");
		p=fopen("cse2.txt","w");
		while((ch=fgetc(f))!=EOF)
		{
			fseek(f,-1,SEEK_CUR);
			fscanf(f,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,&s1.rn,&s1.p);
			if(s1.rn!=rollno)
		{
        	fprintf(p,"%s %s %s %d %d",s1.fn,s1.ln,s1.d,s1.rn,s1.p);
        }
    }
    fclose(f);
    fclose(p);
		f=fopen("cse.txt","w");
		p=fopen("cse2.txt","r");
		while((ch=fgetc(p))!=EOF)
		{
			fputc(ch,f);
		}
		printf("\ndeleted successfully\n");
		fclose(f);
		break;
			default:
				printf("\nEnter a valid number\n");
}
printf("\nAre you want to continue?(y):\t");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
break;
case 5:
		printf("\nThank you, For using this Software.\n");
			exit(0);
			default:
				printf("\nEnter a valid number\n");

}
printf("\nAre you interested to run again?(s):\t");
fflush(stdin);
scanf("%c",&a);
}while(a=='s'||a=='S');
}
