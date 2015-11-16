import java.io.BufferedReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.io.InputStreamReader;
import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);
        String pascalConstant;
        String [] patterns = {
            "^-*\\+*[0-9]+\\.[0-9]+",
            "^-*\\+*[0-9]+[eE]\\-*\\+*[0-9]+",
            "^-*\\+*[0-9]+\\.[0-9]+[eE]-*\\+*[0-9]+"
        };

        while(true) {
            pascalConstant = br.readLine();
            if(pascalConstant.equals("*"))
                break;
            pascalConstant = pascalConstant.trim();
            boolean found = false;
            for(String pattern:patterns) {
                Pattern p = Pattern.compile(pattern);
                Matcher m = p.matcher(pascalConstant);

                boolean b = m.matches();
                if(b) {
                    found = true;
                    out.println(pascalConstant + " is legal.");
                    out.flush();
                }
                if(found) break;
            }
            if(!found) {
                out.println(pascalConstant + " is illegal.");
                out.flush();
            }
        }
    }
}
