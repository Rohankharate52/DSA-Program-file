

//matrix rotation by 180 degree..


int n = matrix.size() ;

//Column wise reverse

for(int j=0; j<n; j++) 
{
    int start=0, end = n-1;

    while(start<end) 
    {
        swap(matrix[start][j],matrix[end][j]);
        start++,end--;
    }
}

//rowise reverse

for(int i=0; i<n; i++) 
{
    int start=0; end=n-1;
    while(start<end) 
    {
        swap(matrix[i][start],matrix[i][end]);
        start++,end--;
        
    }
}