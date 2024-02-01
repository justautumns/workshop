## 🧑🏻‍💻 GDB Usage

Command : run

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
