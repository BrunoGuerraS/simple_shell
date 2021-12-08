<h1 align ="center">
<img src="https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg" height="50%" width="40%">
</h1>

# C - Simple Shell Project.
This repository contains our own simple version of the shell
which is a simple UNIX shell based on bash and Sh. This command
line interpreter emulator is written in C language.

## Overview
it is an application that emulates a shell in mode
interactive. this emulator is a sh compatible
command language interpreter that executes commands read
from standard input.

## Files of this repository

| File | Description |
|--|--|
| **man_1_simple_shell** | It is the manual for using the shell. Contains a
description, ways for invocation, and some examples of builtins and executables
that can be used inside the command line interpreter. |
| **shell.c** | It contains the entry point of the program, where the execution
begins. It shows the prompt and receives the characters written in the command line. |
| **main.h** |  It is a header file that contains all the c libraries needed for
the program, the description and prototypes of all the functions, structures,
builtins,and  printing functions. |
| **handler.c** | It compare the command with a list of builtins, and if there
is a match, It calls the associated builtin. |
| **tokenize.c** | Save the separate string. it was separated using a delimiter
designed to analyze them later. |
| **_exit.c** | allows the end of the program in a controlled way, controller output. |


### Compilation

Usage: **hsh**
hsh is started with the standard input connected to the terminal. To start, compile all .c located in this repository by using this command:
```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

```
### Example to use it

Usage: **hsh**
```c
simple_shell$ ./hsh
linux~$

linux~$ ls
README.md shell.c main.h tok...

linux~$ exit
simple_shell$
````



## List of comands you can use

| Commands | Description |
|--|--|
| `ls` | ls (from list), allows you to list the contents of a directory or file. |
| `pwd` | Pwd (from print working directory) is a convenient command that prints our
path or location when executed, so we avoid getting lost if we are working with
multiple directories and folders. |
| `touch` | touch creates an empty file, if the file exists it updates the
modification time. |
| `rm` | rm (from remove) is the command needed to delete a file or directory. |
| `mkdir` | mkdir (from make directory) creates a new directory taking into
account the current location. |
| `cp` | cp (from copy) copies a source file or directory to a target file
or directory. |
| `rmdir` | rmdir (from ReMove DIRectory) This command is used to delete
empty directories or subdirectories. |
| `cd` | cd (from change directory) you will need this command to access a path other
than the one you are in. basically it is for navigating from directory to directory. |
| `exit` | exits the current shell. 0 status value indicates successful execution,
another value represents unsuccessful execution. |
| `cat` | cat (from concatenate), is a wonderful utility that allows us to visualize
the content of a text file in the standard output, without the need of an editor. |

## Authors

* **Bruno G.:** [GitHub](https://github.com/BrunoGuerraS)
* **error :** [Not Found] (#)

