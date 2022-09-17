import java.util.*;
class check{
	Scanner sc=new Scanner(System.in);
	int flag=0;
	boolean b;
	
    		void check(int a){
			if(a<0){
				System.out.println("Enter a positive No.");
			    a=sc.nextInt();
			check(a);
			}
			else{
			    isPrime(a);
			}
			
		}
		void isPrime(int a){
			
				for(int i=2;i<a;i++){
					if(a%i==0)
					flag=1;
				}
				if(a==0 || a==1){
					System.out.println(" Not Prime");
				}
				else if(flag==0)
					System.out.println("Prime");
				
				else{
					System.out.println("Not Prime");
				}					
		}
}
class Prime{
		
	public static void main(String[] ab){
		Scanner sc=new Scanner(System.in);
		check ch=new check();
		System.out.println("Enter a Positive No.");
		int a=sc.nextInt();
		ch.check(a);	
	}
}