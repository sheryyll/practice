todos = []

while True:
    print("\n--- TO DO LIST ---")
    print("1. Add Task")
    print("2. View Tasks")
    print("3. Remove Task")
    print("4. Exit")

    choice = input("Choose an option (1-4): ")

    if choice == "1":
        task = input("Enter task: ")
        todos.append(task)
        print("Task added!")

    elif choice == "2":
        if not todos:
            print("No tasks available.")
        else:
            print("\nYour Tasks:")
            for i, task in enumerate(todos, start=1):
                print(f"{i}. {task}")

    elif choice == "3":
        if not todos:
            print("No tasks to remove.")
        else:
            for i, task in enumerate(todos, start=1):
                print(f"{i}. {task}")
            index = int(input("Enter task number to remove: ")) - 1

            if 0 <= index < len(todos):
                removed = todos.pop(index)
                print(f"Removed: {removed}")
            else:
                print("Invalid task number.")

    elif choice == "4":
        print("Goodbye!")
        break

    else:
        print("Invalid choice. Try again.")