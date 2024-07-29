package j07017;

class Pair<T, S> {
    private T first;
    private S second;

    public Pair(T first, S second) {
        this.first = first;
        this.second = second;
    }
    
    @Override
    public String toString() {
        return first + " " + second;
    }
    
    public boolean check(Integer n){
        if(n < 2) return false;
        for(int i = 2; i <= Math.sqrt(n); i++){
            if(n % i == 0) return false;
        }
        return true;
    }
    
    public boolean isPrime(){
        return check((Integer) first) && check((Integer) second);
    }
}
