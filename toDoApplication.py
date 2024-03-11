tasks = []



def addTask():
    task = input("Please enter a task-->")
    tasks.append(task)
    print(f"Task '{task}' has been succesfully added t your list.")


def deleteTask():
    listTasks()
    try:
        taskToDelete = int(input("Choose the number of the task you want to delete -->"))
        if taskToDelete>=o and taskToDelete < len(tasks):
            tasks.pop(taskToDelete)
            print(f"Task {taskToDelete} has been deleted.")
        else:
            print(f"Task #{taskToDelete} was not found.")
    except:
        print("Invalid input.")
        




def listTasks():

    if not tasks:
        print("There are no taks yet.")
    else:
        print("These are all the tasks :")
        for index, task in enumerate(tasks):
            print(f"Task #{index}. {task}")





if __name__ == "__main__":
    print("welcome to the to do list application.")
    while  True:
        print("\n")
        print("Please tell me something to do for today.")
        print("-----------------------------------------")
        print("Select something from the following :") 
        print("1. add a new task. ")
        print("2. remove task.")
        print("3. list all tasks.")
        print("4. exit.")

        choice = input("enter your choice :")

        if(choice == "1"):
            addTask()
        elif(choice == "2"):
            deleteTask()
        elif(choice == "3"):
            listTasks()
        elif ( choice == "4"):
            break
        else   :
            print("you have inputed an error please try again.") 
    print("Goodbye.")
