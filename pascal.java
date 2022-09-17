import java.io.*;
class GFG {
    static void printPascal(int n)  // Pascal function
    {
        for (int i=1;i<=n;i++){
            for (int j=0;j<=n-i;j++){
                System.out.print(" ");
            }
            int c=1;  // The first value in a line is always 1
            for(int k=1;k<=i;k++){
                System.out.print(c+" ");
                c=c*(i-k)/k;
            }
            System.out.println();
        }
    }
    public static void main(String[] args)
    {
        int n=4;
        printPascal(n);
    }
}