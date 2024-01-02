# COL788
## STM32L4R9ZI-SensorTile.box

### Achieved
Changed the code to make it generate new log files every 1 min

### Steps
1. Created a new signal "NEWFILE_SIGNAL"
2. Created a 1 min timer callback - a function which is called every 1 min
3. This function then sends the NEWFILE_SIGNAL to the main thread of sd card manager
4. The main thread on recieving this NEWFILE_SIGNAL, closes the current files and opens new files for logging
5. This is done on every callback to the timer function