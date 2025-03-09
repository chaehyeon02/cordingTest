import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int n = in.nextInt();
		String s = in.next();
		int sum = 0;

		for(int i = 0; i < n; i++) {
			sum += (int)s.charAt(i) - 48;
		}
		System.out.print(sum);
	}
}