import json
import os

# Define the path for the student records file
DATA_FILE = "students.json"

# Ensure the file exists
if not os.path.exists(DATA_FILE):
    with open(DATA_FILE, "w") as f:
        json.dump([], f)

# Student class
class Student:
    def __init__(self, roll_no, name, marks):
        self.roll_no = roll_no
        self.name = name
        self.marks = marks

    def to_dict(self):
        return {
            "roll_no": self.roll_no,
            "name": self.name,
            "marks": self.marks
        }

# Load student data
def load_students():
    with open(DATA_FILE, "r") as f:
        return json.load(f)

# Save student data
def save_students(students):
    with open(DATA_FILE, "w") as f:
        json.dump(students, f, indent=4)

# Add new student
def add_student():
    roll_no = input("Enter Roll Number: ")
    name = input("Enter Name: ")
    marks = float(input("Enter Marks: "))

    students = load_students()
    for s in students:
        if s['roll_no'] == roll_no:
            print("Student with this Roll Number already exists.")
            return

    student = Student(roll_no, name, marks)
    students.append(student.to_dict())
    save_students(students)
    print("Student added successfully.")

# View all students
def view_students():
    students = load_students()
    if not students:
        print("No records found.")
    else:
        print("\n--- Student Records ---")
        for s in students:
            print(f"Roll No: {s['roll_no']}, Name: {s['name']}, Marks:_]()")
