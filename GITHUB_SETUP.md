# GitHub Setup

## 1. Create the GitHub repository

1. Open GitHub.
2. Select **New repository**.
3. Name it `cpp-practice`.
4. Choose Public or Private.
5. Do **not** add a README, `.gitignore`, or license yet.
6. Create the repository.

## 2. Upload this project

Open a terminal in the project folder:

```bash
cd cpp-practice
git init
git branch -M main
git add .
git commit -m "Initial C++ practice project"
git remote add origin https://github.com/YOUR_USERNAME/cpp-practice.git
git push -u origin main
```

Replace `YOUR_USERNAME` with your GitHub username.

## 3. Add a new exercise

Example: after finishing a Lecture 3 exercise:

```bash
git status
git add lecture03-operators/02_integer_division.cpp
git commit -m "Practice integer division and modulus"
git push
```

## 4. Useful commands

```bash
git status
```

Shows changed and untracked files.

```bash
git add .
```

Stages every change.

```bash
git commit -m "Describe the exercise"
```

Saves the staged changes.

```bash
git push
```

Uploads commits to GitHub.

## 5. Recommended workflow

1. Learn one concept.
2. Write the exercise.
3. Compile and run it.
4. Fix errors.
5. Update `practice-log.md`.
6. Add, commit and push the exercise.
