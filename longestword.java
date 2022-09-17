import java.util.*;
class A{
	static void show(String word){
		String ar[]=word.split(" ");
		String s1=ar[0];
		for(String a:ar){
			if(s1.length()<a.length())s1=a;
			
		}
			System.out.println(s1);
		// return sahil;
	}
	public static void main(String ab[]){
		String word="My name is Yogesh sahils sauras";
		show(word);
	}
}