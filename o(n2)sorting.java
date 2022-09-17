class On2Sorting{
	static void bubbleSort(int x[],int n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n-1;j++){
				if(x[j]>x[j+1]){
					int t=x[j];
					x[j]=x[j+1];
					x[j+1]=t;
				}
			}
		}
	}
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
	static void selectionSort(int x[],int n){
		int i,j,index,t;
		for(i=0;i<n-1;i++){
			index=i;
			for(j=i+1;j<n;j++){
				if(x[j]<x[index]){
					index=j;
				}
			}
				if(i!=index){
					t=x[i];
					x[i]=x[index];
					x[index]=t;
				}
		}
	}
	public static void main(String... ab){
		int x[]={8,7,6,5,4,3,2,1};
		int y[]={1,2,3,4,5,6,7,8};
		int n=x.length;
		// insertionSort(x,n);
		// bubbleSort(y,n);
		selectionSort(x,n);
		for(int i=0;i<n;i++)
			System.out.print(x[i]+" ");
	}
}