import java.util.Scanner;
import java.math.BigInteger;

public class Main2{
  public static void main(String[] args){
    int Kase = 0;
    Scanner in = new Scanner(System.in);
    if(in.hasNextInt())
      Kase = in.nextInt();
    for(int I=0; I<Kase; I++){
      BigInteger a = new BigInteger(in.next());
      String c = in.next();
      BigInteger b = new BigInteger(in.next());
      BigInteger gcd = a.gcd(b);
      a = a.divide(gcd);
      b = b.divide(gcd);
      System.out.println(a + " / " + b);
     
    }
  }
}
