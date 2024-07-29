
import java.io.ObjectInputStream;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;

public class J07029 {

    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<Integer> ds = (ArrayList<Integer>)in.readObject();
        int[] a = new int[1000001];
        for(Integer x : ds){
            a[x]++;
        }
        int cnt = 0;
        for(int i = 1000000; i >= 0; i--){
            if(a[i] > 0 && snt(i)){
                cnt++;
                System.out.println(i + " " + a[i]);
            }
            if(cnt == 10) break;
        }
    }
    public static boolean snt(int n){
        if(n < 2) return false;
        for(int i = 2; i <= Math.sqrt(n); i++){
            if(n % i == 0) return false;
        }
        return true;
    }
}
