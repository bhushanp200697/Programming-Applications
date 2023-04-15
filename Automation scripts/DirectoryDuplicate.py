
# Design automation script which accept directory name and write names of duplicate files from that
# directory into log file named as Log.txt. Log.txt file should be created into current diectory
#       Usage : DirectoryDuplicate.py "Demo"
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


def FindDuplicate(path):
   
    flag = os.path.isabs(path)
    
    if flag == False:
        path = os.path.abspath(path)
    
    exists = os.path.isdir(path)
    
    dups = {}
    
    if exists:
        for dirname,subdirs,filelist in os.walk(path):
            
            for filen in filelist:
                path = os.path.join(dirname,filen)
                file_hash = hashfile(path)
                
                if file_hash in dups:
                    dups[file_hash].append(path)
                else:
                    dups[file_hash] =[path]
                    
        return dups
    else:
        print("Invalid path")
    
    
def Log_Duplicate(dict):
    
    results = list(filter(lambda x : len(x) > 1,dict.values()))

    if len(results) > 0:
        
        if(os.path.exists("Log.txt")):
            print("File is already existing")
            return    
        else:
            fOpen = open("Log.txt", "w")
    
        icnt = 0
        
        for result in results:
            for subresult in result:
                icnt += 1
                if icnt >=2:
                    fOpen.write(subresult + "\n")
        
        fOpen.close()
    
    else:
        print("No duplicate file found")
        

def main():
    print("----------------Directory Automation script-----------------")
    
    if(len(argv) != 2):
        print("Error : Invalid number of arguments")
        exit()

    if(argv[1] == "-h") or (argv[1] == "-H"):
        print("This script is use to travel the specific directory and write the duplicate file names in the Log file")
        exit()
        
    if(argv[1] == "-u"):
        print("Usage : Application_Name Directory_Name")
        exit()
    

    arr = {} 
    arr = FindDuplicate(argv[1])
    Log_Duplicate(arr)
   
    
if __name__ == "__main__":
    main()