class ReverseRecurssion{
	static void show(int x[],int i,int j){
		if(i>j)return;
		int t=x[i];
		x[i]=x[j];
		x[j]=t;
		show(x,i+1,j-1);
	}
	public static void main(String ab[]){
		int x[]={1,2,3,4,5,6,7,8};
		int n=x.length;
		show(x,0,n-1);
		for(int i=0;i<x.length;i++)
			System.out.print(x[i]+" ");
	}
}