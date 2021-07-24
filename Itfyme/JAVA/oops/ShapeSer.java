public class Shape {
    String color;
    boolean filled;
    public Shape(String color, boolean filled) {
        this.color = color;
        this.filled = filled;
    }
    public Shape () {
        
    }
    public String getColor() {
        return color;
    }
    public void setColor(String color) {
        this.color = color;
    }
    public boolean isFilled() {
        return filled == true;
    }
    public void setFilled(boolean filled) {
        this.filled = filled;
    }
    
    @Override
    public String toString() {
        return "Shape [color=" + color + ", filled=" + filled + "]";
    }
    
    
}