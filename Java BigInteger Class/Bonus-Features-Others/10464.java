import java.math.BigDecimal;
import java.util.Scanner;

public class Main{
  public static void main(String[] args){
      Scanner in = new Scanner(System.in);
    int kase = 0;
    if(in.hasNextInt())
       kase = in.nextInt();
    for(int I=1; I<=kase; I++){
      try{
        BigDecimal a = in.nextBigDecimal();
        BigDecimal b = in.nextBigDecimal();
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
