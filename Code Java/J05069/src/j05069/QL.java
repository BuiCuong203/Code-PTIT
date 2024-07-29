package j05069;

public class QL {
    private CLB clb;
    private Match match;

    public QL(CLB clb, Match match) {
        this.clb = clb;
        this.match = match;
    }

    @Override
    public String toString() {
        return match.getMa() + " " + clb.getTen() + " " + match.getCdv() * clb.getVe();
    }
}
