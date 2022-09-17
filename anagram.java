import java.util.*;
class Anagram{
	public static void main(String ab[]){
		String s1="look";
		String s2="kolo";
		
		if(s1.length()!=s2.length())
			System.out.println("Not Anagram");
		else{
			char[] ch1=s1.toLowerCase().toCharArray();  
		    char[] ch2=s2.toLowerCase().toCharArray();
			
			Arrays.sort(ch1);
			Arrays.sort(ch2);
			if(Arrays.equals(ch1,ch2))
				System.out.println("Anagram");
			else
				System.out.println("Not Anagram");
		}		
	}
}