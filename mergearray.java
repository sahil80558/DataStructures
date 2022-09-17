class mergeSort{
	static	int i,j,m;
	static void merge(int x[],int y[],int z[]){
		for(i=0,j=0,m=0;i<x.length && j<y.length;){
			if(x[i]<y[j])
				z[m++]=x[i++];
			else
				z[m++]=y[j++];
		}
		while(i<x.length)z[m++]=x[i++];
		while(j<y.length)z[m++]=y[j++];
	}
	public static void main(String ab[]){
		int x[]={1,2,3,4,5,6,6,6};
		int y[]={1,2,3,7,8,9,10};
        int z[]=new int[x.length+y.length];
		merge(x,y,z);
	for(int i=0;i<z.length;i++)
		System.out.println(z[i]);
	}
}