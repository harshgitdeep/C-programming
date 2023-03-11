#include<stdio.h>
#include<conio.h>
 
int main()
{
    FILE *fp;
    char str[100];
    char drive[10];

    printf("Enter any data \n");
    gets(str);
    printf("Enter drive name \n");
    gets(drive);

    fp= fopen(strcat(drive,":\\filefile.txt"),"w"); //opening file
    fprintf(fp,str);

    fclose(fp); //closing file
    printf("File write sucessfully");
    return 0;
}