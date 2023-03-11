#include<stdio.h>
#include<conio.h>
 
int main()
{
    FILE *fp;
    char buff[255]; //creating char array to store data of life

    fp= fopen("D:\\myfile.txt","r");
    while (fscanf(fp, "%s",buff)!=EOF)
   {
    printf("%s ",buff);
   }

    fclose(fp); //closing file

    return 0;
}