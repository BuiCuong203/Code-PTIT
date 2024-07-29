package J05033;

import java.util.*;

public class main {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        ArrayList<Time> a = new ArrayList<>();
        for(int i = 1; i <=n; i++){
            a.add(new Time(in.nextInt(), in.nextInt(), in.nextInt()));
        }
        Collections.sort(a);
        for(Time x : a){
            System.out.println(x);
        }
    }
}
