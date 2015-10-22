import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Scanner;

class Main{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    String later = "is not an integer with less than 100 digits.";
    while(in.hasNext()){
      BigDecimal t = in.nextBigDecimal();
      int a = in.nextInt();
      int b = in.nextInt();
      BigDecimal divider = (t.pow(b)).subtract(BigDecimal.ONE);
      BigDecimal result[] = ((t.pow(a)).subtract(BigDecimal.ONE)).divideAndRemainder(divider);
      System.out.print("(" + t + "^" + a + "-1" +")/");
      System.out.print("(" + t + "^" + b + "-1" +") ");
      if(result[0].toString().length()<100 && result[1].equals(BigDecimal.ZERO))
         System.out.println(result[0]);
      else
         System.out.println(later);
    }
  }
}
