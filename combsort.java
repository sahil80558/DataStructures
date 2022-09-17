class comb{
	static int count=1;
	static void show(int x[],int n,int g){
		if(g<1)g=count--;
		if(g<1)return;
		int t;
		for(int i=0;i<x.length-g;i++){
			if(x[i+g]<x[i]){
			t=x[i+g];
			x[i+g]=x[i];
			x[i]=t;
			}
		}
		show(x,n,(int)(g/1.3));
	}
	public static void main(String ab[]){
		int x[]={5,0,6,2,7,1,3,8,4,9,4,3,12,11,5,5};
		int n=16;
		show(x,n,(int)(n/1.3));
		for(int i=0;i<n;i++)
			System.out.println(x[i]);
	}
}