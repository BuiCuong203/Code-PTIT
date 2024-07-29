package j07030;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.TreeSet;

public class J07030 {
    
    public static boolean snt(int n){
        if(n < 2) return false;
        for(int i = 2; i <= Math.sqrt(n); i++){
            if(n % i == 0) return false;
        }
        return true;
    }

    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream sc1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream sc2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> a1 = (ArrayList<Integer>)sc1.readObject();
        ArrayList<Integer> a2 = (ArrayList<Integer>)sc2.readObject();
        TreeSet<Integer> ts1 = new TreeSet<>();
        TreeSet<Integer> ts2 = new TreeSet<>();
        for(Integer x : a1){
            if(snt(x)) ts1.add(x);
        }
        for(Integer x : a2){
            if(snt(x)) ts2.add(x);
        }
        for(Integer x : ts1){
            if(ts1.contains(1000000 - x) && !ts2.contains(1000000 - x) && !ts2.contains(x)){
                if(x < 1000000 - x) System.out.println(x + " " + (1000000 - x));
            }
        }
    }
    
}
