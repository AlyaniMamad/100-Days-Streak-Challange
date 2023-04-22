class ThreadDemo extends Thread
{
public
    void run()
    {
        if (currentThread().getName() == "First Thread")
        {

            for (int i = 1; i <= 5; i++)
            {
                System.out.println(currentThread().getName() + "\t" + i);
                try
                {
                    sleep(1000);
                }
                catch (Exception e)
                {
                    System.out.println(e.getMessage());
                }
            }
        }
        else if (currentThread().getName() == "Second Thread")
        {
            for (int i = 1; i <= 6; i++)
            {
                System.out.println(currentThread().getName() + "\t" + i);
                try
                {
                    sleep(2000);
                }
                catch (Exception e)
                {
                    System.out.println(e.getMessage());
                }
            }
        }
        else if (currentThread().getName() == "Third Thread")
        {
            for (

                int i = 1; i <= 7; i++)
            {
                System.out.println(currentThread().getName() + "\t" + i);
                try
                {
                    sleep(3000);
                }
                catch (Exception e)
                {
                    System.out.println(e.getMessage());
                }
            }
        }
    }

public
    static void main(String[] args)
    {
        ThreadDemo T1 = new ThreadDemo();
        ThreadDemo T2 = new ThreadDemo();
        ThreadDemo T3 = new ThreadDemo();
        T1.setName("First Thread");
        T2.setName("Second Thread");
        T3.setName("Third Thread");
        System.out.println("NAME\t\tPriority\tGroup Name");
        System.out.println(Thread.currentThread().getName() + "\t\t" +
                           Thread.currentThread().getPriority() + "\t" + Thread.currentThread().getThreadGroup());
        System.out.println(T1.getName() + "\t" + T1.getPriority() + "\t" +
                           T1.getThreadGroup());
        System.out.println(T2.getName() + "\t" + T2.getPriority() + "\t" +
                           T2.getThreadGroup());
        System.out.println(T3.getName() + "\t" + T3.getPriority() + "\t" +
                           T3.getThreadGroup());
        System.out.println(T1.getName() + " is Alive: " + T1.isAlive());
        System.out.println(T2.getName() + " is Alive: " + T2.isAlive());
        System.out.println(T3.getName() + " is Alive: " + T3.isAlive());
        T1.start();
        T2.start();
        T3.start();
        System.out.println(T1.getName() + " isAlive: " + T1.isAlive());
        System.out.println(T2.getName() + " is Alive: " + T2.isAlive());
        System.out.println(T3.getName() + " is Alive: " + T3.isAlive());
    }
}
