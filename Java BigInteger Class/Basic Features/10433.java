import java.util.Scanner;
import java.math.BigInteger;

public class Main{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    while(in.hasNext()){
      String number = in.next();
      BigInteger squaredNumber = new BigInteger(number);
      squaredNumber = squaredNumber.multiply(squaredNumber);
      String sN = squaredNumber.toString();
      if(sN.length()>number.length())
      sN = sN.substring(sN.length()-number.length());
      if(sN.equals(number))
        System.out.println("Automorphic number of " + number.length() + "-digit.");
      else
        System.out.println("Not an Automorphic number.");
    }
  }
}
