# Digital Design and Computer Architecture
By David M. Harris & Sarah L. Harris

## The Art of Managing Complexity

Abstraction
---
### Levels of abstraction for electronic computing system

| level of abstraction <br> (from low to high) | Building blocks | Details                                                                                    | Pictures |
|----------------------------------------------|-----------------|--------------------------------------------------------------------------------------------|----------|
| Electrons                                    | Physics          | The behavior of electrons is decribed by: <br>- quantum mechanics <br>- Maxwell's equations|<img src="Image\1.png" alt="Electron's behavior" width="200"/>|
| Transistors<br>Diodes                        | Devices          | These devices have well-defined connection points called `terminals`:<br>modeled by relationship between voltage and cur rent as measured at each `terminal`|<img src="Image\2.jpg" alt="Transistors" width="200"/>|
| Amplifiers Filters                           | Analog Circuits  | Devices are assembled to create components such as `amplifiers` <br>Analog circuits input and output a continuous range of voltages.| <img src="Image\3.png" alt="Amplifier Circuits" width="200"/>|
| AND gates<br>NOT gates                       | Digital Circuits | `Digital circuits` such as logic gates restrict the voltages to discrete ranges,<br>which we will use to indicate 0 and 1.|<img src="Image\4.png" alt="Logic gates" width="200"/>|
| Adders<br>Memories                           | Logic            | In logic design, we build more complex structures,<br>such as adders or memories, from digital circuits |<img src="Image\5.png" alt="Adders & Memories" width="200"/>|
| Datapaths<br>Controllers<br>                 | Microarchitecture| `Microarchitecture` links the logic and architecture levels of abstraction.|<img src="Image\6.png" alt="Datapaths & Controllers" width="200"/>|
| Instructions<br>Registers                    | Architecture     |`Architecture` level describes a computer from the programmer's perspective.<br>Which defined by a set of instructions and registers that the programmer is allowed to use.<br><br>A particular architecture can be Implemented by one of many different microarchitectures|<img src="Image\7.png" alt="The Architecture" width="200"/>|