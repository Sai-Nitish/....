#include <stdio.h>
int main(int argc, char *argv[])
{
 FILE *fp,*ft;
 char ch;
 fp=fopen(argv[1],"r");
 ft=fopen(argv[2],"w");
 if(argc==2)//For reading just one file
 {
   if ( fp )
   {
     printf("File contents:\n");
       while ( (ch = fgetc(fp)) != EOF )
          {
             printf("%c",ch);
           }
   }
   else
   {
     printf("File error");
   }
 }
 else
 {
  while(ft)//For copying files
  {
   ch=fgetc(fp);
   if (feof(fp)) break;
   fputc(ch,ft);
  }
printf("Files Copied Successfully");
 }
return 0;
}
