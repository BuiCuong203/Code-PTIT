package j05070;

public class QL {
    private CLB clb;
    private Match match;

    public QL(CLB clb, Match match) {
        this.clb = clb;
        this.match = match;
    }
    
    public int getDt(){
        return match.getCdv() * clb.getVe();
    }
    
    @Override
    public String toString() {
        return match.getMa() + " " + clb.getTen() + " " + getDt();
    }
}
