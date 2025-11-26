

---

# 🏆 **Match Scheduling System (C Program)**


---

## 📌 **Abstract**

The **Match Scheduling System** is a simple yet efficient C-based application built to manage sports match schedules. It supports adding, viewing, searching, updating, and deleting match details — all stored securely in a binary data file for persistent access.

This project demonstrates concepts like:

🔹 File handling
🔹 Structures
🔹 Control flow
🔹 Persistent storage
🔹 CLI-based interaction

Its lightweight design ensures that anyone — from beginners to event coordinators — can use it effectively.

---

## ✨ **Features**

✔️ **Add new match records** (Match ID, Teams, Date, Time, Venue, etc.)
✔️ **View all schedules** in a clean, organized format
✔️ **Search** matches by:
 🔸 Match ID
 🔸 Team Names
✔️ **Update existing match details**
✔️ **Delete match schedules**
✔️ **Persistent storage** using `matches.dat`
✔️ **Auto-create data file** if missing
✔️ **Beginner-friendly** C program
✔️ **Fully terminal-based CLI UI**
✔️ **Simple error handling** for invalid input

---

## 🛠️ **Technical Requirements**

### 🖥️ **1. System Requirements**

* 💻 Windows / Linux / macOS
* 🧰 Terminal / Command-line
* 🧠 RAM: *Minimum 4 MB*
* 💾 Very small disk usage (.dat file)

### 🧑‍💻 **2. Software Requirements**

* C Compiler: **GCC / Clang / MinGW / MSVC**
* Any text editor/IDE (VS Code, Code::Blocks, Dev-C++, Vim, etc.)
* *Optional:* Make utility

### 🔧 **3. Programming Requirements**

* Language: **C**
* Supported Standards: **C89 / C99 / C11**
* Standard Libraries Used:

  * `<stdio.h>`
  * `<stdlib.h>`
  * `<string.h>`

### 💿 **4. File Handling**

* Read/write access in working directory
* Data stored as: **binary file (`matches.dat`)**
* Auto-creation of file on first run

### ⚙️ **5. Compilation Requirements**

* Code compiles without errors
* Recommended flags:

  ```bash
  -Wall
  ```

---

## 📂 **Functional Requirements**

### 🎛️ **1. User Interface**

* 100% terminal-based
* Clear and interactive menu
* Validates inputs

### 🗂️ **2. Match Operations**

* ➕ **Add Match**
* 🔍 **Search Match** (by ID or teams)
* 📋 **View All Matches**
* ✏️ **Update Match Details**
* ❌ **Delete Match Record**

### 🗄️ **3. Data Management**

* Persistent storage in `.dat` file
* Handles empty/missing files
* Retains data across sessions

### 🔁 **4. Program Flow**

* Looping menu until user exits
* Confirmation + error messages
* Smooth navigation

---

## ▶️ **How to Run the Program**

### 🔨 **1. Compile the Program**

```bash
gcc match_scheduling.c -o match_scheduling
```

### 🚀 **2. Run the Executable**

**Linux/macOS:**

```bash
./match_scheduling
```

**Windows:**

```bash
match_scheduling.exe
```

### 💾 **3. Data File**

* Automatically creates **matches.dat**
* Stores and retrieves all match schedules

---

## 🖼️ **Screenshots**

📌 Main Menu

<img width="315" height="217" alt="Screenshot 2025-11-26 204656" src="https://github.com/user-attachments/assets/5304e4d2-4db0-4388-98a2-006dee627499" />


📌 Add New Match

<img width="336" height="412" alt="image" src="https://github.com/user-attachments/assets/ae2de054-3f79-4be4-9e5d-2e9ce6c6835e" />


📌 View All Matches

<img width="685" height="326" alt="image" src="https://github.com/user-attachments/assets/44f4e643-dad3-4bcb-b82a-675a64d6c463" />


📌 Search Match

<img width="297" height="452" alt="Screenshot 2025-11-26 205106" src="https://github.com/user-attachments/assets/60b951d2-ae23-4e62-a599-0cb1c589f9ca" />


📌 Update Match

<img width="368" height="358" alt="Screenshot 2025-11-26 205255" src="https://github.com/user-attachments/assets/32842e65-bd21-4457-8fc7-9508f0f2d8d3" />


📌 Delete Match

<img width="289" height="295" alt="Screenshot 2025-11-26 205630" src="https://github.com/user-attachments/assets/a721805f-6415-4af3-8465-0d2d1e782298" />

📌 Exit

<img width="288" height="243" alt="Screenshot 2025-11-26 205703" src="https://github.com/user-attachments/assets/010cb252-2caf-4412-b1b5-e0f9f365514c" />


---

