# Design automation script which accept process name and display information of that processes if it is running
#       Usage : ProcInfo.py notepad

from sys import *
import psutil

def ProcessDisplay(Process_Name):

    for proc in psutil.process_iter():
        try:
            pinfo = proc.as_dict(['pid','name','username'])
            if(proc.name() == Process_Name):
                print(pinfo)
            
        except(psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess):
            pass
        

def main():
    print("This script is use to display the running processes")
    
    ProcessDisplay(argv[1])
    
if __name__ == "__main__":
    main()