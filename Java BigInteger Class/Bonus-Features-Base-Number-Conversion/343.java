import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);

        while(in.hasNext())
        {
            String a = in.next();
            String b = in.next();

            String number1[] = new String[36];
            String number2[] = new String[36];
            for(int i=1; i<=36; i++)
            {
                try
                {
                    BigInteger x = new BigInteger(a,i);
                    number1[i-1]=x.toString();

                }
                catch(Exception e) {}
                try
                {
                    BigInteger y = new BigInteger(b,i);
                    number2[i-1]=y.toString();
                }
                catch(Exception e) {}
            }
            boolean found=false;
            for(int i=0; i<36; i++)
                if(number1[i]!=null && !found)
                    for(int j=0; j<36; j++)
                        if(number2[j]!=null)
                            if(number1[i].equals(number2[j]))
                            {
                                System.out.println(a +" (base " + ++i + ") = " + b + " (base "+ ++j + ")");
                                found=true;
                                break;
                            }

            if(!found)
                System.out.println(a + " is not equal to " + b + " in any base 2..36");
        }
    }
}
