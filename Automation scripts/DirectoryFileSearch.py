# Design automation script which accept directory name and file extension from user. Display all files with that extension
# Usage : DirectoryFileSearch.py "Demo"".txt"

from sys import *
import os

def Display_Files(Dir_List, Extension):
    print("Enter the path : ")
    Path = input()
    Dir_List = os.listdir(Path)
    
    for File in Dir_List:
        if(File.endswith(Extension)):
            print(File)

def main():
    if(len(argv) != 3):
        print("Invalid input")
        return
    
    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("This script will displays only such a files which you want to display")
        exit()
        
    if((argv[1] == "-u") or (argv[1] == "-U")):
        print("Usage : Application_Name Directory_Name File_Extension")
        exit()
    
    Display_Files(argv[1],argv[2])

if __name__ == "__main__":
    main()