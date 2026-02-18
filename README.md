# Educational Management System (EMS) - C++ Implementation

A robust C++ project designed to simulate an academic management platform. This system facilitates interactions between students, doctors, and teaching assistants, allowing for course registration, assignment submission, and performance tracking.

## 🏗️ System Architecture & Design

### 1. Object-Oriented Modeling
The system identifies and models core academic entities:
* **Users:** Specialized roles for Students, Doctors, and Teaching Assistants.
* **Academic Entities:** Management of Courses and Assignments.
* **Relationships:** Complex links such as Doctors teaching multiple courses and Students submitting unique solutions to specific assignments.

### 2. The Responsibility Principle
A core design philosophy of this project is to minimize class responsibilities to keep functions lean and maintainable. For example, the student logic is split into:
* **Student Struct:** Manages individual attributes and basic methods.
* **Students Manager:** Handles collections and operations across the entire set of students.
* **Student Flow Controller:** Manages the UI, menus, and user session logic (login/logout/signup).

### 3. Key Functional Modules
* **User Authentication:** Secure sign-in and sign-up flows with customized menus based on user roles (e.g., Doctors can create assignments, while Students view grades).
* **Relationship Management:** Automated linking of students to registered courses and assignments.
* **Dummy Data Generation:** Includes a specialized approach to handle circular data relationships during initialization.

## 🛠️ Technical Stack
* **Language:** C++
* **Design Pattern:** Manager-Controller pattern for clear separation of concerns.
* **Tools:** Developed and tested using the Eclipse IDE.
