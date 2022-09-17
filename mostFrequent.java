class MostFrequent{
	static void show(int x[],int n){
		int y[]=new int[10];
		int i=0;
		int r=0;
		for(i=0;i<y.length;i++)y[i]=0;
		for(i=0;i<n;i++)y[x[i]]++;
		int max=y[0];
		for(i=1;i<y.length;i++){
		if(y[i]>max){
			max=y[i];
			r=i;
		}	
		}
		System.out.println(r);
	}
	public static void main(String ab[]){
		int x[]={2,1,3,4,3,7,6,9,7,5,3,3,7,7,7,1,1,1,1,1};
		int n=x.length;
		show(x,n);
	}
}