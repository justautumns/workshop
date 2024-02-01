## 🧑🏻‍💻 GDB Usage

> **Note:** `a`/`b` means `a` or `b`.

| Command | Description |
| -------- | -------- | 
| `run`/`r` [arg1 arg2...] | Runs the program with specified arguments. |
| `break`/`b` [function] or `break`/`b` [file:line] | Sets a breakpoint at a specific location. |
| `continue`/`c` | Continues execution until a breakpoint is encountered. |
| `step`/`s` | Steps into a function call or advances one instruction. |
| `next`/`n` | Steps over to the next line. |
| `print`/`p` [variable]| Prints the value of a variable. |
| `info registers` | Displays the contents of general-purpose registers. |
| `backtrace`/`bt` | Displays the call stack. |
| `list`/`l` OR `list`/`l` [function] | Displays a portion of the source code. |
| `quit`/`q` | Exits GDB. |
| `info breakpoints` | Displays a list of set breakpoints. |
| `delete` [breakpoint number] | Deletes breakpoints. |
| `watch` [variable] | Sets a watchpoint for a variable. |
| `set variable` [variable] = [value] | Sets the value of a variable. |
| `info locals` | Displays the local variables of the current stack frame. |

