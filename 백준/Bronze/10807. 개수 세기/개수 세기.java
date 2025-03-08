import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int cnt, v, result = 0;
		cnt = in.nextInt();
		int[] numbers = new int[cnt];

		for(int i = 0; i < cnt; i++) numbers[i] = in.nextInt();

		v = in.nextInt();
		for(int i = 0; i < cnt; i++) {
			if(numbers[i] == v) result++;
		}
		System.out.print(result);
	}
}