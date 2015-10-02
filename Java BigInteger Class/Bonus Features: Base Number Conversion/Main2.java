import java.math.BigDecimal;
import java.util.Scanner;
import java.io.File;
import java.io.PrintWriter;	

public class Main2{
  public static void main(String[] args){
    /*
    File inp = new File("/Users/Muftee/Documents/input.txt");
    PrintWriter writer = null;
    try { 
      writer = new PrintWriter("/Users/Muftee/Documents/output.txt", "UTF-8");  
    } catch (Exception e) {
    } */   
    Scanner in = new Scanner(System.in);
    /*
    try{
      in = new Scanner(inp);
    } catch (Exception e){
    }*/
    int kase = 0;
    if(in.hasNextInt())
       kase = in.nextInt();
    for(int I=1; I<=kase; I++){
       try{
       String aa = in.next();
       String bb = in.next();
       BigDecimal a;// = in.nextBigDecimal();
       BigDecimal b; //= in.nextBigDecimal();
       if(aa.equals("."))
         a = BigDecimal.ZERO;
       else 
         a = new BigDecimal(aa);
       if(bb.equals("."))
         b = BigDecimal.ZERO;
       else
         b = new BigDecimal(bb);
       a = a.add(b);
       a = a.stripTrailingZeros();
       System.out.print(a.toPlainString());
       if(a.toPlainString().equals((a.toBigInteger()).toString()))
         System.out.print(".0");
       System.out.println();
       } catch (Exception e){
         //System.out.println("Case " + I);
       }
   }
   //writer.close();
  }
}
