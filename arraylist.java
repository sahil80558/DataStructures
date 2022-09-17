class A{
	int capacity;
	int size;
	int x[];
	A(){
		this(10);
	}
	A(int n){
		capacity=n;
		x=new int[capacity]; 
	}
	void add(int v){
		resize();
		x[size++]=v;
	}
	void resize(){
		if(size==capacity){
			capacity*=2;
			int y[]=new int [capacity];
			for(int i=0;i<size;i++)
				y[i]=x[i];
			x=y;
		}
	}
}
class demo121{
	public static void main(String ab[]){
		A a=new A(10);
		System.out.println(a.size);
		System.out.println(a.capacity);
		for(int i=0;i<=10;i++)
			a.add(i);
		System.out.println(a.size);
		System.out.println(a.capacity);
		
	}
}