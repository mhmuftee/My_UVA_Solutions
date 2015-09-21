import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.Date;
import java.util.Scanner;
import java.text.SimpleDateFormat;

public class Main{
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    int addValue,month,day,year;

    while(input.hasNextInt()){

	  addValue = input.nextInt();

      day = input.nextInt();

      month = input.nextInt();

      year = input.nextInt();

      if(addValue==0) break;

      GregorianCalendar myCalendar = new GregorianCalendar(year,month-1,day);

      myCalendar.add(Calendar.DATE,addValue);

      SimpleDateFormat ft = new SimpleDateFormat("d M yyyy");

      System.out.println(ft.format(myCalendar.getTime()));

    }
  }
}
