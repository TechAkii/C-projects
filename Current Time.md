⏳ Display Current Time in C 🕒
📜 Description
This simple C program retrieves and displays the current system time in HH:MM:SS format using the time.h library.

🛠 How It Works
🕰️ Fetches the current system time using time(NULL).
📅 Converts it to a readable format using localtime().
📢 Prints the time in HH:MM:SS format.
🚀 Compilation & Execution
sh
Copy
Edit
gcc time_display.c -o time_display
./time_display
🔍 Example Output
sql
Copy
Edit
Current Time: 14:30:45
📌 Notes
The output will vary depending on the current system time.
localtime() returns a struct with time details, including hours, minutes, and seconds.
Happy coding! 🎯🚀
