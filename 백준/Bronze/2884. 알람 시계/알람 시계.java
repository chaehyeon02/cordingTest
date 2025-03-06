import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int hour = in.nextInt();
		int min = in.nextInt();

		if (min >= 45) min -= 45;
		else {
			hour = (hour > 0) ? hour - 1 : 23;
			min = min - 45 + 60;
		}
		System.out.print(hour + " " + min);
	}
}