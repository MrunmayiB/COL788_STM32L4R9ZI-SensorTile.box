# COL788
## STM32L4R9ZI-SensorTile.box

### Achieved
Updated code of HSDatalog for it to log data every 1 min by creating new files every 1 min

### Steps
1. Created a new signal "NEWFILE_SIGNAL"
2. Created a 1 min timer callback - a function which is called every 1 min
3. This function then sends the NEWFILE_SIGNAL to the main thread of sd card manager
4. The main thread on recieving this NEWFILE_SIGNAL, closes the current files and opens new files for logging
5. This is done on every callback to the timer function

### Example

Added STBOX_00001.zip.gz as an example of the log file that is created every 1 min
