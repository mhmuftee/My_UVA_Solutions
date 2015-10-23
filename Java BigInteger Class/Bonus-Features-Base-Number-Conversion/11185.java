import java.util.Scanner;
public class Main{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    while(in.hasNext()){
      Integer decimalNumber = in.nextInt();
      if(decimalNumber<0) break;
      else
      System.out.println(Integer.toString(decimalNumber,3));
    }
  }
}
