import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    public static String timeConversion(String s) {
        String s1[]=s.split(":");
        String time="";
        
        String t=String.valueOf(s1[2].charAt(2))+String.valueOf(s1[2].charAt(3));
        String a=String.valueOf(s1[2].charAt(0));
         a=a+String.valueOf(s1[2].charAt(1));
        
        int c=Integer.parseInt(s1[0]);
        if(t.equals("AM")){
            if(s1[0].equals("12")){
                String s2="00"+":"+s1[1]+":"+a;
                return s2;
            }
            String s4=s1[0]+":"+s1[1]+":"+a;
                return s4;
        }else{
            c=c+12;
            String s3=String.valueOf(c);
            s3=s3+":"+s1[1]+":"+a;
            return s3;
        }
    }

}
class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        // BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = bufferedReader.readLine();

        String result = Result.timeConversion(s);

        System.out.println(result);
    }
}
