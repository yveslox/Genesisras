class arraysum
{
 public static void main(String args[])
 {
  int arr[]={0, 10, 20, 30, 40, 50, 60};
   int i;
   int sum = 0;
  for(i=0; i < arr.length; i++)
 {
  sum = sum + arr[i];
 }
 System.out.println(sum);
}
}
