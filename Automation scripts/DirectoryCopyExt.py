# Design automation script which accept two directory name and one file extension.copy all files with the 
# specified extension from first directory into second directory. Second directory should be created at run time.
#           Usage : DirectoryCopyExt.py "Demo""Temp"".exe"
# Demo is name of dirctory which is exsisting and contains files in it. we have to create new directory as
# Temp and copy all files with extension .exe from Demo to Temp.

from sys import *
import os
import shutil

def Copy_Files(Dir_Name, Dest_Directory, File_Extension):
    
    Dir_Files = os.listdir(Dir_Name)
    
    if(os.path.exists(Dest_Directory)):
        print("Directory is already exists")
        return
    else:
        os.mkdir(Dest_Directory)
    
    for File in Dir_Files:
        if(File.endswith(File_Extension)):
            shutil.copy2(os.path.join(Dir_Name,File),Dest_Directory)
    
    print("Files are successfully copied to new directory")

def main():
    if(len(argv) != 4):
        print("Invalid input")
        return
    
    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("This script is use to copy the files having specific extension from one directory to another directory")
        exit()
        
    if((argv[1] == "-u") or (argv[1] == "-U")):
        print("Usage : Application_Name Available_Directory_Name New_Directory_Name File_Extension")
        exit()
    
    Copy_Files(argv[1],argv[2],argv[3])

if __name__ == "__main__":
    main()