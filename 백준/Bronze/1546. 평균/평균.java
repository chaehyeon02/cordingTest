import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		float max = 0, result = 0;
		int cnt = in.nextInt();
		float[] score = new float[cnt];
		for(int i = 0; i < cnt; i++) {
			score[i] = in.nextInt();
			if(score[i] > max) max = score[i];
		}

		for(int i = 0; i < cnt; i++) 
			result += (score[i] * 100) / max;
		System.out.println(result / cnt);
	}
}