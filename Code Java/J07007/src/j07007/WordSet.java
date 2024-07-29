package j07007;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.TreeSet;

class WordSet{
    private TreeSet<String> a;
    
    public WordSet(String fileName) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("VANBAN.in"));
        a = new TreeSet<>();
        while(sc.hasNext()){
            String tmp = sc.nextLine();
            String[] arr = tmp.toLowerCase().split("\\s+");
            for(String x : arr){
                a.add(x);
            }
        }
    }

    @Override
    public String toString() {
        String s = "";
        for(String x : a){
            s += x + "\n";
        }
        return s;
    }
    
}