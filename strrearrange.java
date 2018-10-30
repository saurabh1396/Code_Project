import java.util.*;
public class strrearrange{
  public static void main(String []args){
    int count=0;
    String lines[] = new String[1000];
    String x[] = new String[1000];
    String []s1 = new String[1000];
    String []s3 = new String[1000];
    String []s2 = new String[100000];
    Scanner scan = new Scanner(System.in);
    String s  = scan.nextLine();
    s = s.trim();
    for(int i =0; i<s.length(); i++){
      if(s.charAt(i)==','){
        count++;
      }
    }
      //System.out.println();
      for(int i=0;i<count; i++ ){
        s= scan.nextLine();
        lines[i] = s;
      }
      for(int i=0; i<count; i++){
        x= lines[i].split(" ");
        s1[i] = x[0];
        s2[i] = x[2].replaceAll("[^0-9]","");
        int it = Integer.parseInt(s2[i]);
        s3[i] = x[3];
        //System.out.println(s1[i]);
        //System.out.println(s2[i]);
        //System.out.println(s3[i]);
        System.out.println(it*100);

      }
  }
}
