#include<stdio.h>
#define capacity 50
#include<string.h>
void rev(int,char[]);
void rev(int i,char st[]){
	int a=i;
	int b=a-1;
	int s=0,w=0,t;
	while(st[i]!=' '){
		b++;
		i++;
	}
	for(s=a,w=b;w>s;s++,w--){
					t=st[s];
					st[s]=st[w];
					st[w]=t;
				}
	// printf("%d\n",a);
	// printf("%d\n",b);
	
}
void main(){
	int c=-1;
	int i=0,j=0;
	char t=0;
	int a=0;
	int b=0;
	int p=0;
	int s,w;
	
	char st[capacity];
	gets(st);
	// scanf("%[^\n]%*c", st);
	// char st[]={'r','a','m',' ','i','s',' ','n','a','m','e',' ','m','y','\0'};
	while(st[i]!='\0'){
		c++;
		i++;
	}

	for(i=c,j=0;i>j;i--,j++){
		t=st[i];
		st[i]=st[j];
		st[j]=t;
	}
	
	for(i=c;i>=0;i--){
		if(p==1){
			a=b=0;
			while(st[b]!=' ')
				b++;
			b--;
		    p=2;
			for(s=a,w=b;w>s;s++,w--){
				t=st[s];
				st[s]=st[w];
				st[w]=t;
			}
			while(!st[i]<='z' && !st[i]>='a')
					i--;
		}
		if(p==2){
				if(st[i]==' '){
			      rev(i+1,st);
				  while(!st[i]<='z' && !st[i]>='a')
					i--;
		        }
			 }
		if(p==0){
			if(st[i]==' '){
			    a=i;
			    a++;
			    b=a;
			    while(st[b]!='\0')
				    b++;
				b--;
		        p=1;
			    }
				for(s=a,w=b;w>s;s++,w--){
					t=st[s];
					st[s]=st[w];
					st[w]=t;
				}
				while(!st[i]<='z' && !st[i]>='a')
					i--;
		     }
		}
		
	printf("%s",st);
	// printf("%d\n",a);
	// printf("%d",b);
}