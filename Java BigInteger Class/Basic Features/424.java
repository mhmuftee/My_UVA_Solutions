import java.util.Scanner;
import java.math.BigInteger;

 class Main
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);

        BigInteger result=BigInteger.ZERO;

        BigInteger number = in.nextBigInteger();

        while(!number.equals(BigInteger.ZERO)){
          result=result.add(number);number = in.nextBigInteger();}

        System.out.println(result);
    }
}
