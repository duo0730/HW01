#include <stdio.h>
#define IN_CHESS(x,y)(x>=0 && x<=7 && y>=0 && y<=7)

int main(){
    int chess[8][8]={
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,2,1,0,0,0},
        {0,0,0,1,2,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0}
    };
    
    int color =1;
    int i=2; 
    int j=4;
    int dx=1; 
    int dy=0;

    int check(int check[0][0])
    int an_color=3-color;
    
    //step 1 可不可以下
    int x=i+dx;
    int y=j+dy;

    if(IN_CHESS(x,y)){
        if(chess[x][y]!=2){
            printf("%d,%d not free for color=%d\n",i,j,color);
        }
    }else{
        printf("%d,%d not free for color=%d\n",i,j,color);
        return;
    }

    //chess[x][y]==2
    x=x+dx;
    y=y+dy;
    while(IN_CHESS(x,y)){
        if chess[x][y]==0{
            printf("%d,%d not free for color=%d\n",i,j,color);
            break;
        }
        if chess[x][y]==0{
            printf("%d,%d free for color=%d\n",i,j,color);
            break;
        }
        x=x+dx;
        y=y+dy;
    }


    /*int color,i,j;
    scanf("%d%d%d",&color,&i,&j);
    
    if(chess[i][j]!=0) printf("(%d,%d) 不能下 color=%d的子",i,j,color);


    int vec[8][2]={
        {0,1},{1,1},{1,0},{1,-1},
        {0,-1},{-1,-1},{-1,0},{-1,1}
    };
     
    {-1,-1} {-1, 0} {-1, 1}
    { 0,-1}         { 0, 1}
    { 1,-1} { 1, 0} { 1, 1}
    

    if(chess[i][j]==0){
        for(int d=0;d<8;d++){
            int dx=vec[d][0];
            int dx=vec[d][1];
        }
    }

    if(chess[i][j]==0){
    
    }*/
    
    
    return 0;
}


    