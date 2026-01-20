
class WholeImplimentations implements Length, Color {
    private int length;
    private String color;

    WholeImplimentations(int l, String c) {
        length = l;
        color = c;
    }

    public void setlength(int l) {
        length = l;
    }

    public int getlength() {
        return length;
    }

    public void setcolor(String c) {
        color = c;
    }

    public String getcolor() {
        return color;
    }

    public String toString() {
        String result = " the length = " + length + "\n the color = " + color;
        return result;
    }
}