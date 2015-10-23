import java.math.BigInteger;
import java.util.Scanner;

public class Main{
   public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    while(in.hasNext()){
      Integer oldBase = in.nextInt();
      Integer newBase = in.nextInt();
      String number = in.next();
      try{
        BigInteger convertingNumber = new BigInteger(number,oldBase);
        String convertedNumber = (convertingNumber.toString(newBase)).toUpperCase();
        System.out.println(number + " base " + oldBase + " = " + convertedNumber
          + " base " + newBase);
      } catch ( Exception e){
          System.out.println(number + " is an illegal base " + oldBase + " number");
      }
    }
  }
}
