# C++ Practice

This repository is for saving every C++ exercise, quick check, homework answer and mini-project while learning.

## Rules

1. Put each exercise in the lecture folder that taught the topic.
2. Use one `.cpp` file per exercise.
3. Name files clearly, for example:
   - `01_variables.cpp`
   - `02_integer_division.cpp`
   - `03_class_basics.cpp`
4. Compile and run an exercise before committing it.
5. Commit after each completed exercise.
6. Use `practice-log.md` to track what you practiced.

## Folder structure

```text
cpp-practice/
├── README.md
├── GITHUB_SETUP.md
├── practice-log.md
├── templates/
│   └── basic_program.cpp
├── lecture01-introduction/
├── lecture02-basics/
├── lecture03-operators/
├── lecture04-io/
├── lecture05-selection-loops/
├── lecture06-arrays-structures/
├── lecture07-strings/
├── lecture08-functions/
├── lecture09-classes-inheritance/
├── lecture10-pointers/
├── lecture11-polymorphism-templates/
└── lecture12-files-streams/
```

## Compile one file

From inside the repository folder:

```bash
mkdir -p build
g++ lecture02-basics/01_variables.cpp -o build/01_variables
./build/01_variables
```

On some systems the output is:

```bash
./build/01_variables.exe
```

## Good commit messages

Use short messages that say what was practiced:

```bash
git commit -m "Complete Lecture 2 variable exercise"
git commit -m "Practice integer division and modulus"
git commit -m "Add class constructor example"
```

## What to include

- Working source code
- Short exercises
- Homework answers you wrote
- Small test programs
- Notes about what you learned

Do not commit build outputs. The `build/` folder is ignored.
