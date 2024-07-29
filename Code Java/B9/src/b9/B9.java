package b9;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Collections;

public class B9 {

    public static boolean sodep(Integer n){
        int k = n % 10;
        n /= 10;
        while(n > 0){
            int p = n % 10;
            if(p < k) return false;
            k = p;
            n /= 10;
        }
        return true;
    }
    
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream sc1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream sc2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> a1 = (ArrayList<Integer>)sc1.readObject();
        ArrayList<Integer> a2 = (ArrayList<Integer>)sc2.readObject();
        int[][] a = new int[10000][2];
        for(Integer x : a1){
            if(sodep(x)) a[x][0]++;
        }
        for(Integer x : a2){
            if(sodep(x)) a[x][1]++;
        }
        for(int i = 10; i < 10000; i++){
            if(a[i][0] > 0 || a[i][1] > 0){
                System.out.println(i + " " + a[i][0] + " " + a[i][1]);
            }
        }
    }
    
}
