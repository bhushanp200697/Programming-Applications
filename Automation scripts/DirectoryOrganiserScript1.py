# directory travel and display all file names in it

import os
from sys import *
import shutil


def Directory_Organiser(Dir_Name,Dest_Dir_Name, File_Extension):
    if(os.path.exists(Dest_Dir_Name)):
        print("Directory is already exists")
        return
    else:
        os.mkdir(Dest_Dir_Name)
    
    for foldername,subfolder,filenames in os.walk(Dir_Name):

        for fnames in filenames:
            if(fnames.lower().endswith(File_Extension)):
                shutil.copy2(os.path.join(foldername,fnames),Dest_Dir_Name)
    
    print("Files are successfully copied")

def main():
    print("Directory organiser application")
    
    if(len(argv) != 4):
        print("insuffucient arguments")
        exit()
    
    if(argv[1] == "-h"):
        print("This script will travel the directory and copy the required extention files to the folder you want")
        exit()
        
    if(argv[1] == "-u"):
        print("Usage : Application_Name Input_Directory_Name Output_Directory_Name File_Extension")
        exit()
        
    Directory_Organiser(argv[1], argv[2],argv[3])
    
if __name__ == "__main__":
    main()