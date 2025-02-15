Here’s a `README.md` file for your student management system program. This file provides an overview of the project, instructions for use, and details about the features.

```markdown
# Student Management System

A simple and user-friendly command-line-based student management system written in C. This program allows you to manage student records, including adding, displaying, searching, editing, deleting, and sorting students. It also supports saving and loading data to/from a file.

## Features

- **Add Student**: Add a new student with ID, name, and marks.
- **Display Students**: Display all students in the system.
- **Search Student**: Search for a student by their ID.
- **Delete Student**: Delete a student by their ID.
- **Edit Student**: Edit the name and marks of an existing student.
- **Sort Students**: Sort students by ID, name, or marks.
- **Save Data**: Save student data to a file (`students.dat`).
- **Load Data**: Load student data from a file (`students.dat`).
- **User-Friendly Interface**: Clear console screen and intuitive menu options.

## How to Use

1. **Compile the Program**:
   - Use a C compiler (e.g., GCC) to compile the program:
     ```bash
     gcc -o student_management student_management.c
     ```

2. **Run the Program**:
   - Execute the compiled program:
     ```bash
     ./student_management
     ```

3. **Menu Options**:
   - The program will display a menu with the following options:
     ```
     1. Add Student
     2. Display Students
     3. Search Student
     4. Delete Student
     5. Edit Student
     6. Sort Students
     7. Save Data
     8. Exit
     ```
   - Enter the number corresponding to the action you want to perform.

4. **Follow Prompts**:
   - Follow the on-screen prompts to add, display, search, edit, delete, or sort students.
   - Use the **Save Data** option to save your changes to a file.
   - Use the **Load Data** option to load previously saved data when starting the program.

## File Structure

- `student_management.c`: The main C program file.
- `students.dat`: The binary file where student data is saved (created automatically after saving data).

## Example Usage

1. **Add a Student**:
   ```
   Enter ID: 101
   Enter Name: John Doe
   Enter Marks: 85.5
   Student added successfully.
   ```

2. **Display Students**:
   ```
   ID: 101, Name: John Doe, Marks: 85.50
   ID: 102, Name: Jane Smith, Marks: 90.00
   ```

3. **Search for a Student**:
   ```
   Enter ID to search: 101
   ID: 101, Name: John Doe, Marks: 85.50
   ```

4. **Delete a Student**:
   ```
   Enter ID to delete: 101
   Student deleted successfully.
   ```

5. **Edit a Student**:
   ```
   Enter ID to edit: 102
   Enter new Name: Jane Brown
   Enter new Marks: 92.0
   Student information updated successfully.
   ```

6. **Sort Students**:
   ```
   Sort by:
   1. ID
   2. Name
   3. Marks
   Enter your choice: 2
   Students sorted successfully.
   ```

7. **Save Data**:
   ```
   Data saved successfully.
   ```

8. **Exit**:
   ```
   Exiting program...
   ```

## Requirements

- A C compiler (e.g., GCC).
- A terminal or command-line interface.

## Notes

- The maximum number of students is set to `100` (can be modified in the code).
- Data is saved in a binary file (`students.dat`) for persistence.
- The program clears the console screen after each action for better readability.

## License

This project is open-source and available under the MIT License. Feel free to modify and distribute it as needed.

---
