import java.math.BigDecimal;
import java.util.Scanner;

class Main{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    while(in.hasNext()){
      BigDecimal R = new BigDecimal(in.next());
      int n = in.nextInt();
      R = R.pow(n);
      StringBuilder outputNumber = new StringBuilder(R.toPlainString());
      if(outputNumber.charAt(0)=='0')
        outputNumber.deleteCharAt(0);
      int index = 0;
      for(int i=outputNumber.length()-1;outputNumber.charAt(i)=='0';i--)
        index=i;
      if(index>0)
        System.out.println(outputNumber.substring(0,index));
      else
        System.out.println(outputNumber);
    }
  }
}
