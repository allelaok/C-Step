import java.util.Arrays;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String[] arr = new String[n];

		for (int i = 0; i < n; i++) {
			String tmp = sc.next();
			arr[i] = tmp;
		}

		Arrays.sort(arr, (e1, e2) -> {
			if(e1.equals(e2)) {
				return 0;
			}
							
			else if(e1.length() == e2.length()) {
				for(int i = 0;i < e1.length(); i++) {
					char c1 = e1.charAt(i);
					char c2 = e2.charAt(i);
					if(c1 == c2)
						continue;
					else
						return c1 - c2;
				}
				return 0;
			}
			else
				return (e1.length() - e2.length());
		});
		
		for(int i = 0; i < n; i++) {
			if(i - 1 >= 0)
			 if (arr[i - 1].equals(arr[i]))
					 continue;			
			
			System.out.println(arr[i]);
		}

	}

}
