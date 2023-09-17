class En_loop
{
    public static void main(String args[])
    {
        int arr[] =new int[6];

        for(int i = 1;i<arr.length;i++)
        arr[i]=i;
        
        for(int j:arr)
        System.out.println(j);
        
        
    }
}