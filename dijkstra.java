import java.util.*;
class Dijikstra{
	ArrayList al[]=new ArrayList[4];
	{
		for(int i=0;i<4;i++)
			al[i]=new ArrayList();
	}
	void insert(int n,int w){
		al[n].add(w);
	}
	void showAll(){
		for(int i=0;i<4;i++){
			System.out.print(i);
			for(int j=0;j<al[i].size();j++){
				System.out.print("\t=>\t"+al[i].get(j));
			}
			System.out.println();
		}
	}
}
class demo111{
	public static void main(String ab[]){
		Dijikstra d=new Dijikstra();
		d.insert(0,1);
		d.insert(0,2);
		d.insert(0,3);
		d.insert(1,0);
		d.insert(1,2);
		d.insert(2,0);
		d.insert(2,1);
		d.insert(2,3);
		d.insert(3,0);
		d.insert(3,2);
		d.showAll();
	}
}