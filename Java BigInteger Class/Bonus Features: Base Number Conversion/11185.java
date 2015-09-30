import java.util.Scanner;
public class Main{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    while(in.hasNext()){
      Integer decimalNumber = in.nextInt();
      if(decimalNumber.equals(-1)) break;
      else
      System.out.println(decimalNumber.toString(decimalNumber,3));
    }
  }
}
