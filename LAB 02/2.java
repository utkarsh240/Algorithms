/*/*Aim of the program: Write a program in java to find GCD of two numbers using recursion. Read
all pair of numbers from a file and store the result in a separate file.
Note# Source file name and destination file name taken from command line arguments. The
source file must contain at least 20 pairs of numbers.
Give the contents of the input disc file “inGcd.dat” as 8 12 20 45 30 80
Contents of the output disc file “outGcd.dat” as
The GCD of 8 and 12 is 4
The GCD of 20 and 45 is 5
The GCD of 30 and 80 is 10*/

import java.io.*;
import java.util.*;

class Gcd
{
    public static void main(String args[]) throws IOException
    {
        String src = args[0];
        String dest = args[1];
        File f1 = new File(src);
        File f2 = new File(dest);
        Scanner sc = new Scanner(f1);
        PrintWriter pw = new PrintWriter(f2);
        while(sc.hasNext())
        {
            int x = sc.nextInt();
            int y = sc.nextInt();
            pw.println("The GCD of " + x + " and " + y + " is " + gcd(x, y));
        }
        sc.close();
        pw.close();
    }

    public static int gcd(int x, int y)
    {
        if(y == 0)
            return x;
        return gcd(y, x%y);
    }
}

