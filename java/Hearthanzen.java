import java.io.*;
import java.util.*;
class Hearthanzen{
//int k=0;
   String replace(String str,int n, int k){
  int h=n+k;
   if(h>=str.length()){
     h=str.length();
   }
String g= str.substring(k,h);
char tempArray[] = g.toCharArray();
   Arrays.sort(tempArray);
     String c= new String(tempArray);
     char chtr= c.charAt(0);
     int pos= g.indexOf(chtr);

     str= swap(str, k, pos+k+1);
     k++;
     return str;
  //  return pos ;
  }
  static String swap(String str, int i, int j)
  {
      StringBuilder sb = new StringBuilder(str);
      sb.setCharAt(i, str.charAt(j));
      sb.setCharAt(j, str.charAt(i));
      return sb.toString();
  }
  String remove(String str, int k){
    String newstr;
    StringBuilder sb= new StringBuilder(str);
    sb.deleteCharAt(k);
     newstr=sb.toString();
    return newstr;
  }
  public static void main(String []args){
    String str;//,kr="";
    int n;
    Scanner scan =new Scanner(System.in);
    Hearthanzen lr=new Hearthanzen();
    str= scan.nextLine();
    n=scan.nextInt();
    int len=str.length();
    for(int i=0;i<len;i++){
      //int k=lr.replace(str,n);
        str = lr.replace(str, n, i);
      //kr=kr+ str.charAt(k);
      //str= lr.remove(str,k);
    //  len=len-1;
    //str
    }
    System.out.println(str);
  }
}
