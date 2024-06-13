int n1=0;
void shape1(int nn)
{
    int i,j;
    if(n1==40)
       {
          n1=0;
        n1=8+n1;
       }
        else
        {
            n1=n1+8;
        }
    for(i=0;i<4;i++)
    {
         gotoxy(n1,i+9);
        for(j=0;j<4;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}
void shape(int n)
{
    int i,j;
    for(i=0;i<4;i++)
    {
         gotoxy(6*n,i);
        for(j=0;j<4;j++)
        {
            printf("*");
        }
        printf("\n");
    }


}
void Identify_Color()
{


            green();
            shape(0);

            white();
            shape(1);

              purple();
            shape(2);

            black();
            shape(3);

            red();
            shape(4);
            printf("1     2     3     4     5\n");

window();



        //textcolor("%d",n);
       // shape(1);

menu();
    }



/*void window(){


}*/


