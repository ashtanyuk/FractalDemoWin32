#include<stdio.h>

#define N 80
#define M 80

char arr[N][M];

void print()
{
	int i,j;
	for(i=0;i<N;i++) {
		for(j=0;j<M;j++)
			putchar(arr[i][j]);
		putchar('\n');
	}
}
int pow(int n,int m)
{
	int i,res=1;
	for(i=0;i<m;i++)
		res*=n;
	return res;
}
void draw(int y,int x, int k)
{
	int delta=pow(3,k-1);
	if(k==0) {
		arr[y][x]='*';
	} else {
		draw(y,x,k-1);
		draw(y-delta,x,k-1);
		draw(y+delta,x,k-1);
		draw(y,x-delta,k-1);
		draw(y,x+delta,k-1);
	}
}
int main()
{
	draw(N/2,M/2,4);
	print();
	return 0;
}
