import java.math.BigInteger;
import java.util.Scanner;

class Main {

    static Boolean isdivisible(BigInteger year,BigInteger number) {
        if(BigInteger.ZERO.equals(year.mod(number)))
            return true;
        else
            return false;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Boolean nextLine = false;
        while(in.hasNext()) {
            Boolean isLeapYear = false;
            Boolean isHuluculu = false;
            Boolean isBulukulu = false;
            BigInteger year = in.nextBigInteger();
            BigInteger four = new BigInteger("4");
            BigInteger hundred = new BigInteger("100");
            BigInteger fourHundred = new BigInteger("400");
            BigInteger huluculu = new BigInteger("15");
            BigInteger bulukulu = new BigInteger("55");

            if(nextLine)
                System.out.println();

            if((isdivisible(year,four) && !isdivisible(year,hundred)) || isdivisible(year,fourHundred))
                isLeapYear = true;

            if(isdivisible(year,huluculu))
                isHuluculu = true;

            if(isdivisible(year,bulukulu) && isLeapYear)
                isBulukulu = true;

            if(isLeapYear)
                System.out.println("This is leap year.");
            if(isHuluculu)
                System.out.println("This is huluculu festival year.");
            if(isBulukulu)
                System.out.println("This is bulukulu festival year.");
            if(!isLeapYear && !isHuluculu && !isBulukulu)
                System.out.println("This is an ordinary year.");
            nextLine = true;
        }
    }
}
