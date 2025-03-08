import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int n = in.nextInt();
		int m = in.nextInt();
		int[] baskets = new int[n + 1];
		for(int i = 0; i <= n; i++) baskets[i] = i;

		for(int i = 0; i < m; i++) {
			int a = in.nextInt();
			int b = in.nextInt();

			while(a < b) {
				int tmp = baskets[a];
				baskets[a] = baskets[b];
				baskets[b] = tmp;
				a++;
				b--;
			}
		}

		for(int i = 1; i <= n; i++) System.out.print(baskets[i] + " ");
	}
}