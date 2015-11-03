import java.math.BigInteger;
import java.util.Scanner;
import java.util.Stack;

public class Main{
  public static void main(String[] args){

    Scanner in = new Scanner(System.in);

    while(in.hasNext()){

      String num = in.next();

      if(num.equals("*")) 
        break;
      String finalString = "";
      String finalNumber = "";
      String ss = "";
      try{
        BigInteger b = new BigInteger(num,10);

        Stack<Character> S = new Stack<Character>();

        while(!BigInteger.ZERO.equals(b)){

          BigInteger result[] = b.divideAndRemainder(BigInteger.valueOf(26));

          int aa=0;
          if(result[1].intValue()==0)
            aa = 96 + 26 + result[1].intValue();
          else
            aa = 96 + result[1].intValue();

          char c = (char)aa;

          S.push(c);

          b = result[0];
        }

      while(!S.empty())
        finalString = finalString.concat(String.valueOf((char)S.pop()));
      ss = num;
      } catch(Exception e){

          BigInteger sum = BigInteger.ZERO;

          for(int i=0;i<num.length();i++){

	    int c = num.charAt(i)-96;

   	     BigInteger a = BigInteger.valueOf(c);

             BigInteger b = BigInteger.valueOf(26);

             b = b.pow(num.length()-i-1);

             a = a.multiply(b);

             sum = sum.add(a);
          }

          ss = sum.toString();

        finalString = num;
      }

      int len=ss.length()%3;

      int i;

      if(len==0)
        i=0;
      else{
        i=len;
        finalNumber = finalNumber.concat(ss.substring(0,len));
      }

      for(;i<ss.length();i+=3){
        if(i>0)
          finalNumber = finalNumber.concat(",");
        finalNumber = finalNumber.concat(ss.substring(i,i+3));         
      }
      String output = String.format("%-21s %s",finalString,finalNumber);
      System.out.println(output);
    }

  }

}
