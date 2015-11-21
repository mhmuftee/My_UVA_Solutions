import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.Comparator;
import java.util.HashMap;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out = new PrintWriter(System.out);

		String line;
		boolean newLine = false;

		while ((line = br.readLine()) != null) {
			String[] temp = line.split("\\s+");
			int T = Integer.parseInt(temp[0]);
			int G = Integer.parseInt(temp[1]);
			if (T == 0 && G == 0)
				break;
			HashMap<String, Integer> mappingNames = new HashMap<>();
			Team[] teams = new Team[T];
			for (int I = 0; I < T; I++) {
				String teamName = br.readLine();
				mappingNames.put(teamName, I);
				Team t = new Team(teamName);
				teams[I] = t;
			}

			for (int J = 1; J <= G; J++) {
				line = br.readLine();
				temp = line.split("\\s+");
				Team t1 = teams[mappingNames.get(temp[0])];
				Team t2 = teams[mappingNames.get(temp[4])];
				int goalsByt1 = Integer.parseInt(temp[1]);
				int goalsByt2 = Integer.parseInt(temp[3]);
				t1.numberOfGamesPlayed += 1;
				t2.numberOfGamesPlayed += 1;
				t1.goalDifference += (goalsByt1 - goalsByt2);
				t2.goalDifference += (goalsByt2 - goalsByt1);
				t1.numberOfScoredGoals += goalsByt1;
				t2.numberOfScoredGoals += goalsByt2;
				t1.numberOfSufferedGoals += goalsByt2;
				t2.numberOfSufferedGoals += goalsByt1;
				if (goalsByt1 == goalsByt2) {
					t1.numberOfPoints += 1;
					t2.numberOfPoints += 1;
				} else if (goalsByt1 > goalsByt2)
					t1.numberOfPoints += 3;
				else if (goalsByt1 < goalsByt2)
					t2.numberOfPoints += 3;
			}

			Arrays.sort(teams, new Comparator<Team>() {

				@Override
				public int compare(Team t1, Team t2) {
					int returnValue = 0;
					if (t1.numberOfPoints > t2.numberOfPoints)
						returnValue = -1;
					else if (t1.numberOfPoints < t2.numberOfPoints)
						returnValue = 1;
					else if (t1.numberOfPoints == t2.numberOfPoints) {
						if (t1.goalDifference > t2.goalDifference)
							returnValue = -1;
						else if (t1.goalDifference < t2.goalDifference)
							returnValue = 1;
						else if (t1.goalDifference == t2.goalDifference) {
							if (t1.numberOfScoredGoals > t2.numberOfScoredGoals)
								returnValue = -1;
							else if (t1.numberOfScoredGoals < t2.numberOfScoredGoals)
								returnValue = 1;
							else if (t1.numberOfScoredGoals == t2.numberOfScoredGoals)
								returnValue = t1.name.compareToIgnoreCase(t2.name);
						}
					}
					return returnValue;
				}
			});
			if (newLine)
				out.println();
			newLine = true;
			out.println(String.format("%2d.%s", 1, teams[0]));

			for (int K = 1; K < teams.length; K++) {
				if (teams[K - 1].numberOfPoints == teams[K].numberOfPoints
						&& teams[K - 1].goalDifference == teams[K].goalDifference
						&& teams[K - 1].numberOfScoredGoals == teams[K].numberOfScoredGoals)
					out.println(String.format("   %s", teams[K]));
				else
					out.println(String.format("%2d.%s", K + 1, teams[K]));
			}
		}
		out.close();
		br.close();
	}
}

class Team {
	String name;
	Integer position;
	Integer numberOfPoints;
	Integer goalDifference;
	Integer numberOfGamesPlayed;
	Integer numberOfScoredGoals;
	Integer numberOfSufferedGoals;
	Float percentageOfEarnedPoints;

	Team(String name) {
		this.name = name;
		this.position = 0;
		this.numberOfPoints = 0;
		this.goalDifference = 0;
		this.numberOfGamesPlayed = 0;
		this.numberOfScoredGoals = 0;
		this.numberOfSufferedGoals = 0;
		this.percentageOfEarnedPoints = (float) 0.0;
	}

	@Override
	public String toString() {
		this.percentageOfEarnedPoints = 1
				- (float) (this.numberOfGamesPlayed * 3 - this.numberOfPoints) / (this.numberOfGamesPlayed * 3);
		String percentString = "N/A";
		percentString = String.format("%.2f", percentageOfEarnedPoints * 100);
		if (percentString.equals("NaN"))
			percentString = "N/A";
		String printString = String.format("%16s%4d%4d%4d%4d%4d%7s", name, numberOfPoints, numberOfGamesPlayed,
				numberOfScoredGoals, numberOfSufferedGoals, goalDifference, percentString);
		return printString;
	}
}
