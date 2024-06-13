void menu()
{


   red();

    printf("\t\t\t--------------------------------------------------------------\n");
    printf("\t\t\t|\t|  |\tPress 1 :\tWord of Alphabet   |  |      |\n");
    printf("\t\t\t|\t|  |\tPress 2 :\tDays and Months    |  |      |\n");
    printf("\t\t\t|\t|  |\tPress 3 :\tColor Identify\t   |  |      |\n");
    printf("\t\t\t|\t|  |\tPress 4 :\tShape Identify\t   |  |      |\n");
    printf("\t\t\t|\t|  |\tPress 5 :\tAdd Substract\t   |  |      |\n");
    //printf("\t\t\tPress 6 :\tWord OF Alphabet\n");*/
    printf("\t\t\t|\t|  |\tPress 7 :\tClear Screen\t   |  |      |\n");

    printf("\t\t\t|\t|  |\tPress 0 :\tExit\t \t   |  |      |\n");
    printf("\t\t\t--------------------------------------------------------------\n");
    printf("\n\n\t\t\t\t\tPress any key : ");

      int ch;
    scanf("%d",&ch);
    printf("\n");
    switch(ch)
    {

        case 1:
            {   system("cls");
                Word_OF_Alphabet();
                break;
            }
        case 2:
            {
                system("cls");
                Weekday();
                break;
            }
        case 3:{system("cls");
                Identify_Color();
                break;}
        case 4:{system("cls");
                Identify_Shape();
                break;}
        case 5:{
            system("cls");
                    Add_Sub();
                    break;
                    }
        case 7: {
                system("cls");
                white();
                 printf("\t\t\t<------------------------------------------------------------>\n");
                 green();
                 printf("\t\t\t\t\t\tWelcome\n\t\t\t\t\t\t  to \n\t\t\t\t\tKids Learning Application\n");
                 white();
                 printf("\t\t\t<------------------------------------------------------------>\n");
                menu();
                break;}
        case 0: exit(1);
                break;
        default:menu();
                break;

    }


}




