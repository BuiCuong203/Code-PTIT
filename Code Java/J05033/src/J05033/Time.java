package J05033;

class Time implements Comparable<Time>{
    private int h, m, s;
    
    public Time(int h, int m, int s){
        this.h = h;
        this.m = m;
        this.s = s;
    }
    
    @Override
    public String toString(){
        return h + " " + m + " " + s;
    }

    public int getH() {
        return h;
    }

    public int getM() {
        return m;
    }

    public int getS() {
        return s;
    }
    
    @Override
    public int compareTo(Time o){
        return (getH() * 3600 + getM() * 60 + getS()) - (o.getH() * 3600 + o.getM() * 60 + o.getS());
    }
}
