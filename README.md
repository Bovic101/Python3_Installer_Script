# Python Installation Script README

The installation of Python, development tools, and programming and data science libraries on macOS is described in this guide using the included C program.

## Steps

1. **Compile the Program**:
   ```bash/Shell Command
   gcc installer.c -o installer
   
3. **Run the Program**:
   bash/Shell Command
   ./installer
   ```

4. **Verify Installation**:
   - Check Python version:
        bash/Shell Command
     python3 --version
   - Test a library (e.g., NumPy):
        bash/Shell Command
     python3 -c "import numpy; print(numpy.__version__)"
     
## Installed Tools and Libraries

### Tools
- Python, Git, GCC, Make, Docker, Curl

### Libraries
- Data Science: `numpy`, `pandas`, `matplotlib`
- Machine Learning: `tensorflow`, `torch`
- Web Development: `flask`, `django
