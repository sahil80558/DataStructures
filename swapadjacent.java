class SwapAdjacent{
	static void swap(int x[],int n){
		int t,i,j;
		for(i=0,j=1;j<n;j+=2,i+=2){
			t=x[i];
			x[i]=x[j];
			x[j]=t;
		}
	}
	public static void main(String ab[]){
		int x[]={1,2,3,4,5,6,7,8};
		int n=x.length;
		swap(x,n);
		for(int i=0;i<n;i++)
			System.out.print(x[i]);
	}
}