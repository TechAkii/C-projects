🏋️‍♂️ FitGym Registration & Workout Plan System 🧑‍⚕️
📜 Description
This C program allows users to register with their details, check their BMI, and manage their workout plans. It also lets registered users view their information and update their workout plan.

🛠 Features
Registration: Allows new users to register with their personal details like name, age, address, height, and weight.
BMI Calculation: Calculates BMI based on the entered height and weight and classifies the user into categories: Underweight, Normal, Overweight, or Obese.
User Info: Registered users can view their saved data from a text file.
Workout Plan: Users can choose to buy items or view/change their workout plan.
Exit Option: Allows the user to exit the program at any time.
🧑‍💻 How It Works
Registration:

Collects user details like name, age, address, height, and weight.
Saves data in a file (gym.txt).
Calculates and displays BMI with categories:
Underweight: BMI <= 18.4
Normal: 18.5 <= BMI <= 24.9
Overweight: 25 <= BMI <= 39.9
Obese: BMI >= 40
User Menu:

Allows users to buy items, workout plans, or view/change plans.
Users can exit the program.
Info Display:

Displays registered user data from gym.txt based on name.
🚀 Compilation & Execution
sh
Copy
Edit
gcc fitgym.c -o fitgym
./fitgym
🔍 Example Output
yaml
Copy
Edit
Welcome to FitGym
Are you already registered? (1 for Yes, 0 for No): 1
Enter your Name: John
Welcome John!
1. Buy an item
2. Workout plan
3. Change the plan
4. Info
5. Exit
Enter your choice (enter the number): 4
Name: John, Age: 25, City: Colombo, Road: Galle, House: ABC, Zip: 12345, Height: 175, Weight: 70, BMI: 22.86
📌 Notes
Data is stored in a text file gym.txt, which is created when the user registers.
The program reads and writes data from this file.
Users can register once, and their details will be saved for future sessions.
Choose options from the menu to interact with the program.
💡 Ideas for Improvement
Enhance error handling for file operations.
Allow users to update their information or delete their profile.
Implement a more advanced workout plan or item buying system.
Happy coding! 🎯💻
