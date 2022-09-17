import java.util.*;
class insertElement{
	static int t;
	static void insert(int x[],int e,int s,int p){
		int i;
		for(i=s;i>p;i--){
			x[i]=x[i-1];	
		}
		x[i]=e;
	}
	public static void main(String... ab){
		int x[]=new int[10];
		int a=0;
		int size=6;
		for(int i=0;i<size;i++)
			x[i]=a+=10;
		int capacity=x.length;
		int p=3;
		int e=9;
		insert(x,e,size++,p);
		for(int i=0;i<size;i++)
			System.out.println(x[i]);
	}
}