import java.util.*;
class Hexa{
	public static void main(String... ab){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Any Hexadecimal No.");
		String s1=sc.next();
		int x=Integer.parseInt(s1,16);
		System.out.print(x);
	}
}