#include<stdio.h>
#include<conio.h>
 
int main()
{
    FILE *fp;
    fp= fopen("D:\\fielfile.txt","w"); //opening file
    fprintf(fp,"we are learning file handling in c language.");

    fclose(fp); //closing file
    printf("File write sucessfully");
    return 0;
}