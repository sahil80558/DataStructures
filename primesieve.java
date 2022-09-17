class Prime{
	static int f;
	static void show(int i,int n){
		if(i>n/2)return;
		if(n%i==0)f++;
		show(i+1,n);
	}
	static void isPrime(int n,int i){
		if(i>n)return;
		f=0;
		show(2,i);
		if(f==0)
			System.out.println(i);
		isPrime(n,i+1);
	}
	public static void main(String ab[]){
		isPrime(20,2);
	}
}