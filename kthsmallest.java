import java.util.*;
class Kth{
        static void show(int x[],int n,int i){
		int l=i*2+1;
		int r=i*2+2;
		int min=i;
		int t;
		if(r<n){
			if(x[r]<x[min])
				min=r;
			if(x[l]<x[min])
				min=l;
		}
		else if(l<n)
			min=l;
		if(x[min]<x[i]){
			t=x[i];
			x[i]=x[min];
			x[min]=t;
			show(x,n,min);
		}
	}
	static void showloop(int x[],int n){
		for(int i=n/2-1;i>=0;i--){
			show(x,n,i);
		}
	}
	static void delete(int x[],int n){
		int t=0;
		for(int i=n-1;i>=0;i--){
			t=x[0];
			x[0]=x[i];
			x[i]=t;
			show(x,i,0);
		}
	}
	public static void main(String ab[]){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Kth Smallest No.");
		int a=sc.nextInt();41
		int x[]={20,12,8,5,2,45};
		int n=x.length;
		showloop(x,n);
		delete(x,n);
		for(int i=0;i<n;i++)
			System.out.println(x[i]);
			System.out.println(x[n-a]);
	}
}
