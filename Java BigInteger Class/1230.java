import java.math.BigInteger;
import java.util.Scanner;

public class Main3{
  public static void main(String[] args){
    int kase = 0;
    Scanner in = new Scanner(System.in);
    if(in.hasNextInt())
      kase = in.nextInt();
     for(int I=0; I<kase; I++){
       BigInteger p = in.nextBigInteger();
       BigInteger exponent = in.nextBigInteger();
       BigInteger m = in.nextBigInteger();
       p = p.modPow(exponent,m);
       System.out.println(p);
     }
    kase = in.nextInt();
  }
}
