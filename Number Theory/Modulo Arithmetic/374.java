import java.util.Scanner;
import java.math.BigInteger;
 
public class Main{
  public static void main(String[] args){
        Scanner in = new Scanner(System.in);
 
        while(in.hasNext()){
          BigInteger B = in.nextBigInteger();
          BigInteger P = in.nextBigInteger();
          BigInteger M = in.nextBigInteger();
 
          System.out.println(B.modPow(P,M));
   }
 }
}
