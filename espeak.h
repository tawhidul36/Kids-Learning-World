void esp(char *phrase)
{
     char charCommand[100];
    strcpy(charCommand,"espeak \"");
    strcat(charCommand,phrase);
    strcat(charCommand,"\"");
    system(charCommand);
}
