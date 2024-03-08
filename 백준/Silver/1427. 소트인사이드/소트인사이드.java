
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		String str = sc.next();
		int n = Integer.parseInt(str);

		sc.close();

		ArrayList<Integer> list = new ArrayList<Integer>();

		while (n > 0) {
			int tmp = n % 10;
			list.add(tmp);
			n /= 10;
		}

		list.sort(Collections.reverseOrder());

		for (int i = 0; i < list.size(); i++) {
			System.out.print(list.get(i));
		}

	}

}
