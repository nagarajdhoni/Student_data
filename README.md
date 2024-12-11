# Student Record Management System

A command-line based student record management system implemented in C that provides comprehensive functionality for managing student data using a Singly Linked List data structure.

## Features

- **Add Student Records**: Add new student entries with roll number, name, and percentage
  - Automatically maintains sorted order based on roll numbers
  - Prevents duplicate roll number entries

- **Delete Records**:
  - Delete by Roll Number
  - Delete by Student Name
  - Delete all records at once

- **Modify Records**: Update existing student information
  - Modify name and percentage while maintaining the same roll number

- **Display Records**: View all stored student information
  - Shows roll number, name, and percentage for each student

- **Data Manipulation**:
  - Sort records by roll number
  - Reverse the entire list
  - Count total number of students

- **Data Persistence**:
  - Save records to a file (`student.data`)
  - Option to save before exiting

## Technical Details

### Data Structure
- Uses a Singly Linked List (SLL) implementation
- Each node contains:
  - Roll Number (integer)
  - Name (string, max 19 characters)
  - Percentage (float)
  - Pointer to next node

### Files Structure
- `header.h`: Contains structure definitions and function declarations
- `student.c`: Main program with menu interface
- `stud_mod.c`: Functions for adding, modifying, sorting, and reversing records
- `stud_del.c`: Functions for various delete operations
- `stud_show.c`: Functions for displaying records
- `stud_save.c`: Functions for file operations
- `Makefile`: Build configuration

