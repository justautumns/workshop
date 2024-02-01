
# <p align="center">Debuggers</p>
  
   General Debuger Tools


## Tools  
- Printf
- Valgrind
- LLDB
-  GDB

## Authors
- Github: [@justautumns](https://github.com/justautumns)
- Github: [@ifaoji](https://github.com/ifaoji)
 
        
## 🧑🏻‍💻 GDB Usage
**Command : run

Description: Runs the program.
Usage: run [arg1 arg2 ...]
------------------------------------------------------------------------------
Command : break (or b)

Description: Sets a breakpoint at a specific location.
Usage: break [function] or break [file:line]
------------------------------------------------------------------------------
Command : continue (or c)

Description: Continues execution until a breakpoint is encountered.
Usage: continue
------------------------------------------------------------------------------
Command : step (or s)

Description: Steps into a function call or advances one instruction.
Usage: step
------------------------------------------------------------------------------
Command : next (or n)

Description: Steps over to the next line.
Usage: next
------------------------------------------------------------------------------
Command : print (or p)

Description: Prints the value of a variable.
Usage: print variable
------------------------------------------------------------------------------
Command : info registers

Description: Displays the contents of general-purpose registers.
Usage: info registers
------------------------------------------------------------------------------
Command : backtrace (or bt)

Description: Displays the call stack.
Usage: backtrace
------------------------------------------------------------------------------
Command : list (or l)

Description: Displays a portion of the source code.
Usage: list or list function
------------------------------------------------------------------------------
Command : quit (or q)

Description: Exits GDB.
Usage: quit
------------------------------------------------------------------------------
Command : info breakpoints

Description: Displays a list of set breakpoints.
Usage: info breakpoints
------------------------------------------------------------------------------
Command : delete

Description: Deletes breakpoints.
Usage: delete [breakpoint number]
------------------------------------------------------------------------------
Command : watch

Description: Stops the program when a specified variable changes.
Usage: watch variable
------------------------------------------------------------------------------
Command : set variable

Description: Modifies the value of a variable.
Usage: set variable = value
------------------------------------------------------------------------------
Command :run args

Description: Runs the program with specified arguments.
Usage: run args
------------------------------------------------------------------------------
Command :info locals

Description: Shows the values of the variables.
Usage: run args
------------------------------------------------------------------------------



## 🧑🏻‍💻 LLDB Usage

target create <executable>:

Description: Create a target using the specified executable.
Example: target create my_program
-----------------------------------------------------------------------------
b[reakpoint] <location>:

Description: Set a breakpoint at the specified location.
Example: b main
-----------------------------------------------------------------------------
r[un]:

Description: Run the program from the beginning.
Example: run
-----------------------------------------------------------------------------
c[ontinue]:


Description: Continue program execution until the next breakpoint is encountered.
Example: continue
-----------------------------------------------------------------------------
n[ext]:

Description: Execute the next source line, stepping over function calls.
Example: next
-----------------------------------------------------------------------------
s[tep]:

Description: Execute the next source line, stepping into function calls.
Example: step
-----------------------------------------------------------------------------
f[rame]:

Description: Show information about the current stack frame.
Example: frame
-----------------------------------------------------------------------------
info b[reakpoints]:

Description: List all breakpoints.
Example: info breakpoints
-----------------------------------------------------------------------------
delete [breakpoint number]:

Description: Delete the specified breakpoint.
Example: delete 1
-----------------------------------------------------------------------------
disassemble -- [function]:

Description: Disassemble the specified function or current function if none is specified.
Example: disassemble -- main
-----------------------------------------------------------------------------
expr[ession] <expression>:
Description: Evaluate the given expression and print the result.
Example: expression x + y
-----------------------------------------------------------------------------
register read:
Description: Show the values of all registers.
Example: register read
-----------------------------------------------------------------------------
memory read <address>:
Description: Read and display the contents of memory at the specified address.
Example: memory read 0x1000
-----------------------------------------------------------------------------
process status:
Description: Show the status of the current process.
Example: process status
-----------------------------------------------------------------------------
quit:
Description: Exit LLDB.
Example: quit
-----------------------------------------------------------------------------
        



## 🧑🏻‍💻 Valgrind Usage
valgrind <executable>:

Description: Run the specified executable under Valgrind.
Example: valgrind my_program
-----------------------------------------------------------------------------

valgrind --tool=<tool_name> <executable>:

Description: Run the specified tool on the executable (replace <tool_name> with the desired Valgrind tool).
Example: valgrind --tool=memcheck my_program
-----------------------------------------------------------------------------

valgrind --leak-check=<option> <executable>:

Description: Enable or disable leak check reporting. Options include yes, no, summary, and full.
Example: valgrind --leak-check=yes my_program
-----------------------------------------------------------------------------

valgrind --show-reachable=<yes|no>:

Description: Show or hide reports for reachable memory.
Example: valgrind --show-reachable=yes my_program
-----------------------------------------------------------------------------

valgrind --track-origins=<yes|no>:

Description: Enable or disable tracking of memory origins. Helps identify the source of uninitialized values.
Example: valgrind --track-origins=yes my_program
-----------------------------------------------------------------------------

valgrind --log-file=<filename>:

Description: Redirect Valgrind output to a specified file.
Example: valgrind --log-file=valgrind_output.txt my_program
-----------------------------------------------------------------------------

valgrind --tool=callgrind <executable>:

Description: Run the Callgrind tool to profile program execution and analyze function call relationships.
Example: valgrind --tool=callgrind my_program
-----------------------------------------------------------------------------

valgrind --help:

Description: Display help and available options for Valgrind.
Example: valgrind --help


        

[LLDB Webpage](https://lldb.llvm.org/)
        
        
    
