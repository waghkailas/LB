#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fcntl.h>
#include<unistd.h>
//#include<io.h>    it uses when open or other file commands not working
//O_RDONLY  read
//O_WRONLY  write
//O_RDWR   read&write
// O_CREAT  create the file

using namespace std;

class Filex
{
    public:
    int fd;
     Filex(char Name[])
     {
         fd=creat(Name,0777);
         if(fd==-1)
         {
             cout<<"unable to create file\n";
         }
         else{
             cout<<"file successfully create\n";
         }
     }
     ~Filex()
     {
         close(fd);

     }

};
int main()
{
    char str[30];
    cout<<"enter the filr name\n";
    cin>>str;
    Filex obj(str);
    return 0;
} 




/*
 
                                         users of file
                                         */