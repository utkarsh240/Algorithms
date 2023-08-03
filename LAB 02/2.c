/*Aim of the program: Write a program in C to find GCD of two numbers using recursion. Read
all pair of numbers from a file and store the result in a separate file.
Note# Source file name and destination file name taken from command line arguments. The
source file must contain at least 20 pairs of numbers.
Give the contents of the input disc file “inGcd.dat” as 8 12 20 45 30 80
Contents of the output disc file “outGcd.dat” as
The GCD of 8 and 12 is 4
The GCD of 20 and 45 is 5
The GCD of 30 and 80 is 10*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int gcd(int a,int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}

int main(int argc,char *argv[])
{
    FILE *fp1,*fp2;
    int a,b;
    char ch;
    if(argc!=3)
    {
        printf("Invalid number of arguments\n");
        exit(1);
    }
    fp1=fopen(argv[1],"r");
    if(fp1==NULL)
    {
        printf("Error in opening file %s\n",argv[1]);
        exit(1);
    }
    fp2=fopen(argv[2],"w");
    if(fp2==NULL)
    {
        printf("Error in opening file %s\n",argv[2]);
        exit(1);
    }
    while(fscanf(fp1,"%d%d",&a,&b)!=EOF)
    {
        fprintf(fp2,"The GCD of %d and %d is %d\n",a,b,gcd(a,b));
    }
    fclose(fp1);
    fclose(fp2);
    fp2=fopen(argv[2],"r");
    if(fp2==NULL)
    {
        printf("Error in opening file %s\n",argv[2]);
        exit(1);
    }
    while((ch=fgetc(fp2))!=EOF)
        printf("%c",ch);
    fclose(fp2);
    return 0;
}
