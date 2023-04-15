
# Design automation script which accept directory name and display checksum of all files
#       Usage : DirectoryChecksum.py "Demo"
# Demo is name of directory

from sys import *
import os
import hashlib

def hashfile(path, blocksize = 1024):
    afile = open(path,'rb')
    hasher = hashlib.md5()
    buf = afile.read(blocksize)
    
    while(len(buf) > 0):
        hasher.update(buf)
        buf = afile.read(blocksize)
    afile.close()
    return hasher.hexdigest()


def DisplayChecksum(path):
    flag = os.path.isabs(path)
    
    if flag == False:
        path = os.path.abspath(path)
    
    exists = os.path.isdir(path)
    
    if exists:
        for dirName,subDir,fileList in os.walk(path):
            print("Current directory is : "+dirName)
            
            for fname in fileList:
                path = os.path.join(dirName,fname)
                file_hash = hashfile(path)
                print(path)
                print(file_hash)
                print('')
                
    else:
        print("Invalid path")
        

def main():
    print("----------------Directory Automation script-----------------")
    
    if(len(argv) != 2):
        print("Error : Invalid number of arguments")
        exit()

    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("This script is use to travel the specific directory and display the checksum of all files")
        exit()
        
    if((argv[1] == "-u") or (argv[1] == "-U")):
        print("Usage : Application_Name Directory_Name")
        exit()
        
    DisplayChecksum(argv[1])
    
if __name__ == "__main__":
    main()