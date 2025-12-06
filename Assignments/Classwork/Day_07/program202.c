#include<stdio.h>
#include<fcntl.h>

int main()
{
   int fd1 =  0, fd2 = 0, fd3 = 0;

   fd1 = open("PPA.text",O_RDONLY);    // 3
   printf("fd1 : %d\n",fd1);

   fd2 = open("LB.text",O_RDONLY);     // 4
   printf("fd2 : %d\n",fd2);
   
   fd3 = open("Demo.text",O_RDONLY);   //  5
   printf("fd3 : %d\n",fd3);

    return 0;
}