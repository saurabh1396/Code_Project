import java.io.*;
import java.util.*;
class Largesti{

   int replace(String str,int n){

   if(n>str.length()){
     n=str.length();
   }
String g= str.substring(0,n);
char tempArray[] = g.toCharArray();
   Arrays.sort(tempArray);
     String c= new String(tempArray);
     char ch= c.charAt(0);
     int pos= str.indexOf(ch);
    return pos ;
  }
  String remove(String str, int k){
    String ktr;
    StringBuilder sb= new StringBuilder(str);
    sb.deleteCharAt(k);
     ktr=sb.toString();
    return ktr;
  }
  public static void main(String []args){
    String str,kr="";int n;
    Scanner in =new Scanner(System.in);
    Largesti lr=new Largesti();
    str= in.nextLine();
    n=in.nextInt();
    int l=str.length();
    for(int i=0;i<l;i++){
      int k=lr.replace(str,n);
      kr=kr+ str.charAt(k);
      str= lr.remove(str,k);
      //l=l-1;
    }
    System.out.println(kr);
  }
}
