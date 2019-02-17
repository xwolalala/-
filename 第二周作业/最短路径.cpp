#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#define MAXN 20005
#define INF INT_MAX/10//最大整数
int d[MAXN][MAXN];
int V,E;
int min(int x,int y){
    return x<y?x:y;
} 
void floyd(){
for(int k=1;k<=V;k++)
for(int i=1;i<=V;i++)
for(int j=1;j<=V;j++)
d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
}
int main()
{
    int u,v,i,j;
    scanf("%d%d",&V,&E);
    for(i=1;i<=V;i++)
    for(j=i+1;j<=V;j++){
    d[i][j]=d[j][i]=INF;
    }

    for(i=1;i<=E;i++){
    scanf("%d%d",&u,&v);
    scanf("%d",&d[u][v]);
    }
    floyd();
    for(i=2;i<=V;i++){
    if(d[1][i]!=INF)
       printf("%d\n",d[1][i]);
    }
    return 0;
}