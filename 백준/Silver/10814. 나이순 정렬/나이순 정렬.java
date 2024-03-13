
import java.util.Arrays;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String[][] arr = new String[n][2];

    for (int i = 0; i < n; i++) {
      String age = sc.next();
      String name = sc.next();

      arr[i][0] = age;
      arr[i][1] = name;
    }
    sc.close();

    Arrays.sort(arr, (e1, e2) -> {

      int a = Integer.parseInt(e1[0]);
      int b = Integer.parseInt(e2[0]);
      return a - b;
    });

    for (int i = 0; i < n; i++) {
      System.out.println(arr[i][0] + " " + arr[i][1]);
    }

  }
}
