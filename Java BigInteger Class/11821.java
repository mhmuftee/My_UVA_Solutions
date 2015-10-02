import java.math.BigDecimal;
import java.util.Scanner;

public class Main3{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int kase = 0;
    BigDecimal sum = BigDecimal.ZERO;
    kase = in.nextInt();
    while(kase>0){
      BigDecimal number = in.nextBigDecimal();
      if(number.equals(BigDecimal.ZERO)){
        kase--;
        String s = sum.toPlainString();
        int i,len = s.length();
        for(i = len-1; s.charAt(i)=='0';i--);
        if(s.charAt(i)=='.')i--;
        System.out.println(s.substring(0,i+1));
        sum = BigDecimal.ZERO;
      }
      else {
        sum = sum.add(number);
      }
    }  
  }
}
