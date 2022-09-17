class sortMatrix{
	static void sortRow(int x[][],int r,int c){
		int i,j,row,value;
		for(row=0;row<r;row++){
		for(i=1;i<c;i++){
			value=x[row][i];
			for(j=i;j>0 && x[row][j-1]>value;j--){
				x[row][j]=x[row][j-1];
			}
			x[row][j]=value;
		}
		}
	}
	static void sortColumn(int x[][],int c,int r){
		int column,i,j,value;
		for(column=0;column<c;column++){
			for(i=1;i<r;i++){
				value=x[i][column];
				for(j=i;j>0 && x[j-1][column]>value;j--){
					x[j][column]=x[j-1][column];
				}
				x[j][column]=value;
			}
		}
	}
	public static void main(String ab[]){
		int x[][]={
			{9,7,7},
		    {3,4,6},
			{1,2,2},
			{12,56,11}};
		int r=x.length;
		int c=x[0].length;
		// sortRow(x,r,c);
		sortColumn(x,c,r);
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++)
		         System.out.print(x[i][j]+" ");
		System.out.println();
		}
		// System.out.println(c);
	}
}