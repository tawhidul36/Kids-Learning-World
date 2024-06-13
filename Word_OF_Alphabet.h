void Word_OF_Alphabet()
{

    red();
    printf("\t\t\t\t\tWord of Alphabet(A-Z)\n");
    int i;
    char a1[]="A for Apple";
    char a2[]="B for Ball";
    char a3[]="C for Cat";
    char a4[]="D for Dog";
    char a5[]="E for Egg";
    char a6[]="F for Fan";
     char a7[]="G for Gun";
    char a8[]="H for Horse";
    char a9[]="I for ICE-CREAM";
    char a10[]="J for Jackfruit";
    char a11[]="K for Key";
    char a12[]="L for Lion";
     char a13[]="M for Mango";
    char a14[]="N for Net";
    char a15[]="O for Orange";
    char a16[]="P for Pen";
    char a17[]="Q for Queen";
    char a18[]="R for Rat";
     char a19[]="S for Sun";
    char a20[]="T for Tiger";
    char a21[]="U for Umbrella";
    char a22[]="V for Van";
    char a23[]="W for Water";
    char a24[]="X for X-Ray";
    char a25[]="Y for Yalk";
    char a26[]="Z for Zoo";

    int n;
    white();
    printf("\t\t\t\t\tEnter the number of Character : ");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        char cc[3],dd;
        red();
         printf("Enter your choice(A..Z) :");
          scanf("%s",&cc);
        if(i%5==0)
            red();
        else if(i%5==1)
            green();
        else if(i%5==2)
            white();
        else if(i%5==3)
           purple();
        else if(i%5==4)
             black();



    /*if(cc[0]=='A')
    {
        printf("%s\n",a1);
                  esp(a1);


    }
    else if(cc[0]=='B')
    {
         printf("%s\n",a2);
                  esp(a2);
    }
    */
        printf("\t\t\t\t\t\t");
    switch(cc[0])
    {
        case 'A':printf("%s\n",a1);
                  esp(a1);
                  break;
        case 'B':printf("%s\n",a2);
                    esp(a2);
                    break;
        case 'C': printf("%s\n",a3);
                    esp(a3);
                    break;
        case 'D':printf("%s\n",a4);
                    esp(a4);
                    break;
        case 'E':printf("%s\n",a5);
                    esp(a5);
                  break;
        case 'F':printf("%s\n",a6);
                    esp(a6);
                  break;
        case 'G':printf("%s\n",a7);
                    esp(a7);
                  break;
        case 'H':printf("%s\n",a8);
                    esp(a8);
                  break;
        case 'I':printf("%s\n",a9);
                    esp(a9);
                  break;
        case 'J':printf("%s\n",a10);
                    esp(a10);
                  break;
        case 'K':printf("%s\n",a11);
                    esp(a11);
                  break;
        case 'L':printf("%s\n",a12);
                    esp(a12);
                  break;
        case 'M':printf("%s\n",a13);
                    esp(a13);
                  break;
        case 'N':printf("%s\n",a14);
                    esp(a14);
                  break;
        case 'O':printf("%s\n",a15);
                    esp(a15);
                  break;
        case 'P':printf("%s\n",a16);
                    esp(a16);
                  break;
        case 'Q':printf("%s\n",a17);
                  esp(a17);
                  break;
        case 'R':printf("%s\n",a18);
                  esp(a18);
                  break;
        case 'S':printf("%s\n",a19);
                  esp(a19);
                  break;
        case 'T':printf("%s\n",a20);
                    esp(a20);
                    break;
        case 'U':printf("%s\n",a21);
                  esp(a21);
                  break;
        case 'V':printf("%s\n",a22);
                  esp(a22);
                  break;
        case 'W':printf("%s\n",a23);
                  esp(a23);
                  break;
        case 'X':printf("%s\n",a24);
                  esp(a24);
                  break;
        case 'Y':printf("%s\n",a25);
                  esp(a25);
                  break;
        case 'Z':printf("%s\n",a26);
                  esp(a26);
                  break;
        default:
            break;
    }
    printf("\n");
    }
    menu();
}
