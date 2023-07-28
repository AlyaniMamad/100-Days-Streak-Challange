abstract class Bike {
    abstract void run();
}

class absclass extends Bike {
    void run() {
        System.out.println("running safely");
    }

    public static void main(String args[]) {
        Bike obj = new absclass();
        obj.run();
    }
}