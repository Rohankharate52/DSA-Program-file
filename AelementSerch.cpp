Class Solution {
    public:
    //



    int search (int arr[],int N,int x)
    {


        for(i=0;i<N;i++)
        {
            if(arr[i]==x)
            return i;

        }
        return -1;
    }
}