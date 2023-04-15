# Design automation script which accept two directory name.copy all files from first directory into second
# directory. Second directory should be created at run time.
# Usage : DirectoryCopy.py "Demo""Temp"
# Demo is name of dirctory which is exsisting and contains files in it. we have to create new directory as
# Temp and copy all files from Demo to Temp.

from sys import *
import os
import shutil

def Copy_Files(Dir_Name, Dest_Directory):
    
    Dir_Files = os.listdir(Dir_Name)
    
    if(os.path.exists(Dest_Directory)):
        print("Directory is already exists")
        return
    else:
        os.mkdir(Dest_Directory)
    
    for File in Dir_Files:
        shutil.copy2(os.path.join(Dir_Name,File),Dest_Directory)
    
    print("Files are successfully copied to new directory")

def main():
    if(len(argv) != 3):
        print("Invalid input")
        return
    
    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("This script is use to copy all files from one directory to another directory")
        exit()
        
    if((argv[1] == "-u") or (argv[1] == "-U")):
        print("Usage : Application_Name Available_Directory_Name New_Directory_Name")
        exit()
    
    Copy_Files(argv[1],argv[2])

if __name__ == "__main__":
    main()