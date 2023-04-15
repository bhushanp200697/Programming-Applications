
import os
import subprocess
from sys import *
import psutil
import schedule
import time
import datetime

def DisplayProcess():
    listprocess = []
    
    for process in psutil.process_iter():
        try:
            pinfo = process.as_dict(attrs= ['pid', 'name','username'])
            listprocess.append(pinfo)
        except(psutil.NoSuchProcess,psutil.AccessDenied,psutil.ZombieProcess):
            pass
        
    return listprocess


def kill_Process(Process_Name):
    for process in psutil.process_iter():
        try:
            pinfo = process.as_dict(attrs= ['pid', 'name','username'])
            if(process.name() == Process_Name):
                process.kill()
        except(psutil.NoSuchProcess,psutil.AccessDenied,psutil.ZombieProcess):
            pass


def main():
    print("------------------kill the process-------------------")
    
    print("Application name : ",argv[0])
    
    if(len(argv) != 2):
        print("Error : Invalid number of arguments")
        exit()
    
    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("This script is used to display running processes and delete specific process after every specific time")
        exit()
        
    if((argv[1] == "-u") or (argv[1] == "-U")):
        print("usage : Application_Name process_name")
        exit()
    
    print("current time is : ",datetime.datetime.now()) 
    
    listprocess = DisplayProcess()

    for elem in listprocess:
        print(elem)

    schedule.every(10).minutes.do(kill_Process,argv[1]) 
  
      
    while(True):
        schedule.run_pending()
        time.sleep(600)
       

if __name__ == "__main__":
    main()