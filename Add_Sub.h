void shape3(int n)
{
    int i;
     for(i=0;i<n;i++){
            printf("*****  ");

    }
    printf("\n");
    for(i=0;i<n;i++){
            printf("*   *  ");

    }
    printf("\n");
     for(i=0;i<n;i++){
            printf("*   *  ");

    }
    printf("\n");
    for(i=0;i<n;i++){
    printf("*****  ");

    }
    printf("\n");
     for(i=0;i<n;i++){
    printf("  *    ");

    }
    printf("\n");
     for(i=0;i<n;i++){
    printf("  *    ");

    }
    printf("\n");



}

void Add_Sub()
{

green();

 printf("\t\t\t\t\t1.Press 1 for Addition\n\n\t\t\t\t\t\n");
 red();

 printf("\t\t\t\t\t2.Press 2 for Substraction\n\n");
 white();
       printf("\t\t\t\t\tPress any key(1,2) : ");
       int op;
       scanf("%d",&op);
       if(op==1)
       {    red();
           printf("\n\t\t\t\t\tAddition\n");
               int n;
               white();
      printf("The number of ICE-CREAM You have : ");

      scanf("%d",&n);
      printf("\n");
 red();
       shape3(n);


     //srand(time(0));
  //  int m=rand()%5;
 int m;
 white();
      printf("The number of ICE-CREAM Your Friend have : ");

      scanf("%d",&m);
      printf("\n");
red();
       shape3(m);
       green();
        printf("\t\t\t\t\tAfter Addition\n");
        white();
            printf("Total number of ICE-CREAM are %d \n",n+m);
            red();
            shape3(n+m);

       }
       else if(op==2)
       {
           green();
              printf("\n\t\t\t\t\tSubstraction\n");
               int n;
               red();

      printf("The number of ICE-CREAM You have : ");
      scanf("%d",&n);
      printf("\n");
    white();
       shape3(n);

     //srand(time(0));
  //  int m=rand()%5;
 int m;
 green();
      printf("The number of ICE-CREAM Your Friend have : ");
      scanf("%d",&m);
      printf("\n");
white();
       shape3(m);
       red();
       printf("\t\t\t\t\tAfter Substraction\n");
       green();
           printf("Total number of ICE-CREAM are %d \n",n-m);
           white();
            shape3(n-m);
       }




       menu();

}

