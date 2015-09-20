import java.text.SimpleDateFormat;
import java.util.Scanner;
import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.Date;

class Main{

  public static void main(String args[]){

    Scanner input = new Scanner(System.in);

    int kase = input.nextInt();

    String sDate = "";


    for(int I=1; I<=kase; I++){
      if(input.hasNext())
        sDate = input.next();
      String sDay = sDate.substring(0,2);
      String sMonth = sDate.substring(2,4);
      String sYear = sDate.substring(4,8);


      Integer month = new Integer(sDay);
      Integer day = new Integer(sMonth);
      Integer year = new Integer(sYear);

      GregorianCalendar myCalendar = new GregorianCalendar(year,month-1,day);

      myCalendar.add(Calendar.DATE,280);

      SimpleDateFormat ft = new SimpleDateFormat("MM/dd/yyyy");

      System.out.println(I + " " + ft.format(myCalendar.getTime()) + " " + printMonth(myCalendar));

    }

  }


  static String printMonth(GregorianCalendar myCalendar){

    String s = "" ;

    SimpleDateFormat ft = new SimpleDateFormat("MMdd");
    String sDate = ft.format(myCalendar.getTime());

    int date = Integer.valueOf(sDate);

    if(date>=0101 && date <= 120)
      s = "capricorn";
    else if(date>=121 && date<=219)
      s = "aquarius";
    else     if(date>=220 && date <=320)
      s =  "pisces";
    else     if(date>=321 && date <=420)
      s =  "aries";
    else     if(date>=421 && date <=521)
      s = "taurus";
    else     if(date>=522 && date <=621)
      s =  "gemini";
    else     if(date>=622 && date <=722)
      s =  "cancer";
    else     if(date>=723 && date <=821)
      s =  "leo";
    else     if(date>=822 && date <=923)
      s =  "virgo";
    else     if(date>=924 && date <=1023)
      s =  "libra";
    else     if(date>=1024 && date <=1122)
      s = "scorpio";
    else     if(date>=1123 && date <=1222)
      s = "sagittarius";
    else     if(date>=1223 && date <=1231)
      s = "capricorn";
    return s;
  }

}
