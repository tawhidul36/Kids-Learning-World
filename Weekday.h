void Weekday()
{
    int M;
    white();
    printf("\t\t   Press 1 for Name of the Days\n");
    red();
    printf("\t\t   Press 2 for Name of the Month\n\n");
    green();
    printf("\t\t   Press any key : ");
    scanf("%d",&M);
    if(M==1){
    red();
    printf("\n\n\t\t   The Days of the Week\n");
   green();

   // printf("\t\t\t1. Saturday\n\t\t2. Sunday\n\t\t\t3. Monday\n\t\t4. Tuesday\n\t\t\t5. Wednesday\n\t\t6. Thursday\n\t\t\t7. Friday\n");

    //char phrase[100];

     //char phrase[100]=" A for Apple B for Ball C for Cat D for Dog\n";
        printf("\t\t\t1. Saturday\n\n");
      char p1[100]="Saturday";
      esp(p1);
      red();
       printf("\t\t2. Sunday\n\n");
     char p2[100]="Sunday";
     esp(p2);
     black();
      printf("\t\t\t3. Monday\n\n");
      char p3[100]="Monday";
       esp(p3);
      purple();
       printf("\t\t4. Tuesday\n\n");
     char p4[100]="Tuesday";
     esp(p4);
     white();
      printf("\t\t\t5. Wednesday\n\n");
      char p5[100]="Wednesday";
       esp(p5);
      green();
       printf("\t\t6. Thursday\n\n");
     char p6[100]="Thursday";
      esp(p6);
      red();
      printf("\t\t\t7. Friday\n\n");
      char p7[100]="Friday";
        esp(p7);

     //char p2[100]="B for Ball";
     //printf("%s\n",p1);


     /* esp(p1);
     esp(p2);
      esp(p3);
     esp(p4);
      esp(p5);
     esp(p6);
      esp(p7);*/


    //printf("Hello world!\n");
    /*char phras[100]="Sunday";
    char charComman[100];
    strcpy(charComman,"espeak \"");
    strcat(charComman,phras);
    strcat(charComman,"\"");
    system(charComman);*/


    menu();
    }
    else if(M==2)
    {
        red();
    printf("\t\t   The Name of the Month\n");
   green();

   // printf("\t\t\t1. Saturday\n\t\t2. Sunday\n\t\t\t3. Monday\n\t\t4. Tuesday\n\t\t\t5. Wednesday\n\t\t6. Thursday\n\t\t\t7. Friday\n");

    //char phrase[100];

     //char phrase[100]=" A for Apple B for Ball C for Cat D for Dog\n";
        printf("\t\t\t 1. January\n\n");
      char p1[100]="January";
      esp(p1);
      red();
       printf("\t\t 2. February\n\n");
     char p2[100]="February";
     esp(p2);
     black();
      printf("\t\t\t 3. March\n\n");
      char p3[100]="March";
       esp(p3);
      purple();
       printf("\t\t 4. April\n\n");
     char p4[100]="April";
     esp(p4);
     white();
      printf("\t\t\t 5. May\n\n");
      char p5[100]="May";
       esp(p5);
      green();
       printf("\t\t 6. June\n\n");
     char p6[100]="June";
      esp(p6);
      red();
      printf("\t\t\t 7. July\n\n");
      char p7[100]="July";
        esp(p7);
        black();
         printf("\t\t 8. August\n\n");
      char p8[100]="August";
      esp(p8);
      purple();
       printf("\t\t\t 9. September\n\n");
     char p9[100]="September";
     esp(p9);
     white();
      printf("\t\t10. October\n\n");
      char p10[100]="October";
       esp(p10);
      green();
       printf("\t\t\t11. November\n\n");
     char p11[100]="November";
     esp(p11);
     red();
      printf("\t\t12. December\n\n");
      char p12[100]="December";
       esp(p12);
        menu();
    }
    else
        menu();
}

