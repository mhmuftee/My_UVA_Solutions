import java.math.BigDecimal;
import java.util.Scanner;
import java.io.File;
import java.io.PrintWriter;	
import java.math.MathContext;
import java.math.BigInteger;

public class Main2{
  public static void main(String[] args){
      Scanner in = new Scanner(System.in);
    int kase = 0;
    if(in.hasNextInt())
       kase = in.nextInt();
    for(int I=1; I<=kase; I++){
       try{
       String aa = in.next();
       String bb = in.next();
       BigDecimal a;
       BigDecimal b;
       if(aa.equals("."))
         a = BigDecimal.ZERO;
       else 
         a = new BigDecimal(aa);
       if(bb.equals("."))
         b = BigDecimal.ZERO;
       else
         b = new BigDecimal(bb);
       a = a.add(b);
       String s = a.toPlainString();
       int i,len = s.length();
       for(i=len-1; s.charAt(i)=='0'; i--);
       if(s.charAt(i)=='.')i++;
       System.out.println(s.substring(0,i+1));
       } catch (Exception e){
       }
   }
  }
}
