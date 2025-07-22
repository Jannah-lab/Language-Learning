# Registers
### A register is:
- tiny super-fast storage space inside the CPU itself.
- The CPU uses it to hold **numbers or data temporarily** while working.
- Much faster than RAM or storage (SSD, HDD).
- Very small: usually only a few dozen registers inside a CPU.

## Types of Registers
### For x68 Names
|Types of Register|Purposes|Examples (for x86 Names)|
| --------------- | ------ | ---------------------- |
|General Purpose Registers (GPR)|Store data temporarily for math, logic, etc.| AX, BX, CX, DX, EAX, RAX, etc...|
|Segment Registers|Point to memory segments (old usage)|CS, DS, SS, ES, FS, GS|
|Index/Pointer Registers|For memory addresses, loops, arrays|SI, DI, SP, BP, ESP, EBP, RSP, RBP|
|Flags/Status Register|Stores the result of comparisons, math signs|FLAGS, EFLAGS, RFLAGS|
|Instruction Pointer|Holds the address of the next instruction to run|IP, EIP, RIP|
|Control Registers| Control CPU behavior (protected mode, etc.)| CR0, CR2, CR3, CR4|
|Floating Point Registers (FPU)|Used for decimal numbers (floating-point math)|ST0 to ST7 (x68 FPU)|
|SIMD/Vector Registers|Work with multiple data points at once (for graphics, multimedia)|MMX, XMM0-31, YMM0-31, ZMM0-31|
|Debug Registers|Help with debugging (breakpoints)|DR0, DR1, ..., DR7|
|Model Specific Registers (MSR)|For CPU tuning, performance, security|Varies, not user-controlled|
|Machine Check Registers|Report hardware errors (low-level diagnostics)|Internal, varies|

#### Details:(for x86-64 Names)
|🔑   |General|Purposes|     |🚀         |Pointer/Index             |Registers   |     |⚠ Flags/Status|Register                               |
| --- | ---    | ---   | --- | ---        | ---                      | ---        | --- | ---          | ---                                   |
|Size |8-bit   |16-bit |     |Name        |Purpose                   | Size       |     |Zero Flag     | If result was zero                    |
|A    |AL      |AX     |     |SP /ESP /RSP|Stack Pointer             |16/32/64-bit|     |Sign Flag     |If result is negative                  |
|B    |BL      |BX     |     |BP /EBP /RBP|Base Pointer (stack frame)|16/32/64-bit|     |Carry Flag    |If carry occured in math               |
|C    |CL      |CX     |     |SI /ESI /RSI|Source Index (arrays)     |16/32/64-bit|     |Overflow Flag |If math overflow happened              |
|D    |DL      |DX     |     |DI /EDI /RDI|Destination Index         |16/32/64-bit|     |Direction Flag|String direction (increment/decurement)|

|🖩      |Floating Point/|SIMD Example       |     |📌Instruction| Pointer|     |🔧 Control|Registers (CRx)|
| ---   | ---           | ---               | --- | ---          | ---    | --- | ---      | --- |
|Type   |Register Names |Used for           |     |Architecture  |Name    |     |CR0       | Enable protected mode, etc...|
|MMX    |MM0...MM7      |Old multimedia     |     |16-bit        |IP      |     |CR2       |Page fault address|
|SSE    |XMM0...XMM31   |128-bit vectors    |     |32-bit        |EIP     |     |CR3       |Page tables (virtual memory)|
|AVX    |YMM0...YMM31   |256-bit vectors    |     |64-bit        |RIP     |     |CR4       |Advanced CPU controls|
|AVX-512|ZMM0...ZMM31   |512-bit vectors    |  
|x87 FPU|ST0...ST7      |Floating point math|

### For DE1-SoC Names
| Register Name      | Purpose                                |
| ------------------ | -------------------------------------- |
| **R0 – R12**       | General-purpose (math, pointers, args) |
| **R13 (SP)**       | Stack Pointer                          |
| **R14 (LR)**       | Link Register (function return addr)   |
| **R15 (PC)**       | Program Counter (next instruction)     |
| **CPSR**           | Status flags & CPU mode                |
| **Banked SP/LR/R** | Separate copies in FIQ/IRQ modes       |
| **SPSR**           | Saves CPSR on mode switch              |
| **CP15 regs**      | Control coprocessor for MMU/cache      |



## Binary
### 1️⃣ What is Binary?
**Binary** is a way to write numbers using only two digits: `0` and `1`.**
* Computers use binary because they are made of **tiny switches:**
    * 0 = off
    * 1 = on

### 2️⃣ **How Does Binary Count Work?**
```csharp
0
1
10      (means 2 in decimal)
11      (means 3 in decimal)
100     (means 4 in decimal)
...
```
so binary counts like this: 1, 10, 11, 100, 101, ...

### 3️⃣ **What 8-bit Binary Numbers?**

#### What Does "8-bit" Mean?
- "8-bin" means there are exaclty **8 binary digits** (bits) in the number.
    - for example of an **8-bit binary number:**
        ```
        10101100
        ```
        ➡ it has **8 digits**, and each digit is either `0` or `1`.

#### How Does "8-bin" Work?
- Each of the **8 bits** has a value, comparing with decimal from:<br>

|Counting system|8th position|7th position|6th position|5th position|4th position|3rd position|2nd position|1st position|
|---------------|------------|------------|------------|------------|------------|------------|------------|------------|
|Decimal        |$10^7$      |$10^6$      |$10^5$      |$10^4$      |$10^3$      |$10^2$      |$10^1$      |$10^0$      |
|               |10000000    |1000000     |100000      |10000       |1000        |100         |10          |1           |
|Binary         |$2^7$       |$2^6$       |$2^5$       |$2^4$       |$2^3$       |$2^2$       |$2^1$       |$2^0$       |
|               |128         |64          |32          |16          |8           |4           |2           |1           |

### 4️⃣ Example: 1010 0101
|Bit    |1  |0  |1  |0  |0  |1  |0  |1  |
|-------|---|---|---|---|---|---|---|---|
|Value  |128|64 |32 |16 |8  |4  |2  |1  |

#### How to calculate:
ignore the 0s and take the 1s and add them up: `128 + 32 + 4 + 1 = 165`

So:
```yaml
Binary : 1010 0101
Decimal: 165
```

## Hexadecimal
### 1️⃣ What is Hexadecimal?

**Hexadecimal** is just another way to write numbers, like **decimal** (0-9) and **binary** (0-1).

But hexadecimal uses 16 digits:
```mathematica
0   1   2   3   4   5   6   7   8   9   A   B   C   D   E   F
```
A = 10, B = 11, ..., F = 15

#### Example: 15 and 255

**In Hex**<br>
- for 15 in Decimal: 15th position = F<br>
- for 255 in Decimal:<br>
    - since 255 / 15 = 15
    - then 15th * 15th = FF

### 2️⃣ Why Hex is used?
Becuase: 
1. Computers only understand **binary** (1s and 0s), but writing long binary numbers is hard for humans.
    - Example:  Binary `1111 1111`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Hex `FF`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Decimal `255`
2. **Decimal** is easy for humans but not for computers, but Hex fits perfectly with binary:
    - Example: <br>
    <table>
    <tr><th>Hex Digits</th><th>Bytes</th><th>Bits (binary)</th></tr>
    <tr><td>1 digit</td><td>-</td><td>4-bit</td></tr>
    <tr><td>2 digits</td><td>1 byte</td><td>8-bit</td></tr>
    <tr><td>4 digits</td><td>2 bytes</td><td>16-bit</td></tr>
    <tr><td>8 digits</td><td>4 bytes</td><td>32-bit</td></tr>
    <tr><td>16 digits</td><td>8 bytes</td><td>64-bit</td></tr>
    </table>

    `Which are binary bits = hex digits x 4`

## CPU Architecture
These are the most CPUs Architectures:
| **Architecture**        | **Bits**  | **Registers**                                 | **Brand / CPU Example**           |
| ----------------------- | --------- | --------------------------------------------- | --------------------------------- |
| **6502**                | 8-bit     | 3                                             | MOS 6502 (used in NES, Atari)     |
| **6800**                | 8-bit     | 3                                             | Motorola 6800                     |
| **6809**                | 8-bit     | 4                                             | Motorola 6809                     |
| **680x0**               | 32-bit    | 8 data, 8 address                             | Motorola 68000 series (Amiga)     |
| **8051**                | 8-32 bit  | Complex mixed (small 4-bit to 32-bit sets)    | Intel 8051 (microcontrollers)     |
| **8080**                | 8-bit     | 7                                             | Intel 8080                        |
| **Alpha**               | 64-bit    | 32                                            | DEC Alpha                         |
| **ARC**                 | 16/32/64  | 16 or 32 (up to 60)                           | Synopsys ARC processors           |
| **ARM (A32)**           | 32-bit    | 15                                            | ARM Cortex-A, ARM7                |
| **ARM64 (A64)**         | 64-bit    | 32                                            | ARM Cortex-A72, A75, A77+         |
| **AVR**                 | 8-bit     | 32                                            | Atmel AVR (Arduino)               |
| **AVR32**               | 32-bit    | 15                                            | Atmel AVR32                       |
| **Blackfin**            | 32-bit    | Multiple types (data, accumulators, pointers) | Analog Devices Blackfin           |
| **DLX**                 | 32-bit    | 32                                            | Academic RISC example             |
| **Elbrus 2000**         | 64-bit    | 8-64                                          | Russian Elbrus CPUs               |
| **eSi-RISC**            | 16/32     | 8-72                                          | EnSilica eSi-RISC                 |
| **Itanium (IA-64)**     | 64-bit    | 128                                           | Intel Itanium                     |
| **LoongArch**           | 32/64-bit | 32                                            | Loongson processors               |
| **MIPS**                | 32/64-bit | 4-32                                          | MIPS processors                   |
| **OpenRISC**            | 32/64-bit | 16 or 32                                      | OpenRISC                          |
| **PA-RISC**             | 32/64-bit | 32                                            | HP PA-RISC                        |
| **PowerPC / Power ISA** | 32/64-bit | 32 general                                    | IBM PowerPC, Power ISA CPUs       |
| **RISC-V**              | 32/64/128 | 32                                            | SiFive, Andes, many open source   |
| **SPARC**               | 32/64-bit | 32                                            | Sun Microsystems SPARC            |
| **SuperH (SH)**         | 32-bit    | 16                                            | Renesas SuperH processors         |
| **x86 (8086-80386)**    | 16/32-bit | 8 general registers                           | Intel 8086, 80286, 80386          |
| **x86-64**              | 64-bit    | 16 general, up to 32 with AVX                 | Intel Core i3/i5/i7/i9, AMD Ryzen |
| **Z80**                 | 8-bit     | 17                                            | Zilog Z80 (Game Boy, early PCs)   |


### Intel x86 CPU family
| Name    | Size       | Meaning                  | Bits | Usage Example             | Hex Digits Example                                      |
| ------- | ---------- | ------------------------ | ---- | ------------------------- | ------------------------------------------------------- |
| **AL**  | **8-bit**  | **A Low** (Low byte)     | 8    | Small numbers (0-255)     | `0x00` - `0xFF` (2 digits)                              |
| **AX**  | **16-bit** | **Accumulator Extended** | 16   | Bigger numbers (0-65,535) | `0x0000` - `0xFFFF` (4 digits)                          |
| **EAX** | **32-bit** | **Extended Accumulator** | 32   | Even bigger numbers       | `0x00000000` - `0xFFFFFFFF` (8 digits)                  |
| **RAX** | **64-bit** | **Register Accumulator** | 64   | Modern 64-bit CPUs        | `0x0000000000000000` - `0xFFFFFFFFFFFFFFFF` (16 digits) |

**AT WITCH** how to tell the assembler that:
- `255`: means "this is a **Decimal number"**= 255 
- `oxFF`: means "this is a **hexadecimal number"**= 255 in Decimal 
- `ob111111`: means "this is a **Binary number"**= 255 in Decimal 
