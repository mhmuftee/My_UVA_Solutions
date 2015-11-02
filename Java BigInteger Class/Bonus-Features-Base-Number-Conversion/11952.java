import java.util.Scanner;
import java.math.BigInteger;

public class Main{
  public static void main(String[] args){

    Scanner in = new Scanner(System.in);

    int kase = 0;
    if(in.hasNextInt())
    kase = in.nextInt();
    String equation = in.nextLine();

    for(int K=1;K<=kase;K++){
      equation = in.nextLine();
      Scanner numberExtractor = new Scanner(equation);
      String numbers[] = new String[5];

      int i = 0;
      while(numberExtractor.hasNext())
        numbers[i++] = numberExtractor.next();

      Boolean found = false;

      for(int base=1;!found && base<=18;base++)
      try{
        BigInteger s = new BigInteger(numbers[4],base);
        if(numbers[4].equals(s.toString(base))){
          try{
            BigInteger a = new BigInteger(numbers[0],base);
            if(numbers[0].equals(a.toString(base))){
              try{
                BigInteger b = new BigInteger(numbers[2],base);
                if(numbers[2].equals(b.toString(base)))
                  if(s.equals(a.add(b))){
                    System.out.println(base);
                    found = true;
                  }
              } catch (Exception e){}
            }
          } catch (Exception e){}
        }
      } catch(Exception e) {}

      if(!found){
        if(numbers[4].equals(numbers[0].concat(numbers[2])))
          System.out.println("1");
        else
          System.out.println("0");
      }
    }
  }
}
