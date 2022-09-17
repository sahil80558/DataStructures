class pascal{
	public static void main(String ab[]){
		int i,j,k,c=1;
		for(i=0;i<=5;i++){
			for(j=5;j>=i;j--)
				System.out.print(" ");
			for(k=0;k<=i;k++){
				if(k==0 || i==0)
				c=1;
			else
				c=c*(i-k+1)/k;
				System.out.print(c+" ");
			}
				System.out.println();
		}
	}
}