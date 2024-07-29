package j05072;

public class KQ {
    private TP tp;
    private Call call;

    public KQ(TP tp, Call call) {
        this.tp = tp;
        this.call = call;
    }
    
    public String getTp(){
        if(call.getSdt().charAt(0) != '0') return "Noi mang";
        return tp.getTinh();
    }
    
    public long getTg(){
        long h1 = Long.parseLong(call.getStart().substring(0, 2));
        long h2 = Long.parseLong(call.getEnd().substring(0, 2));
        long m1 = Long.parseLong(call.getStart().substring(3));
        long m2 = Long.parseLong(call.getEnd().substring(3));
        long tg = (h2 * 60 + m2) - (h1 * 60 + m1);
        if(getTp() == "Noi mang"){
            if(tg % 3 == 0) return tg / 3;
            else return (tg / 3) + 1;
        }
        else return tg;
    }
    
    public long getCuoc(){
        if(getTp() == "Noi mang"){
            return getTg() * 800;
        }
        return getTg() * tp.getGiacuoc();
    }

    @Override
    public String toString() {
        return call.getSdt() + " " + getTp() + " " + getTg() + " " + getCuoc();
    }
    
}
