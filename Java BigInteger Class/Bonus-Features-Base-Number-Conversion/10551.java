import java.math.BigInteger;
import java.util.Scanner;

public class Main{
   public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    while(in.hasNextInt()){
      Integer base = in.nextInt();
      if(base==0) break;
      BigInteger p = new BigInteger(in.next(),base);
      BigInteger m = new BigInteger(in.next(),base);
      System.out.println((p.mod(m)).toString(base));
    }
  }
}
