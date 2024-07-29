package b11;

import java.util.HashMap;
import java.util.Scanner;

public class B11 {

    public static boolean sodep(String s){
        for(int i = 0; i < s.length() - 1; i++){
            if(s.charAt(i) > s.charAt(i + 1)){
                return false;
            }
        }
        return true;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            String s = sc.next();
            HashMap<String, Integer> hm = new HashMap<>();
            if(sodep(s)){
                if(!hm.containsKey(s)){
                    hm.put(s, 0);
                }
                else{
                    hm.put(s, 0);
                }
            }
        }
    }
    
}