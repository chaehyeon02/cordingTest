import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
		Scanner in = new Scanner(System.in);

		int t = in.nextInt();
		for(int i = 1; i <= t; i++) {
			int a = in.nextInt();
			int b = in.nextInt();
			System.out.println("Case #" + i + ": " + (a + b));
		}
	}
}