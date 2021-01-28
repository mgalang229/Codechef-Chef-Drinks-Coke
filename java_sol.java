import java.io.*;
import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int tt = in.nextInt();
    for (int qq = 1; qq <= tt; qq++) {
      int n = in.nextInt();
      int m = in.nextInt();
      int k = in.nextInt();
      int l = in.nextInt();
      int r = in.nextInt();
      Vector<Integer> c = new Vector<Integer>(n);
      Vector<Integer> p = new Vector<Integer>(n);
      for (int i = 0; i < n; i++) {
        int cur = in.nextInt();
        int pr = in.nextInt();
        c.add(cur);
        p.add(pr);
      }
      int price = Integer.MAX_VALUE;
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          if (c.get(i) >= k - 1 && c.get(i) <= k + 1) {
            c.set(i, k);
          } else if (c.get(i) > k + 1) {
            c.set(i, c.get(i) - 1);
          } else if (c.get(i) < k - 1) {
            c.set(i, c.get(i) + 1);
          }
        }
        if (c.get(i) >= l && c.get(i) <= r && p.get(i) < price) {
          price = p.get(i);
        }
      }
      System.out.println(price == Integer.MAX_VALUE ? -1 : price);
    }
  }
}
