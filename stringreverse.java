import java.util.*;
class reverse{
	public static void main(String ab[]){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Any Text\n");
		String s1=sc.next();
		char ch;
		String s2="";
		for(int i=0;i<s1.length();i++){
			ch=s1.charAt(i);
			s2=ch+s2;
		}
		System.out.println(s2);
		
	}
}