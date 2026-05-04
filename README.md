# 🧠 SQL Compiler Design (Phase-I)

A Compiler Design project that implements a **SQL Compiler using C, Lex, and Yacc**, designed to parse and analyze SQL queries and convert them into executable structures.

---

## 📌 Project Overview

This project focuses on building a **SQL Compiler** that:

* Parses SQL queries
* Validates syntax using grammar rules
* Performs semantic analysis
* Generates structured output for database execution

It enables communication between applications and relational databases by translating SQL into executable form.

---

## 🎯 Aim

To design and implement a compiler that:

* Understands SQL queries
* Performs syntax and semantic analysis
* Generates efficient query structures

---

## 🧾 Introduction

As described in the report (Page 2) :

A SQL compiler translates SQL queries into executable code for database systems. It:

* Parses SQL statements
* Optimizes queries
* Generates execution plans

---

## 🛠 Technologies Used

* **Language:** C
* **Tools:**

  * Lex (Lexical Analyzer)
  * Yacc (Syntax Analyzer)
* **Concepts:** Compiler Design

---

## 📊 Supported Data Types

* `INT`
* `CHAR`
* `FLOAT`
* `BIT`
* `TIMESTAMP`
* `VARCHAR(size)`

---

## 🧠 Compiler Design Phases

### 🔹 Lexical Analysis

* Converts SQL query into tokens

### 🔹 Syntax Analysis (Parser)

* Converts tokens into parse tree
* Validates grammar

### 🔹 Semantic Analysis

* Ensures correctness of statements
* Validates data types and declarations

---

## 📐 Context-Free Grammar (CFG)

### For Database Creation

```sql id="cfg1"
CREATE DATABASE <database_name>;
```

### For Table Creation

```sql id="cfg2"
CREATE TABLE <table_name> (
    <column_name> <data_type>,
    ...
);
```

---

## 🔄 Supported SQL Operations

As mentioned in the report (Page 3) :

* Create Table
* Drop Table
* Rename Table
* Select Data
* Insert Values

---

## 🧩 Parser Design

Parser (Syntax Analyzer):

* Takes token stream as input
* Uses grammar rules
* Produces parse tree

---

## 🔍 Semantic Actions

Semantic analysis ensures:

* Correct variable declarations
* Valid data types
* Logical consistency in SQL queries

---

## ⚙️ Implementation

As stated in the report (Page 4) :

* Implemented using **Lex and Yacc code**
* Integrated with **C language backend**

---

## 📂 Project Structure

```bash id="struct1"
SQL-Compiler/
│── lexer.l
│── parser.y
│── main.c
│── README.md
```

---

## ▶️ How to Run

### Step 1: Compile Lex File

```bash id="run1"
lex lexer.l
```

### Step 2: Compile Yacc File

```bash id="run2"
yacc -d parser.y
```

### Step 3: Compile C Code

```bash id="run3"
gcc lex.yy.c y.tab.c -o compiler
```

### Step 4: Run

```bash id="run4"
./compiler
```

---

## 📸 Output

* SQL query parsing
* Syntax validation
* Error detection (invalid queries)

---

## ✅ Conclusion

This project demonstrates:

* Practical implementation of compiler design concepts
* SQL parsing using Lex & Yacc
* Syntax and semantic validation

---

## 👨‍💻 Team Members

* Ganesh Sesha Sai Akhil K (AP21110010931)
* Lokesh T (AP21110010956)
* Sai Amruth D (AP21110010962)
* Sai Dheeraj J (AP21110011244)

---

## 🎓 Guidance

**Dr. Jaya Lakshmi Tangirala**

---

## 🚀 Future Enhancements

* Add query optimization
* Support advanced SQL queries
* Integrate with real database systems
* Build GUI interface

---

## ⭐ Support

If you like this project, give it a ⭐ on GitHub!
