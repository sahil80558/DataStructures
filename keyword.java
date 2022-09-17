import java.util.*;
class Keyword{
	
	public static void main(String... ab){
		Scanner sc=new Scanner(System.in);
		int b=0;
		System.out.println("Enter any word");
		String s1=sc.next();
		String key[]={"break","case","return","struct","type","range","default","defer","continue","else","for","func","goto","if","map","var"};
		for(String s2:key){
			if(s1.equals(s2))
				b=1;
		}
		if(b==1)
				System.out.println("Keyword");
			else
				System.out.println("Not Keyword");
	}
}