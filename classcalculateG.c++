public class CalculateG {

    private static final double GRAVITY = -9.81;
    private static final double FALLING_TIME = 30;
    private static final double INITIAL_VELOCITY = 0.0;
    private static final double INITIAL_POSITION = 0.0;

    public double calculatePosition(double time) {
        return 0.5 * GRAVITY * Math.pow(time, 2) + INITIAL_VELOCITY * time + INITIAL_POSITION;
    }

    public double calculateVelocity(double time) {
        return GRAVITY * time + INITIAL_VELOCITY;
    }

    public double multiply(double a, double b) {
        return a * b;
    }

    public double powerToSquare(double value) {
        return Math.pow(value, 2);
    }

    public double summation(double a, double b) {
        return a + b;
    }

    public void outline(double result) {
        System.out.println("The result is: " + result);
    }

    public static void main(String[] args) {
        CalculateG calculator = new CalculateG();

        double finalPosition = calculator.calculatePosition(FALLING_TIME);
        double finalVelocity = calculator.calculateVelocity(FALLING_TIME);

        calculator.outline(finalPosition);
        calculator.outline(finalVelocity);
    }
}
 
