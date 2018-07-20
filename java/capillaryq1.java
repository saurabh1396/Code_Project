import java.util.Scanner;
import java.lang.Math;
class capillaryq1{
  public static void main(String []args)
  {
    double sum = 0;
    double max =0;
    int index = 0;
    int ctr;
    String s;
    int val;
    Scanner scan = new Scanner(System.in);
    //Capillaryq1 q1 = new Capillaryq1();
    int m = scan.nextInt();
    //int n = scan.nextInt();
  //  int [][]arr = new int[m][n];
    //for(int i = 0; i<m; i++ )
    {
      //for(int j = 0 ; j<n; j++){
         s  = scan.nextLine();
        val = Integer.parseInt(s,2);
        System.out.print(val);
      //}
    //  System.out.println();
    }
    /*for(int i = 0; i<m; i++ ){
      ctr = n-1;
      for(int j = 0 ; j<n; j++){
       sum = sum+ arr[i][j]*Math.pow(2,ctr);
       ctr--;
    }if(sum>max)
    { max = sum;
      index = i;
    }
    sum=0;
}
System.out.print(index+1);

*/  }
}
