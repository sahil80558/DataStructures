class SecondLargest{
	static void show(int x[],int n){
		int max1,max2;
		max1=max2=x[0];
		for(int i=0;i<n;i++){
			if(x[i]>max1){
				max2=max1;
				max1=x[i];
			}
			else if(max1==max2 || max2<x[i]){
				max2=x[i];
			}
		}
		System.out.println(max1);
		System.out.println(max2);
	}
	public static void main(String ab[]){
		int x[]={10,20,30,40,50,60};
		int n=x.length;
		show(x,n);
	}
}