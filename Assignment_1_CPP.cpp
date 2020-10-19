#include <iostream>
#include <cstring>          //C-Style String header file
#include <string>

using namespace std;

int main()
{
    char str1[] = "Meghanath ", str2[] = "Reddy", str3[20], str4[10];
    int value;
    char *pch;
    cout <<"The inbuilt String Functions"<<endl;
    cout <<"----------------------------"<<endl;
    cout <<"1. String Copy Function"<<endl;
    strcpy(str3,str1);              //Copies string1 to string3
    cout <<"   "<<"The string copied to String3 is "<<str3<<endl;
    cout <<"2. String Copy upto n characters Function"<<endl;
    strncpy(str4,str2,3);              //Copies string1 to string3
    str4[3]='\0';                      //Manually adding \0
    cout <<"   "<<"The string copied to String4 is "<<str4<<endl;
    cout <<"3. String concatenate Function"<<endl;
    strcat(str3,str2);              //Concatenates string2 at the end of string3. If the size is not big, it neglects.
    cout <<"   "<<"The concatenated String is "<<str3<<endl;
    cout <<"4. String Length Function"<<endl;
    cout <<"   "<<"The length of String1 is "<< strlen(str1)<<endl;
    cout <<"   "<<"The length of String2 is "<< strlen(str2)<<endl;
    cout <<"5. String Comparison Function"<<endl;
    value = strcmp(str1,str2);
    cout <<"   "<<value<<endl;      //Since str1 > str2, i.e., -1
    value = strcmp(str2,str1);
    cout <<"   "<<value<<endl;      //Since str2 < str1, i.e., 1
    value = strcmp(str1,str1);
    cout <<"   "<<value<<endl;      //Since str1 == str1, i.e., 0
    cout <<"6. Character in String Function"<<endl;
    pch = strchr(str1,'n');
    cout <<"   "<<"Characters after first n is "<<pch<<endl;
    cout<< "------------------------------------"<<endl;
    cout <<"The operators"<<endl;
    cout <<"-------------"<<endl;
    string strA = "Bhagat ", strB = "Singh", strC, strD;
    int values;
    cout <<"1. String Copy using ="<<endl;
    strC = strA;
    cout <<"   "<<"The string copied to StringC is "<<strC<<endl;
    cout <<"2. String Concatenate using +"<<endl;
    strD = strA + strB;
    cout <<"   "<<"Concatenated String is "<<strD<<endl;
    cout <<"3. String length using .size()"<<endl;
    values = strD.size();
    cout <<"   "<<"Length of StringD is "<<values<<endl;

}
