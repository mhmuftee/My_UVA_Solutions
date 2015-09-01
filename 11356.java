import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.Date;
import java.text.SimpleDateFormat;
import java.util.Scanner;
public class Main
{

    public static void main(String[] args)
    {

        Scanner inputStream = new Scanner(System.in);

        int caseNumber = inputStream.nextInt();
        int addValue,day = 0,month,year = 0;

        String sDate="",sMonth="";

        for( int I = 1; I<=caseNumber*2; I++)
        {
            if(inputStream.hasNextLine())
            {
                sDate = inputStream.nextLine();
                Scanner dateFixer = new Scanner(sDate);
                dateFixer.useDelimiter("-");
                if(dateFixer.hasNextInt())
                    year = dateFixer.nextInt();
                if(dateFixer.hasNext())
                    sMonth = dateFixer.next();
                if(dateFixer.hasNextInt())
                    day = dateFixer.nextInt();
            }
            if(inputStream.hasNextInt())
            {
                addValue = inputStream.nextInt();

                GregorianCalendar myCalendar = new GregorianCalendar(year,monthIndex(sMonth),day);
                myCalendar.add(Calendar.DATE,addValue);

                Date date = myCalendar.getTime();

                SimpleDateFormat ft = new SimpleDateFormat("yyyy-MMMM-dd");

    System.out.println("Case " + I/2 + ": " + ft.format(date));

            }
        }

    }

    static int monthIndex(String monthName)
    {

        switch(monthName)
        {
        case "January"   :
            return 0;
        case "February"  :
            return 1;
        case "March"     :
            return 2;
        case "April"     :
            return 3;
        case "May"       :
            return 4;
        case "June"      :
            return 5;
        case "July"      :
            return 6;
        case "August"    :
            return 7;
        case "September" :
            return 8;
        case "October"   :
            return 9;
        case "November"  :
            return 10;
        case "December"  :
            return 11;
        }
        return -1;
    }

}
