import java.math.BigInteger;
import java.util.Scanner;

class BaseConversion{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    while(true){ 
      Integer decimalNumber = in.nextInt();
      if(decimalNumber == -1) break;
      else
      System.out.println(decimalNumber.toString(decimalNumber,3));
    }
  }
}
