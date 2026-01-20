public class LenImplimentation implements Length {
    private int len;
    LenImplimentation(int length){
        len = length;
    }

    @Override
    public int getlength() {
        return len;
    }

    @Override
    public void setlength(int l) {
        len = l;
    }

    @Override
    public String toString() {
        String lenString = "the length is equal to " + len;
        return lenString;
    }
    
}
