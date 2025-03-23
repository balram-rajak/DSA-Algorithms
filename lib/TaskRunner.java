import java.io.*;
import java.lang.*;
import java.util.Optional;

public class TaskRunner {
    

    public static void main(String[] args){

        if(args != null && args.length > 0){

            String filePath= args[0];
            String compileOutDir = args[1];
            String inputFile = args[2];
            String outputFile = args[3];

            System.out.println("Running task runner");

            System.out.println(filePath);

            try{

                if(filePath != null && !filePath.isEmpty()){
                    
                    File file = new File(filePath);
                    String fileBaseNameNoExtension = file.getName().replaceFirst("[.][^.]+$","");
                    String[] tokens = filePath.split("[.]");
                
                    String fileExtension = tokens[tokens.length-1];

                    String compileCommand = null;
                    String runCommand = null;
                    if(fileExtension.equals("cpp")){
                        
                        compileCommand = String.format("g++ -std=c++14 -O2 \"%s\" -o \"%s%s.exe\"", filePath, compileOutDir, fileBaseNameNoExtension);
                        runCommand = String.format("\"%s%s.exe\" < \"%s\" > \"%s\" ", compileOutDir, fileBaseNameNoExtension, inputFile, outputFile);

                    }
                    else if(fileExtension.equals("java")){
                        // Compile the java file

                        compileCommand = String.format("javac \"%s\" -d \"%s\"",filePath,compileOutDir);
                        runCommand = String.format("java -cp \"%s\" \"%s\" < \"%s\" > \"%s\"", compileOutDir, fileBaseNameNoExtension, inputFile, outputFile);

                    }

                    ProcessBuilder compileProcessBuilder = new ProcessBuilder("cmd", "/c", compileCommand);
                    System.out.println("Compilation command: " + compileProcessBuilder.command());
                    Process compileProcess = compileProcessBuilder.start();
                    compileProcess.waitFor();

                    // Execute the file and measure execution time
                    ProcessBuilder runProcessBuilder = new ProcessBuilder("cmd", "/c", runCommand);
                    System.out.println("Execution command: " + runProcessBuilder.command());

                    // Redirect input and output files
                    // runProcessBuilder.redirectInput(new File(inputFile));
                    // runProcessBuilder.redirectOutput(new File(outputFile));
                    long startTime = System.currentTimeMillis();
                    Process runProcess = runProcessBuilder.start();
                    runProcess.waitFor();
                    long endTime = System.currentTimeMillis();
                    long duration = endTime - startTime;
                    System.out.println("Execution time: " + duration + " ms");
                    
                }else{
                    System.out.println("File not present");
                }
            }
            catch(IOException | InterruptedException e){
                e.printStackTrace();
            }
        
        }else {
            System.out.println("Task Runner cannot find the required arguments");
        }
        


    }
}
