public class ColorImplimentation implements Color{
    private String col;

    ColorImplimentation(String color){
        col = color;
    }

    @Override
    public void setcolor(String c) {
        col = c;
    }
    @Override
    public String getcolor() {
        return col;
    }
    
    @Override
    public String toString() {
        String returningCol = "your selected color is " + col;
        return returningCol;
    }
}
