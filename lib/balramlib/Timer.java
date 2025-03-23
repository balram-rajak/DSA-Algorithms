package balramlib;


public class Timer implements AutoCloseable{

    private Long start;

    public Timer(){
        start = System.currentTimeMillis();
    }

    @Override
    public void close(){
        System.err.println("Execution time: "+(System.currentTimeMillis() - start));
    }
}