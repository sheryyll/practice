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
        if len(todos) == 0:
            print("No tasks available.")
        else:
            print("\nYour Tasks:")
            i = 1
            for task in todos:
                print(i, ".", task)
                i += 1

    elif choice == "3":
        if len(todos) == 0:
            print("No tasks to remove.")
        else:
            i = 1
            for task in todos:
                print(i, ".", task)
                i += 1

            index = int(input("Enter task number to remove: ")) - 1

            if index >= 0 and index < len(todos):
                removed = todos.pop(index)
                print("Removed:", removed)
            else:
                print("Invalid task number.")

    elif choice == "4":
        print("Goodbye!")
        break

    else:
        print("Invalid choice. Try again.")