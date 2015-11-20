import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out = new PrintWriter(System.out);
		String equation;
		boolean newLine = false;
		while ((equation = br.readLine()) != null) {
			if (newLine)
				out.println();
			newLine = true;
			equation = equation.trim();
			equation = equation.replaceAll("\\s*", "");
			equation = equation.replaceFirst("^\\+", "");
			equation = equation.replaceAll("\\-\\+", "-");
			equation = equation.replaceAll("\\+\\+", "+");
			equation = equation.replaceAll("\\*\\+", "*");
			equation = equation.replaceAll("\\/\\+", "/");
			equation = equation.replaceAll("^\\-", "!");
			equation = equation.replaceAll("\\-\\-", "@");
			equation = equation.replaceAll("\\*\\-", ",");
			equation = equation.replaceAll("\\+\\-", "%");
			equation = equation.replaceAll("\\/\\-", "&");
			equation = equation.replaceAll("\\-", " - ");
			equation = equation.replaceAll("\\+", " + ");
			equation = equation.replaceAll("\\*", " * ");
			equation = equation.replaceAll("\\/", " / ");
			equation = equation.replaceAll("^\\!", "-");
			equation = equation.replaceAll("@", " - -");
			equation = equation.replaceAll("\\,", " * -");
			equation = equation.replaceAll("&", " / -");
			equation = equation.replaceAll("%", " + -");
			equation = equation.replaceAll("\\=", " = ");
			equation = equation.replaceAll("\\s+", " ");
			out.println(equation);

			Pattern p = Pattern
					.compile("\\-?[0-9]+\\s\\*\\s\\-?[0-9]+|\\-?[0-9]+\\s\\/\\s\\-?[0-9]+");
			Matcher m = p.matcher(equation);

			while (m.find()) {
				String temp = m.group();
				equation = m.replaceFirst(convert(temp));
				m = p.matcher(equation);
				out.println(equation);
			}
			p = Pattern
					.compile("\\-?[0-9]+\\s\\+\\s\\-?[0-9]+|\\-?[0-9]+\\s\\-\\s\\-?[0-9]+");
			m = p.matcher(equation);

			while (m.find()) {
				String temp = m.group();
				equation = m.replaceFirst(convert(temp));
				m = p.matcher(equation);
				out.println(equation);
			}
		}
		out.close();
	}

	static String convert(String s) {
		String[] numbers = s.split(" \\* | \\/ | \\+ | \\- ");
		Integer returnValue = null;
		if (s.contains(" * "))
			returnValue = Integer.parseInt(numbers[0])
					* Integer.parseInt(numbers[1]);
		if (s.contains(" / "))
			returnValue = Integer.parseInt(numbers[0])
					/ Integer.parseInt(numbers[1]);
		if (s.contains(" + "))
			returnValue = Integer.parseInt(numbers[0])
					+ Integer.parseInt(numbers[1]);
		if (s.contains(" - "))
			returnValue = Integer.parseInt(numbers[0])
					- Integer.parseInt(numbers[1]);
		return String.valueOf(returnValue);
	}
}
