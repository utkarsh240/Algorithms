/*2.1 Aim of the program: Write a program in java to convert the first ‘n’ decimal numbers of a disc
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

import java.io.*;
import java.util.*;

class DecToBin
{
    public static void main(String args[]) throws IOException
    {
        int n = Integer.parseInt(args[0]);
        String src = args[1];
        String dest = args[2];
        File f1 = new File(src);
        File f2 = new File(dest);
        Scanner sc = new Scanner(f1);
        PrintWriter pw = new PrintWriter(f2);
        while(sc.hasNext())
        {
            int x = sc.nextInt();
            pw.println(x + " " + decToBin(x));
        }
        sc.close();
        pw.close();
    }

    public static String decToBin(int n)
    {
        if(n == 0)
            return "";
        return decToBin(n/2) + n%2;
    }
}

