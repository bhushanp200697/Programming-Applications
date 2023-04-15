# Design automation script which accept directory name from user and create log file in that directory
# which contains information of running processes as its name, pid, username
#       Usage : ProcInfoLog.py Demo

from datetime import *
import psutil
import os
import time
from sys import *

def ProcessDisplay(log_dir = "Log"):
    listprocess = []
    
    if not os.path.exists(log_dir):
        try:
            os.mkdir(log_dir)
        except:
            pass
    
    separator = "-" * 80
    log_path = os.path.join(log_dir, "ProcessLog.log")
    f = open(log_path,'w')
    f.write(separator + "\n")
    f.write("process logger : " + time.asctime() + "\n")
    f.write(separator + "\n")
    
    for proc in psutil.process_iter():
        try:
            pinfo = proc.as_dict(attrs= ['pid', 'name','username'])            
            listprocess.append(pinfo)
        except(psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess):
            pass
    
    for element in listprocess:
        f.write("%s\n" %element)
        

def main():
    
    print("Application name : "+argv[0])
    
    if(len(argv) != 2):
        print("Error : Invalid number of arguments")
        exit()
        
    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("This script is used log record of running processes")
        exit()
        
    if((argv[1] == "-u") or (argv[1] == "-U")):
        print("usage : ApplicationName AbsolutePath_of_Directory")
        exit()
        
    try:
        ProcessDisplay(argv[1])
    except ValueError:
        print("Error : invalid data type of input")
    except Exception:
        print("Error : invalid input")
        
    
if __name__ == "__main__":
    main()