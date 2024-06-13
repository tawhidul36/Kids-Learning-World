COORD coord = {0,0}; ///set the cordinate to 0, 0 (top-left corner of window);
void gotoxy(int x, int y){
    coord.X = x; coord.Y = y; /// X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

int i,j,n=4,m;
void square(int x,int y)
{
 red();
    n=4;
    int m=7;
    for(i=0;i<n;i++)
    {
          gotoxy(x,i+y);
        for(j=0;j<m;j++)
        {
            if(i==n-1 || j==0 || i==0 || j==m-1)
            printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}

void rectangle(int x,int y)
{
      m=10;
      n=4;
    green();
   //   printf("Ayoto\n\n\n");
     for(i=0;i<n;i++)
    {
        gotoxy(x,i+y);
        for(j=0;j<m;j++)
        {
            if(i==n-1 || j==0+9 || i==0 || j==0)
            printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
void triangle(int x,int y)
{
    n=4;
     white();
         for(i=0;i<n;i++)
    {
        gotoxy(x,i+y);
        if(i==0)
        printf("   *\n");
        else if(i==1)
         printf("  * *\n");
        else if(i==2)
         printf(" *   *\n");
         else if(i==3)
         printf("*******\n");

    }
}
void parallelogram(int x,int y)
{
    purple();
    for(i=0;i<n;i++)
 {
        gotoxy(x,i+y);
         if(i==0 )
            printf("   **********");
         else if(i==1 )
            printf("  *        *");
         else if(i==2)
         printf(" *        *");
         else if(i==3)
         printf("**********\n");
     printf("\n");
 }
}
void rhombus(int x,int y)
{
    white();

 for(i=0;i<7;i++)
 {
gotoxy(x,i+y);
         if(i==0)
            printf("   *");
         else if(i==1)
            printf("  * *");
         else if(i==2)
         printf(" *   *");
           else if(i==3)
         printf("*     *");
          else if(i==4)
         printf(" *   *");
          else if(i==5)
            printf("  * *");
            else if(i==6)
            printf("   *  ");

printf("\n");

 }
}
void linear_line(int x,int y)
{
    red();
// printf("Linear Line\n\n");
gotoxy(x,3+y);
printf("**********");
gotoxy(0,15);
}
void trapezoid(int x,int y)
{
    n=5;
green();
for(i=0;i<n;i++){
gotoxy(x,i+y);
       if(i==0)printf("    ****\n");
       else if(i==1)printf("   *    *\n");
       else if(i==2)printf("  *      *\n");
       else if(i==3)printf(" *        *\n");
       else if(i==4)printf("************\n\n\n");
}
}

void window1(){
          int c=0;
 white();
    for(i=0;i<20;i++)
    { gotoxy(0,8+i);
        for(j=0;j<110;j++)
        {
            if(i==0 || i==19 || j==0 || j==109)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
 gotoxy(2,12);
    printf("1.Square\t2.Triangle\t3.Linear_Line\t4.Rectangle\t  5.Trapezoid\t6.Parallelogram  7.Rhombus\t");

}
void transfer()
{
    int ch;
    int count=0;
     window1();
     gotoxy(0,30);
     int x=3,y=16;
     int k;
     for(k=1;k<=7;k++){
            gotoxy(0,30);
     printf("Press any key(1-7) to move the shape in right place: ");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1:{
             square(x,y);
                for(i=0;i<n;i++)
    {
          gotoxy(0,i);
        for(j=0;j<m;j++)
        {
             printf(" ");
        }
        printf("\n");
    }
                break;
                }
         case 2:{rectangle(x,y);
          m=10;
            n=4;
   //   printf("Ayoto\n\n\n");
     for(i=0;i<n;i++)
    {
        gotoxy(10,i);
        for(j=0;j<m;j++)
        {
             printf(" ");
        }
        printf("\n");
    }
                break;}
         case 3:{triangle(x,y);
         n=4;
     white();
         for(i=0;i<n;i++)
    {
        gotoxy(23,i);
         if(i==0)
        printf("     \n");
        else if(i==1)
         printf("      \n");
        else if(i==2)
         printf("       \n");
         else if(i==3)
         printf("        \n");


    }

                break;}
         case 4:{parallelogram(x,y);
            n=4;
             for(i=0;i<n;i++)
 {
        gotoxy(33,i);
         if(i==0 )
            printf("             ");
         else if(i==1 )
            printf("            ");
         else if(i==2)
         printf("           ");
         else
         printf("          \n");

 }
                break;}
         case 5:{rhombus(x,y);
                for(i=0;i<7;i++)
 {
gotoxy(48,i);
         if(i==0)
            printf("    ");
         else if(i==1)
            printf("     ");
         else if(i==2)
         printf("      ");
           else if(i==3)
         printf("       ");
          else if(i==4)
         printf("      ");
          else if(i==5)
            printf("     ");
            else if(i==6)
            printf("      ");

printf("\n");

 }
                break;}
         case 6:{linear_line(x,y);
         gotoxy(58,3);
printf("          ");
                break;}
         case 7:{trapezoid(x,y);
             n=5;
green();
for(i=0;i<n;i++){
gotoxy(70,i);
       if(i==0)printf("        \n");
       else if(i==1)printf("         \n");
       else if(i==2)printf("          \n");
       else if(i==3)printf("           \n");
       else if(i==4)printf("            \n\n\n");
}
                break;}
         default:{main();
             break;}

     }

     if(k==1 && ch==1)
     {
         count++;
         gotoxy(7,23);
         printf("R");
     }
     else if(k==1 && ch!=1)
     {
         gotoxy(7,23);
         printf("W");
     }
      if(k==2 && ch==3)
     {
         count++;
         gotoxy(22,23);
         printf("R");
     }
     else if(k==2 && ch!=3)
     {
         gotoxy(22,23);
         printf("W");
     }
       if(k==3 && ch==6)
     {
         count++;
         gotoxy(37,23);
         printf("R");
     }
     else if(k==3 && ch!=6)
     {
         gotoxy(37,23);
         printf("W");
     }
       if(k==4 && ch==2)
     {
         count++;
         gotoxy(52,23);
         printf("R");
     }
     else if(k==4 && ch!=2)
     {
         gotoxy(52,23);
         printf("W");
     }
       if(k==5 && ch==7)
     {
         count++;
         gotoxy(67,23);
         printf("R");
     }
     else if(k==5 && ch!=7)
     {
         gotoxy(67,23);
         printf("W");
     }
       if(k==6 && ch==4)
     {
         count++;
         gotoxy(82,23);
         printf("R");
     }
     else if(k==6 && ch!=4)
     {
         gotoxy(82,23);
         printf("W");
     }
       if(k==7 && ch==5)
     {
         count++;
         gotoxy(97,23);
         printf("R");
     }
     else if(k==7 && ch!=5)
     {
         gotoxy(97,23);
         printf("W");
     }
     x+=15;
     }
     gotoxy(5,25);
printf("The correct answer is : %d",count);
gotoxy(0,32);
char ss[15];
printf("Enter Your Name :");
scanf("%s",&ss);
 FILE *file ;


file = fopen("testing2.txt","a");
if(file==NULL)
    printf("File does not exist");
else
{
    //printf("File is opened");
    fprintf(file,"Name : %s and Your score is : %d\n",ss,count);
    fclose(file);
}

}
void Identify_Shape(){


    square(0,0);
      rectangle(10,0);
      triangle(23,0);
      parallelogram(33,0);
      rhombus(48,0);
      linear_line(58,0);
      trapezoid(70,0);
      printf("1\t     2 \t \t 3 \t     4 \t         5  \t       6  \t        7\n");
     // window();
      transfer();

      gotoxy(0,35);
       menu();
    //menu();
}

