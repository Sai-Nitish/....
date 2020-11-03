#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
    FILE *fptr1,*fptr2;
    char s,buffer[20];
    if(argc>=2)
    {
        printf("Program name: %s\n\n",argv[0]);
        printf("Arguments: ");
        for(int i=1;i<argc;i++)
        {
            printf("%s ",argv[i]);
        }
        printf("\n");
        fptr1=fopen(argv[1],"r");//file1 in read mode
        if(fptr1==NULL)
        {
            printf("\nCannot open file %s \n",argv[1]);
            exit(0);
        }
        fptr2=fopen(argv[2],"w");//file2 in write mode
        if(fptr1==NULL)
        {
            printf("\nCannot open file %s \n",argv[2]);
            exit(0);
        }
        printf("\nThe file1 contains: ");
        while(fgets(buffer, sizeof(buffer),fptr1)!=NULL)
        {
            fputs(buffer,stdout);
            fputs(buffer,fptr2);
        }
        printf("\n\nContents copied to %s\n",argv[2]);
        fclose(fptr1);
        fclose(fptr2);
        fptr2=fopen(argv[2],"r");//file2 in read mode
        printf("\nfile2 now contents: ");
        while((s=fgetc(fptr2))!=EOF)
        {
            printf("%c",s);
        }
        fclose(fptr2);
        printf("\n");
        return 0;
    }
    else
    { printf("Not enough arguments"); }
    return 0;
}
