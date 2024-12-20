#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Starting installation process for Linux...\n");

    // Step 1: Update package manager
    printf("Updating package manager...\n");
    if (system("sudo apt update") != 0) {
        fprintf(stderr, "Error: Failed to update package manager.\n");
        return 1;
    }

    // Step 2: Install the latest version of Python
    printf("Installing the latest Python...\n");
    if (system("sudo apt install python3 python3-pip -y") != 0) {
        fprintf(stderr, "Error: Failed to install Python.\n");
        return 1;
    }

    // Step 3: Install development tools
    printf("Installing development tools...\n");
    const char *dev_tools[] = {
        "git",         // Version control system
        "cmake",       // Build system generator
        "make",        // Build automation tool
        "gcc",         // GNU Compiler Collection
        "nodejs",      // JavaScript runtime
        "yarn",        // Package manager for Node.js
        "docker.io",   // Containerization platform
        "vim",         // Text editor
        "emacs",       // Alternative text editor
        "wget"         // File retrieval utility
    };

    for (int i = 0; i < sizeof(dev_tools) / sizeof(dev_tools[0]); i++) {
        char command[100];
        snprintf(command, sizeof(command), "sudo apt install %s -y", dev_tools[i]);
        printf("Installing %s...\n", dev_tools[i]);
        if (system(command) != 0) {
            fprintf(stderr, "Error: Failed to install %s.\n", dev_tools[i]);
        }
    }

    // Step 4: Install essential Python libraries for various purposes
    printf("Installing Python libraries for programming and data science...\n");
    const char *python_libraries[] = {
        "numpy", "pandas", "matplotlib", "scipy", "scikit-learn", "seaborn", "jupyterlab", // Data science and analysis
        "flask", "django",                                                      // Web development frameworks
        "tensorflow", "torch", "keras",                                       // Machine learning and deep learning
        "pytest", "unittest",                                                   // Testing frameworks
        "sqlalchemy", "pymongo",                                                // Database interaction tools
        "requests", "beautifulsoup4"                                            // HTTP requests and web scraping
    };

    for (int i = 0; i < sizeof(python_libraries) / sizeof(python_libraries[0]); i++) {
        char command[150];
        snprintf(command, sizeof(command), "pip3 install %s", python_libraries[i]);
        printf("Installing %s...\n", python_libraries[i]);
        if (system(command) != 0) {
            fprintf(stderr, "Error: Failed to install %s.\n", python_libraries[i]);
        }
    }

    // Step 5: Install curl utility for transferring data with URLs
    printf("Installing curl...\n");
    if (system("sudo apt install curl -y") != 0) {
        fprintf(stderr, "Error: Failed to install curl.\n");
        return 1;
    }

    printf("Installation process completed successfully.\n");
    return 0;
}
