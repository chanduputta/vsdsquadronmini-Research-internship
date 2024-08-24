# vsdsquadronmini-Research-internship
all the tasks of VSDSquadronmini research internship Program | RISCV 

##  Personal Details

**Name:** Putta Shreyash Chandra    
**Email ID:** puttashreyash@gmail.com  
**GitHub Profile:** [chanduputta](https://github.com/chanduputta)  
**LinkedIN Profile:** [shreyash20](https://www.linkedin.com/in/shreyash20/)

----------------------------------------------------------------------------------------------------------------
<details>
<summary><b>Task1:</b> Task is to refer to C based and RISCV based lab videos and execute the task of compiling the C code using gcc and riscv compiler</summary>

### C Language based LAB
We have to follow the given steps to compile any **.c** file in our machine:  
1. Open the bash terminal and locate to the directory where you want to create your file. Then run the following command:

	```
	vim sum1ton.c
	```  
2. This will open the editor and allows you to write into the file that you have created. You have to write the C code of printing the sum of n numbers. Once you are done with your code, press ```Ctrl + S``` to save your file, and then press ```Ctrl + W``` to close the editor.   
3. To the C code on your terminal, run the following command:

	```
	gcc sum1ton.c -o sum1ton.o
	./sum1ton.o
	```
![C Code compiled on gcc Compiler](https://github.com/chanduputta/vsdsquadronmini-Research-internship/blob/main/Task1/C%20code%20compiled%20on%20gcc%20.png?raw=true)

### RISCV based LAB
We have to do the same compilation of our code but this time using RISCV gcc compiler. Follow the given steps:  
1. Open the terminal and run the given command:  

	```
	cat sum1ton.c
	```
![cat Command](https://github.com/chanduputta/vsdsquadronmini-Research-internship/blob/main/Task1/Cat%20cammand%20for%20C%20code.png?raw=true)

2. Using the **cat** command, the entire C code will be displayed on the terminal. Now run the following command to compile the code in riscv64 gcc compiler:  

	```
	riscv64-unknown-elf-gcc -O1 -mabi=lp64 -march=rv64i -o sum_1ton.o sum_1ton.c
	```
 
![C Code compiles on RISC V Compiler](https://github.com/chanduputta/vsdsquadronmini-Research-internship/blob/main/Task1/C%20code%20compiled%20on%20RISCV%20compiler.png?raw=true)

3. Open a new terminal and run the given command:    

	```
	riscv64-unknown-elf-objdump -d sum1ton.o | less
	```
![Objdump using -O1 format](https://github.com/chanduputta/vsdsquadronmini-Research-internship/blob/main/Task1/objdump%20using%20O1%20command.png?raw=true)

4. The Assembly Language code of our C code will be displayed on the terminal. Type ```/main``` to locate the main section of our code.  

### *Descriptions of the keyword used in above command*  
* **-mabi=lp64:** This option specifies the ABI (Application Binary Interface) to use ```lp64```, which is for 64-bit integer, long and pointer size. This ABI is used for 64-bit RISCV architecture.  
* **-march=rv64i:** This option specifies the architecture that we use, which is rv64i, indicates the 64-bit RISCV base integer instruction set. This also confirms the targeting of 64-bit architecture.  
* **riscv-objdump:** A tool for disassembling RISC-V binaries, providing insights into the code structure and helping in debugging.  
* **-O1:** This options is an optimization level that tells the compiler to optimize the generated code but without greatly increasing compilation time. -O1 aims to reduce code size and execution time while keeping the compilation process relatively quick.  

</details>
