class Distinct{
	static boolean distinct(int x[],int n){
		for(int i=0;i<n;i++){
			int v=x[i];
			for(int j=i+1;j<n;j++){
				if(v==x[j])return true;
			}
		}
		return false;
	}
	public static void main(String ab[]){
		int x[]={1,2,3,4,5,6,7};
		// int x[]={1,2,3,4,5,6,7,7,8};
		int n=x.length;
		System.out.println(distinct(x,n));
	}
}