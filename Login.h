//struct Password
//{
///    char pass[30];
///};

void login()
{
   /*FILE *file ;
int i=0;
char pass[10]="1234";
char ch;
char pwd[10];

file = fopen("test.txt","w");
if(file==NULL)
    printf("NULL");
else
{
    fputs(pass,file);
    fclose(file);
}
green();
printf("\t\t\t\t\tEnter the password : ");
while((ch=_getch())!=13)
{
    pwd[i]=ch;
    i++;
    printf("*");
}
pwd[i]='\0';
int j;
if(strcmp(pwd,pass)==0)
    {
        printf("\n\t\t\t\t\tLogin Successfully\n");
        for( j=1;j<=80;j++)
        {
            white();
            printf("|");
        }

        for(j=0;j<80;j++)
        {

            //delay(100);
               red();
            gotoxy(j,2);
           Sleep(100);
            printf("|");

        }
        printf("\n\t\t\t\t\tLoading Completed");
        Sleep(600);
        system("cls");

    }
    else
    {
        green();
        printf("\n\t\t\t\t\tWrong Password\n");
        Sleep(600);
        system("cls");
        //gotoxy(12,0);
        login();
    }
//printf("Your password is %s",pwd);*/
            green();
        printf("\t\t\t\tLoading\n");
        for( j=1;j<=80;j++)
        {
            white();
            printf("|");
        }

        for(j=0;j<80;j++)
        {

            //delay(100);
               red();
            gotoxy(j,1);
           Sleep(30);
            printf("|");

        }
        printf("\n\t\t\t\tLoading Completed");
        Sleep(600);
        system("cls");
}
