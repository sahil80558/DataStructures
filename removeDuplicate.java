class RemoveDuplicate{
	static int size=0;
	static void distinct(int x[],int n){
		size=n;
		for(int i=0;i<n;i++){
			int v=x[i];
			for(int j=i+1;j<n;j++)
				if(v==x[j])remove(x,j,n);
		}
	}
	static void remove(int x[],int j,int n){
		for(int i=j;i<n-1;i++){
			x[i]=x[i+1];
		}
		distinct(x,n-1);
	}
	public static void main(String ab[]){
	    int x[]={7,1,2,6,3,4,1,5,6,6,6,7,7,7,8};
	    int n=x.length;
		// int x[]={1,2,3,4,5,6,7};
		distinct(x,n);
		for(int i=0;i<size;i++)
		System.out.println(x[i]);
	}
}