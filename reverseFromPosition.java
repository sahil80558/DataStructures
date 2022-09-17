class Reverse{
	static void show(int x[],int p){
		int i,j,t;
		for(i=0,j=p;i<j;i++,j--){
			t=x[i];
			x[i]=x[j];
			x[j]=t;
		}
	}
	public static void main(String... ab){
		int x[]={1,2,3,4,5,6,7,8,9};
		int n=x.length;
		show(x,4);
		for(int i=0;i<n;i++)
			System.out.println(x[i]);
	}
}