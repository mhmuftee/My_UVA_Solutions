import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Scanner;

class Main
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String later = "is not an integer with less than 100 digits.";
        while(in.hasNext())
        {
            int t = in.nextInt();
            int a = in.nextInt();
            int b = in.nextInt();
            System.out.print("(" + t + "^" + a + "-1" +")/");
            System.out.print("(" + t + "^" + b + "-1" +") ");
            BigDecimal result[] = new BigDecimal[2];
            Boolean foundResult = false;

            if(t==1 || a<b)
                foundResult = false;
            else if(a==b)
            {
                foundResult = true;
                result[0]=BigDecimal.ONE;
            }
            else if(a>b)
            {
                double numberOfDigits = (a-b)*Math.log10(t) + 1;
                int cast = (int) numberOfDigits;
                if(cast<100)
                {
                    BigDecimal tBig = new BigDecimal(t);
                    BigDecimal divider = (tBig.pow(b)).subtract(BigDecimal.ONE);
                    result = ((tBig.pow(a)).subtract(BigDecimal.ONE)).divideAndRemainder(divider);
                    if(result[0]!=null && result[1].equals(BigDecimal.ZERO))
                        foundResult = true;
                    else
                        foundResult = false;
                }
            }

            if(foundResult)
                System.out.println(result[0]);
            else
                System.out.println(later);
        }
    }
}
