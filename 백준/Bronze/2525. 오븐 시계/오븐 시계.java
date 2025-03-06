import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int hour = in.nextInt();
		int min = in.nextInt();
		int time = in.nextInt();

		min += time;
		if(min >= 60) {
			hour += min / 60;
			min = min % 60;
		}
		if(hour > 23) hour -= 24;
		System.out.println(hour + " " + min);
	}
}