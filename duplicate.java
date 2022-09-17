class duplicate{
	public static void main(String ab[]){
		int x[]={1,2,2,3,4,5,6,7,5};
		for(int i=0;i<x.length;i++){
			for(int j=i+1;j<x.length;j++){
				if(x[i]==x[j])
				System.out.println("Duplicate No="+x[i]);
			}
		}
	}
}