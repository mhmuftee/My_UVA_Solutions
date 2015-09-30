import java.math.BigInteger;
import java.util.Scanner;

public class Main{
   public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    while(in.hasNext()){
      String number = in.next();
      Integer oldBase = in.nextInt();
      Integer newBase = in.nextInt();
      BigInteger convertingNumber = new BigInteger(number,oldBase);
      String convertedNumber = convertingNumber.toString(newBase);
      if(convertedNumber.length()>7)
        convertedNumber = "error";
      convertedNumber = convertedNumber.toUpperCase();
      System.out.println(convertedNumber.format("%7s",convertedNumber));
    }
  }
}
