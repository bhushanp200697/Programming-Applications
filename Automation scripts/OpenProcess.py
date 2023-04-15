from asyncio import subprocess
import os
import subprocess
from sys import *

def Open_Process(Process_Name):
    subprocess.Popen(Process_Name)


def main():
    print("------------------open process-------------------")
    
    print("Application name : ",argv[0])
    
    if(len(argv) != 2):
        print("Error : Invalid number of arguments")
        exit()
    
    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("This script is used to open the specific process at specific time")
        exit()
        
    if((argv[1] == "-u") or (argv[1] == "-U")):
        print("usage : Application_Name process_name")
        exit()
        
    Open_Process(argv[1])

if __name__ == "__main__":
    main()