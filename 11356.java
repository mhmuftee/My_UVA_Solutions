import java.util.*;

public class A
{

    public static void main(String[] args)
    {

        Scanner inputStream = new Scanner(System.in);

        int caseNumber = inputStream.nextInt();
        int addValue,day = 0,month,year = 0;

        String date="",mont="";

        for( int I = 1; I<=caseNumber*2; I++)
        {
            if(inputStream.hasNextLine())
            {
                date = inputStream.nextLine();
                Scanner dateFixer = new Scanner(date);
                dateFixer.useDelimiter("-");
                if(dateFixer.hasNextInt())
                    year = dateFixer.nextInt();
                if(dateFixer.hasNext())
                    mont = dateFixer.next();
                if(dateFixer.hasNextInt())
                    day = dateFixer.nextInt();
            }
            if(inputStream.hasNextInt())
            {
                addValue = inputStream.nextInt();

                GregorianCalendar myCalendar = new GregorianCalendar(year,monthIndex(mont),day);
                myCalendar.add(Calendar.DATE,addValue);

    System.out.print("Case " + I/2 + ": ");
    System.out.print(myCalendar.get(Calendar.YEAR) + "-" + getMonth(myCalendar.get(Calendar.MONTH)) + "-");
    Formatter ft = new Formatter();
    int iDay = myCalendar.get(Calendar.DATE);
    ft.format("%02d",iDay);
    System.out.println(ft);
    ft.close();
                //System.out.println(date + " " + addValue + " " + year + " " + monthIndex(mont) + " " + day );
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

    static String getMonth(int monthIndex)
    {
        switch(monthIndex)
        {
        case 0:
            return "January";
        case 1:
            return "February";
        case 2:
            return "March";
        case 3:
            return"April";
        case 4:
            return "May";
        case 5:
            return "June";
        case 6:
            return "July";
        case 7:
            return "August";
        case 8:
            return "September";
        case 9:
            return"October";
        case 10:
            return "November";
        case 11:
            return "December";
        }
        return null;
    }




}
