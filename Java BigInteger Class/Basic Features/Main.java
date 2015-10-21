import java.math.BigDecimal;
import java.util.Scanner;

class Main{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    while(in.hasNext()){
      BigDecimal t = in.nextBigDecimal();
      int a = in.nextInt();
      int b = in.nextInt();
      BigDecimal result = ((t.pow(a)).subtract(BigDecimal.ONE)).divide((t.pow(b)).subtract(BigDecimal.ONE));
      System.out.println(result);
    }
  }
}
