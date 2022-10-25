class enhancedforloop
{
 public static void main(String args[])
 {
  int arr[] = new int[6];
  int i;
  for(i=0; i<arr.length ; i++)
  arr[i] = i;
  
  for(int j : arr)
  System.out.print(j);
 }
}
