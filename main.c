#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<mmsystem.h>
#include"menu.h"
#include"espeak.h"
#include"Word_OF_Alphabet.h"
#include"Weekday.h"
#include"Identify_Color.h"
#include"Window.h"
#include"Identify_Shape.h"
#include"login.h"
#include"Add_Sub.h"


void white(){
    printf("\033[1;37m");
}
void green(){
    printf("\033[1;32m");
}
void black(){
    printf("\033[1;30m");
}
void red(){
    printf("\033[1;31m");
}
void purple(){
    printf("\033[1;35m");
}

int main()
{

     system("color F");
    login();
    white();
    printf("\t\t\t<------------------------------------------------------------>\n");
    green();
    printf("\t\t\t\t\t\tWelcome\n\t\t\t\t\t\t  to \n\t\t\t\t\tKids Learning Application\n");
    white();
    printf("\t\t\t<------------------------------------------------------------>\n");
    green();
    char wl[]="Welcome to Kids Learning Application";
    esp(wl);
     menu();

}
