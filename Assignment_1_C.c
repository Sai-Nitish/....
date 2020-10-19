#include <stdio.h>
#include <string.h>

int main() {
    char str1[]="Meghanath ",str2[]="Reddy", str3[20], str4[20];
    printf("1. String Copy Function\n");
    strcpy(str3,str1);
    printf("   The string %s is copied to str3\n",str1);
    printf("2. String copy function for N characters\n");
    strncpy(str4,str2,3);
    str4[3]='\0';
    printf("   The string copied to str4 is %s\n",str4);
    printf("3. String Length Function\n");
    printf("   Length of str1 is %d\n",strlen(str1));
    printf("   Length of str2 is %d\n",strlen(str2));
    printf("   Length of str3 is %d\n",strlen(str3));
    printf("   Length of str4 is %d\n",strlen(str4));
    printf("4. String Concatenate Function\n");
    strcat(str1,str2);
    printf("   Str1 after concatenation is %s\n",str1);
    printf("5. String compare Function\n");
    if (strcmp(str1,str2) == 0)
    {
        printf("   %s and %s are same\n", str1,str2);
    }
    else
    {
        printf("   %s and %s are not same\n",str1,str2);
    }
    if (strcmp(str1,str1)==0)
    {
        printf("   %s and %s are same\n",str1,str1);
    }
    else
    {
        printf("   %s and %s are not same\n",str1,str1);
    }
    printf("6. STRCHR() Function\n");
    char *pch;
    pch = strchr(str3,'n');
    printf("   The characters after n in str3 is %s\n",pch);
    return 0;
}
