
import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class J07022 {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("DATA.in"));
        ArrayList<String> s = new ArrayList<>();
        while(in.hasNext()){
            String r = in.next();
            try{
                int x = Integer.parseInt(r);
            }
            catch(Exception e){
                s.add(r);
            }
        }
        Collections.sort(s);
        for(String x : s){
            System.out.print(x + " ");    
        }
    }
    
}
