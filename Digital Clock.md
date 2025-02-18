🕓 Digital Clock Simulation in C ⏲️

  📜 Description
  
    This C program simulates a digital clock by displaying the current time in HH:MM:SS format, updating every second. It runs indefinitely and resets after 24 hours.

  🛠 How It Works

    ⏳ Initializes the time variables: hour, minute, and second.
    🔄 Continuously updates the time every second using a while(1) loop.
    ⏰ If seconds reach 60, it increments minutes and resets seconds.
    🕐 When minutes reach 60, it increments hours and resets minutes.
    🌙 After 24 hours, the clock resets to 00:00:00.
    💤 Pauses the program for 1 second with sleep(1) before updating the time.
    🚀 Compilation & Execution

  🔍 Example Output

    00 : 00 : 00  
    00 : 00 : 01  
    00 : 00 : 02  
    ...
    23 : 59 : 59  
    00 : 00 : 00  (Then the cycle restarts)
    
  📌 Notes
  
    The clock runs indefinitely until you stop it manually (Ctrl+C).
    Uses sleep(1) for a 1-second pause to simulate real-time updating.

---

    Happy coding! 🎯⌛
