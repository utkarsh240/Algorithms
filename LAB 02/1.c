/*2.1 Aim of the program: Write a program in C to convert the first ‘n’ decimal numbers of a disc
file to binary using recursion. Store the binary value in a separate disc file.
Note# Read the value of ‘n’, source file name and destination file name from command line
arguments. Display the decimal numbers and their equivalent binary numbers from the output
file.
Give the contents of the input disc file “inDec.dat” as
30 75 2564 …
Contents of the output disc file “outBin.dat” as
The binary equivalent of 30 is 0000000000011110
The binary equivalent of 75 is 0000000001001011
The binary equivalent of 2564 is 0000101000000100 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void decToBin(int n,FILE *fp)
{
    if(n==0)
        return;
    decToBin(n/2,fp);
    fprintf(fp,"%d",n%2);
}

int main(int argc,char *argv[])
{
    FILE *fp1,*fp2;
    int n;
    char ch;
    if(argc!=4)
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
    n=atoi(argv[3]);
    while(n--)
    {
        fscanf(fp1,"%d",&n);
        decToBin(n,fp2);
        fprintf(fp2,"\n");
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

