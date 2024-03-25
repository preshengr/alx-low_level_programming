# 0x1C. C - Makefiles

This directory contains several Makefiles and a Python script that are part of a project focused on understanding and utilizing Makefiles in C programming.

## What are `make` and `Makefiles`?

`make` is a build automation tool that automatically builds executable programs and libraries from source code by reading files called `Makefiles`, which specify how to derive the target program⁶.

## When, Why, and How to Use Makefiles

Makefiles are used to manage the build process of a project in a consistent and efficient manner. They are particularly useful when a project consists of many source files and you need to compile only the ones that have changed since the last build⁴.

## Rules in Makefiles

A rule in a Makefile tells `make` how to execute a series of commands to build a target file from source files or other dependencies. Rules can be explicit, defining specific targets, or implicit, defining general patterns for building files¹².

## Explicit and Implicit Rules

Explicit rules define exact targets and their dependencies, while implicit rules allow `make` to apply a pattern to find out which files to build⁸.

## Most Common / Useful Rules

The most common rules in Makefiles include:
- All: Compiles the entire program.
- Clean: Removes all files that were created during the build process.
- Install: Installs the program into the system.

## Variables in Makefiles

Variables in Makefiles serve as placeholders for text that can be reused throughout the file. They are set using `=` or `:=` and used by referencing them with a `$` followed by the variable name in parentheses or braces¹¹¹².

## Directory Contents

- `0-Makefile`: A basic Makefile with a default build target.
- `1-Makefile`: An advanced Makefile with defined variables.
- `2-Makefile`: A Makefile with custom build rules.
- `3-Makefile`: A Makefile that introduces phony targets.
- `4-Makefile`: A Makefile with pattern rules and automatic variables.
- `100-Makefile`: An optimized Makefile with special targets.
- `5-island_perimeter.py`: A Python script unrelated to the Makefiles, possibly for a different part of the project.