class insertSorted{
	static int index(int x[],int e,int s){
		if(e<x[0])
			return 0;
		else if(e>x[s-1])
			return s;
		for(int i=0;i<s;i++){
			if((e>x[i] && e<x[i+1]) || x[i]==e)
				return i+1;
		}
		return -1;
	}
	static void insert(int x[],int e,int n,int s){
		int i;
		int p=index(x,e,s);
		for(i=s;i>p;i--){
			x[i]=x[i-1];
		}
		x[i]=e;
		// System.out.println(index(x,e,s));
	}
	public static void main(String ab[]){
		int x[]=new int[10];
		x[0]=1;
		x[1]=2;
		x[2]=4;
		x[3]=5;
		int e=2;
		int n=x.length;
		int s=4;
		insert(x,e,n,s++);
		for(int i=0;i<s;i++){
			System.out.println(x[i]);
		}
	}
}