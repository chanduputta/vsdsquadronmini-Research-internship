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
	gcc sum1ton.c
	./a.out
	```
![C Code compiled on gcc Compiler](https://github.com/chanduputta/vsdsquadronmini-Research-internship/blob/main/Task1/C%20code%20compiled%20on%20gcc.png)

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
 
![C Code compiles on RISC V Compiler](https://github.com/chanduputta/vsdsquadronmini-Research-internship/blob/main/Task1/C%20code%20compiled%20on%20RISC%20V%20compiler.png)

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
* **-Ofast:** The option -Ofast in the command ```riscv64-unknown-elf-gcc -Ofast -mabi=lp64 -march=rv64i -o sum1ton.o sum1ton.c``` is a compiler optimization flag used with the GNU Compiler Collection (GCC). This flag is used to instruct the compiler to optimize the generated code for maximum speed. The use of ```-Ofast``` is typically chosen for applications where execution speed is critical and where deviations from standard behavior are acceptable. However, it's important to test thoroughly, as this level of optimization can introduce subtle bugs, especially in complex calculations or when strict compliance with external standards is required.  
* **-O1:** This options is an optimization level that tells the compiler to optimize the generated code but without greatly increasing compilation time. -O1 aims to reduce code size and execution time while keeping the compilation process relatively quick.  

</details>

-------------------------------------------------

<details>
<summary><b>Task2:</b> Performing SPIKE Simulation and Debugging a simple C code with Interactive Debugging Mode using Spike</summary> 
  
### What is SPIKE in RISCV?
> * A RISC-V ISA is a simulator, enabling the testing and analysis of RISC-V programs without the need for actual hardware.  
> * Spike is a free, open-source C++ simulator for the RISC-V ISA that models a RISC-V core and cache system. It can be used to run programs and a Linux kernel, and can be a starting point for running software on a RISC-V target.  
  
### What is pk (Proxy Kernel)?  
> * The RISC-V Proxy Kernel, pk , is a lightweight application execution environment that can host statically-linked RISC-V ELF binaries.  
> * A Proxy Kernel in the RISC-V ecosystem simplifies the interaction between complex hardware and the software running on it, making it easier to manage, test, and develop software and hardware projects.  
 

### Testing the SPIKE Simulator  
The target is to run the ```findPrime.c``` code using both ```gcc compiler``` and ```riscv compiler```, and both of the compiler must display the same output on the terminal. So to compile the code using **gcc compiler**, use the following command:  
```
gcc findPrime.c  
./a.out
```
And to compile the code using **riscv compiler**, use the following command:  
```
spike pk findPrime.o
```  
![Spike Simulation](https://github.com/chanduputta/vsdsquadronmini-Research-internship/blob/main/Task2/spike%20pk%20Simulation.png)

#### Following are the snapshots of RISCV Objdump with **-O1** and **-Ofast** options  
RISCV Objdump with -O1 option  

![Objdump in -O1](https://github.com/chanduputta/vsdsquadronmini-Research-internship/blob/main/Task2/Objdump%20in%20-O1.png)

RISCV Objdump with -Ofast option  

![Objdump in -Ofast](https://github.com/chanduputta/vsdsquadronmini-Research-internship/blob/main/Task2/Objdump%20in%20-Ofast.png)

### Debugging the Assembly Language Program of  ```findPrime.c```  
* Open the **Objdump** of code by using the following command  
```
$ riscv64-unknown-elf-objdump -d findPrime.o | less  
```
* Open the debugger in another terminal by using the following command  
```
$ spike -d pk findPrime.o
```
* The debugger will be opened in the terminal. Now, debugging operations can be performed as shown in the following snapshot.

![Debugging](https://github.com/chanduputta/vsdsquadronmini-Research-internship/blob/main/Task2/Spike%20Debugging.png) 

</details>

----------------------------------------
<details>
<summary><b>Task3:</b>RISC-V Instruction Types & 32-Bit Instruction Code</summary>

The RISC-V instruction set architecture (ISA) defines several types of instructions, each with a specific format. Below is a summary of the main instruction types:


![RISC-V](https://github.com/chanduputta/vsdsquadronmini-Research-internship/blob/main/Task3/RISC-V%20Instruction.png)

## R-Type (Register-Register)

- **Purpose**: Used for operations that involve two source registers and one destination register.
- **Fields**:
  - `opcode`: Operation code
  - `rd`: Destination register
  - `func3`: Function modifier
  - `rs1`: Source register 1
  - `rs2`: Source register 2
  - `func7`: Function modifier (additional)

- **Example**: `add x1, x2, x3`

## I-Type (Immediate)

- **Purpose**: Used for operations with one source register and an immediate value, including loads.
- **Fields**:
  - `opcode`: Operation code
  - `rd`: Destination register
  - `func3`: Function modifier
  - `rs1`: Source register
  - `imm[11:0]`: Immediate value

- **Example**: `addi x1, x2, 10`

## S-Type (Store)

- **Purpose**: Used for store instructions, which write a register's value to memory.
- **Fields**:
  - `opcode`: Operation code
  - `imm[11:5]`: Immediate value (upper 7 bits)
  - `func3`: Function modifier
  - `rs1`: Source register (base address)
  - `rs2`: Source register (data to store)
  - `imm[4:0]`: Immediate value (lower 5 bits)

- **Example**: `sw x2, 0(x1)`

## B-Type (Branch)

- **Purpose**: Used for conditional branch instructions.
- **Fields**:
  - `opcode`: Operation code
  - `imm[12]`: Immediate value (bit 12)
  - `imm[10:5]`: Immediate value (bits 10 to 5)
  - `func3`: Function modifier
  - `rs1`: Source register 1
  - `rs2`: Source register 2
  - `imm[4:1]`: Immediate value (bits 4 to 1)
  - `imm[11]`: Immediate value (bit 11)

- **Example**: `beq x1, x2, label`

## U-Type (Upper Immediate)

- **Purpose**: Used for instructions that operate with a large immediate value.
- **Fields**:
  - `opcode`: Operation code
  - `rd`: Destination register
  - `imm[31:12]`: Immediate value

- **Example**: `lui x1, 0x10000`

## J-Type (Jump)

- **Purpose**: Used for jump instructions with a large immediate value.
- **Fields**:
  - `opcode`: Operation code
  - `rd`: Destination register
  - `imm[20]`: Immediate value (bit 20)
  - `imm[10:1]`: Immediate value (bits 10 to 1)
  - `imm[11]`: Immediate value (bit 11)
  - `imm[19:12]`: Immediate value (bits 19 to 12)

- **Example**: `jal x1, label`

# 32-bit Instruction Codes in RISC-V Instruction Type Format

1. **`addi x1, x2, 10`**  
   - **Instruction Format**: I-type  
   - **Binary Encoding**: `000000000010 00010 000 00001 0010011`  
   - **32-bit Instruction Code**: `0x00210093`

2. **`li x5, 0x0`**  
   - **Instruction Format**: I-type (using `addi x5, x0, 0x0`)  
   - **Binary Encoding**: `000000000000 00000 000 00101 0010011`  
   - **32-bit Instruction Code**: `0x00000293`

3. **`lui x10, 0x20000`**  
   - **Instruction Format**: U-type  
   - **Binary Encoding**: `00100000000000000000 01010 0110111`  
   - **32-bit Instruction Code**: `0x20000537`

4. **`mv x1, x2`**  
   - **Instruction Format**: I-type (using `addi x1, x2, 0`)  
   - **Binary Encoding**: `000000000000 00010 000 00001 0010011`  
   - **32-bit Instruction Code**: `0x00010093`

5. **`sw x5, 0(x10)`**  
   - **Instruction Format**: S-type  
   - **Binary Encoding**: `0000000 00101 01010 010 00000 0100011`  
   - **32-bit Instruction Code**: `0x0050a023`

6. **`lw x5, 0(x10)`**  
   - **Instruction Format**: I-type  
   - **Binary Encoding**: `000000000000 01010 010 00101 0000011`  
   - **32-bit Instruction Code**: `0x0000a283`

7. **`jal x0, 0x100`**  
   - **Instruction Format**: J-type  
   - **Binary Encoding**: `00000000000100000000 00000 1101111`  
   - **32-bit Instruction Code**: `0x0000086f`

8. **`beq x1, x2, label`**  
   - **Instruction Format**: B-type (assuming offset is `0x4`)  
   - **Binary Encoding**: `000000 00010 00001 000 00010 1100011`  
   - **32-bit Instruction Code**: `0x00210063`

9. **`bne x1, x3, label`**  
   - **Instruction Format**: B-type (assuming offset is `0x4`)  
   - **Binary Encoding**: `000000 00011 00001 001 00010 1100011`  
   - **32-bit Instruction Code**: `0x00310063`

10. **`slli x5, x1, 1`**  
    - **Instruction Format**: I-type  
    - **Binary Encoding**: `0000000 00001 00101 001 00001 0010011`  
    - **32-bit Instruction Code**: `0x00109093`

11. **`srli x6, x2, 2`**  
    - **Instruction Format**: I-type  
    - **Binary Encoding**: `0000000 00010 00110 101 00010 0010011`  
    - **32-bit Instruction Code**: `0x0022b093`

12. **`and x3, x4, x5`**  
    - **Instruction Format**: R-type  
    - **Binary Encoding**: `0000000 00101 00100 111 00011 0110011`  
    - **32-bit Instruction Code**: `0x005201b3`

13. **`or x2, x3, x4`**  
    - **Instruction Format**: R-type  
    - **Binary Encoding**: `0000000 00100 00011 110 00010 0110011`  
    - **32-bit Instruction Code**: `0x004181b3`

14. **`sub x3, x5, x2`**  
    - **Instruction Format**: R-type  
    - **Binary Encoding**: `0100000 00010 00101 000 00011 0110011`  
    - **32-bit Instruction Code**: `0x402282b3`

15. **`xor x1, x2, x3`**  
    - **Instruction Format**: R-type  
    - **Binary Encoding**: `0000000 00011 00010 100 00001 0110011`  
    - **32-bit Instruction Code**: `0x003100b3`



</details>

-------------------------------------------------------------------------
