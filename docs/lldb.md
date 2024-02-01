# How to use LLDB

For beginners.

## Start LLDB
```sh
$ lldb <executable>
```

This will start an `lldb` session for your executable.

## Run the program
```sh
(lldb) run [arg1 arg2 ...]
```

This command actually starts your program now. You can optionally provide it with arguments, which are passed to your executable

## Add a breakpoint

**Set a breakpoint in a file**
```sh
(lldb) breakpoint set --file <file> --line <line>
(lldb) br s -f <file> -l <line>
(lldb) b <file>:<line>
```
This will stop the execution once the program reaches this line.

> **NOTE:** You will most likely need to `run` the program after setting a breakpoint.

**Set a breakpoint for a function**
```sh
(lldb) breakpoint set --name main
(lldb) br s -n main
(lldb) b main
```
This will stop the execution once this function gets called.

Breakpoints are a way to stop the execution of a program at a specific location.

## List the breakpoints
```sh
(lldb) breakpoint list
(lldb) br l
```

This will list all breakpoints you currently have.

## Delete a breakpoint
```sh
(lldb) breakpoint delete <id>
(lldb) br del <id>
```

Delete this breakpoint.

## Next line
```sh
(lldb) next
(lldb) n
```

Step over to the next line.
> **NOTE:** This does not step into functions.

## Step into the function call
```sh
(lldb) step
(lldb) s
```

Step into a function call or advance one instruction.

## Finish the current function call
```sh
(lldb) finish
```

This continues the current function call until your program crashes, a breakpoint is hit, or when the function returns.

## Continue the execution
```sh
(lldb) continue
```

This continues the execution of your program until it crashes or a breakpoint is hit.

## List all variables
```sh
(lldb) var
(lldb) v
```

This lists all variables in the current scope.

## Print the value of a variable
```sh
(lldb) print <expression>
```

Expression can be any valid `C` code.

## Change the value of a variable
```sh
(lldb) print <variable_name> = <value>
```

Since `print` accepts any valid `C` expression, you can also assign values to your variables with it.

## Show the current location in the code
```sh
(lldb) frame select
```

## Quit
```sh
(lldb) quit
```
