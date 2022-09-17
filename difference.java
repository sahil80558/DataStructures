class Difference{
	static int diff(int x[],int n){
		int i,min,max;
		min=max=x[0];
		for(i=1;i<n;i++)if(x[i]>max)max=x[i];
		for(i=1;i<n;i++)if(x[i]<min)min=x[i];
		return max-min;
	}
	public static void main(String ab[]){
		int x[]={10,20,30,40,60};
		int n=x.length;
		System.out.println(diff(x,n));
	}
}