#include<stdio.h>
#include<conio.h>
 
int main()
{
    FILE *fp;
    char str[100];

    fp= fopen("D:\\filefile.txt","w"); //opening file

    printf("Enter any data \n");
    gets(str);

    fprintf(fp,str);

    fclose(fp); //closing file
    printf("File write sucessfully");
    return 0;
}