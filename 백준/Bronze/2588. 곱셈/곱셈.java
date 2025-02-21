import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int n1 = in.nextInt();
		int n2 = in.nextInt();
		int n, digit = 1, result = 0;

		while(n2 > 0) {
			n = n1 * (n2 % 10);
			System.out.println(n);
			result += n * digit;
			n2 /= 10;
			digit *= 10;
		}
		System.out.println(result);
    }
}