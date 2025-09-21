// here we will be doing code for maze 
#include <stdio.h>
int maze ( int row , int column , int rows, int columns ,char path[] , int idx ){
    
int rightways = 0 ;
int downways = 0 ;

    if ( row == rows && column == columns ){
        int count = 0 ;
        count ++ ;
        path[idx] =  '\0';
        printf("%s \n", path);
        return count ;
    }
    if (row < rows){
        path[idx] = 'R';
        rightways =  maze (  row +1 ,  column ,  rows,  columns , path , idx +1);
        
    }
    
    if (column < columns){
        path[idx] = 'D';
        downways =  maze (  row ,  column +1 ,  rows,  columns , path ,  idx + 1 );
    }
    return rightways + downways;
}

#include <stdio.h>
int main (){
    int total ,  rows , columns;
    printf("enter number of rows u want to print maze");
    scanf  ("%d", &rows);
    printf("enter number of columns  u want to print maze");
    scanf  ("%d", &columns);
    char path[100];
 total =  maze ( 0, 0 , rows - 1 , columns-1 ,path,0);

 printf( " total number of possibilites are as follows :%d ", total );


 return 0 ;
}