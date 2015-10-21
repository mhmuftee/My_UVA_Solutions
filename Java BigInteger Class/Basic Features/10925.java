import java.math.BigInteger;
import java.util.Scanner;

class Main{
  public static void main(String[] args){
    //System.out.println("Hi");
    Scanner in = new Scanner(System.in);
    int Bill = 0;
    while(in.hasNextInt()){
      int N = in.nextInt();
      Bill++;
      BigInteger F = in.nextBigInteger();
      BigInteger sum = BigInteger.ZERO;
      if(N==0) break;
      for(int i=0; i<N;i++){
         sum=sum.add(in.nextBigInteger());
      }
      System.out.println("Bill #" + Bill + " costs " + sum + ": each friend should pay " + sum.divide(F));
      System.out.println();
    }
  }
}
