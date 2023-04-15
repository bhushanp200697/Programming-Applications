# Design automation script which accept directory name and two file extension from user. 
# rename all files with first file extension with second file extension
# Usage : DirectoryRename.py "Demo"".txt" ".doc"
# Demo is name of dirctory and .txt is the extension that you want to search and rename with .doc
# After execution this script each .txt file gets renamed as .doc

from sys import *
import os

def Display_Files(Dir_Name, Current_Extension, Requied_Extension):
    print("Enter the path : ")
    Path = input()
    Dir_Name = os.listdir(Path)
    
    for File in Dir_Name:
        if(File.endswith(Current_Extension)):
            fName = os.path.splitext(File)[0]
            os.rename(File, fName + Requied_Extension)

def main():
    if(len(argv) != 4):
        print("Invalid input")
        return
    
    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("This script is use to change the extension of file")
        exit()
        
    if((argv[1] == "-u") or (argv[1] == "-U")):
        print("Usage : Application_Name Directory_Name Current_File_Extension Required_File_Extension")
        exit()
    
    Display_Files(argv[1],argv[2],argv[3])

if __name__ == "__main__":
    main()