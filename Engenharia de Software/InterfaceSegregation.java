public interface Workable {
    void work();
}

public interface Eatable {
    void eat();
}

public interface Sleepable {
    void sleep();
}

public class HumanWorker implements Workable, Eatable, Sleepable {
    @Override
    public void work() { /*...*/ }

    @Override
    public void eat() { /*...*/ }

    @Override
    public void sleep() { /*...*/ }
}

public class RobotWorker implements Workable {
    @Override
    public void work() { /*...*/ }
}
