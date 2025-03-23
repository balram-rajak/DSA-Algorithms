#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <cstdlib>
#include <filesystem>
#include "Timer.h"

namespace fs = std::filesystem;

void runTaskRunner(const std::string& filePath, const std::string& compileOutDir, const std::string& inputFile, const std::string& outputFile) {
    // Extract file name and extension
    fs::path file(filePath);
    std::string fileBaseNameNoExtension = file.stem().string();
    std::string fileExtension = file.extension().string();

    std::string compileCommand;
    std::string runCommand;

    // Determine the file type and prepare commands
    if (fileExtension == ".cpp") {
        compileCommand = "g++ -std=c++14 \"" + filePath + "\" -o \"" + compileOutDir +"\\"+ fileBaseNameNoExtension + ".exe\"";
        runCommand = compileOutDir +"\\"+ fileBaseNameNoExtension + ".exe < " + inputFile + " > " + outputFile;
    } else if (fileExtension == ".java") {
        compileCommand = "javac \"" + filePath + "\" -d \"" + compileOutDir + "\"";
        runCommand = "java -cp \"" + compileOutDir + "\" " + fileBaseNameNoExtension + " < \"" + inputFile + "\" > \"" + outputFile + "\"";
    } else {
        std::cerr << "Unsupported file type: " << fileExtension << std::endl;
        return;
    }

    // Compile the file
    std::cout << "Compilation command: " << compileCommand << std::endl;
    int compileStatus = std::system(compileCommand.c_str());
    if (compileStatus != 0) {
        std::cerr << "Compilation failed." << std::endl;
        return;
    }
    // std::cout << "Compilation successful." << std::endl;

    // // Execute the file and measure execution time
    // std::cout << "Execution command: " << runCommand << std::endl;
    // auto startTime = std::chrono::high_resolution_clock::now();

    // // To convert the string to c style null terminating string
    Timer timer;
    int runStatus = std::system(runCommand.c_str());
    // auto endTime = std::chrono::high_resolution_clock::now();

    // if (runStatus != 0) {
    //     std::cerr << "Execution failed." << std::endl;
    //     return;
    // }

    // // Calculate and display execution time
    // std::chrono::duration<double, std::milli> duration = endTime - startTime;
    // std::cout << "Execution time: " << duration.count() << " ms" << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc != 5) {
        std::cerr << "Usage: TaskRunner <filePath> <compileOutDir> <inputFile> <outputFile>" << std::endl;
        return 1;
    }

    std::string filePath = argv[1];
    std::cout << filePath;
    std::string compileOutDir = argv[2];
    std::string inputFile = argv[3];
    std::string outputFile = argv[4];

    std::cout << "Running TaskRunner..." << std::endl;
    std::cout << "File path: " << filePath << std::endl;

    runTaskRunner(filePath, compileOutDir, inputFile, outputFile);

    return 0;
}