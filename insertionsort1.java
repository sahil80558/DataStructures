class insertionSort{
	static void insertionSort(int x[],int n){
		int i,j,value;
		for(i=1;i<n;i++){
			value=x[i];
			for(j=i;j>0 && x[j-1]>value;j--){
				x[j]=x[j-1];
			}
			x[j]=value;
		}
	}
	public static void main(String ab[]){
		int x[]={7,65,4,3,21,1};
		int n=x.length;
		insertionSort(x,n);
		for(int i=0;i<n;i++)
			System.out.println(x[i]);
	}
}