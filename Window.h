void window()
{
    int i,j,c=0;
 white();

    for(i=0;i<15;i++)
    { gotoxy(0,5+i);
        for(j=0;j<60;j++)
        {
            if(i==0 || i==14 || j==0 || j==59)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
 gotoxy(5,7);
    //printf("  1.Red  2.White 3.Black  4.Purple  5.Green");
    red();
    printf("  1.Red");
    white();printf("  2.White");
    black();printf("  3.Black");
    purple();printf(" 4.Purple");
    green();printf(" 5.Green");

            for(i=0;i<5;i++)
            {
                gotoxy(0,21);
                white();
                printf("Press any value(1-5) to match the color : ");
            int n;
            scanf("%d",&n);


             if(n==1)
            {
                 green();
                shape1(1);
                 int i,j;
    for(i=0;i<4;i++)
    {
         gotoxy(0,i);
        for(j=0;j<4;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
            }
            else  if(n==2)
            {
                 white();
                shape1(2);
                 int i,j;
    for(i=0;i<4;i++)
    {
         gotoxy(6,i);
        for(j=0;j<4;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
            }
              else if(n==3)
            {
                purple();
                shape1(3);
                 int i,j;
    for(i=0;i<4;i++)
    {
         gotoxy(12,i);
        for(j=0;j<4;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
            }
             else if(n==4)
            {
                 black();
                shape1(4);
                 int i,j;
    for(i=0;i<4;i++)
    {
         gotoxy(18,i);
        for(j=0;j<4;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
            }
            else if(n==5)
            {
                 red();
                shape1(5);
                 int i,j;
    for(i=0;i<4;i++)
    {
         gotoxy(24,i);
        for(j=0;j<4;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
            }
             if(i==0 && n==5)
            {
                c++;
                gotoxy(9,14);
                printf("R");
            }
            else if(i==0 && n!=5)
            {

                gotoxy(9,14);
                printf("W");
            }
           if(i==1 && n==2)
            {
                c++;

                 gotoxy(17,14);
                printf("R");
            }
            else  if(i==1 && n!=2)
            {

                 gotoxy(17,14);
                printf("W");
            }
            if(i==2 && n==4)
            {
                c++;
                gotoxy(25,14);
                printf("R");
            }
            else   if(i==2 && n!=4)
            {

                gotoxy(25,14);
                printf("W");
            }
        if(i==3 && n==3)
            {
                c++;
                gotoxy(33,14);
                printf("R");

            }

        else if(i==3 && n!=3)
            {

                gotoxy(33,14);
                printf("W");

            }
        if(i==4 && n==1)
            {
                c++;
                gotoxy(42,14);
                printf("R");
            }

      else  if(i==4 && n!=1)
            {

                gotoxy(42,14);
                printf("W");
            }

            }
            gotoxy(2,16);
            white();
            printf("Correct Answer is %d",c);

            gotoxy(0,22);
            char cs[15];
printf("Enter Your Name :");
scanf("%s",&cs);
 FILE *file ;


file = fopen("color.txt","a");
if(file==NULL)
    printf("File does not exist");
else
{
    //printf("File is opened");
    fprintf(file,"Name : %s and Your score is : %d\n",cs,c);
    fclose(file);
}
            gotoxy(0,25);

}
