from sys import *
import os
import hashlib
import time
  

def hashfile(path,blocksize = 1024):
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
        for dirname,subdirs,filelist in os.walk(path):
            print("current folder is : ",dirname)
            for filen in filelist:
                path = os.path.join(dirname,filen)
                file_hash = hashfile(path)
                print(path)
                print(file_hash)
                print(" ")
    else:
        print("Invalid path")
        

def main():
    print("------------------Duplicate file removal script-------------------")
    
    print("Application name : ",argv[0])
    
    if(len(argv) != 2):
        print("Error : Invalid number of arguments")
        exit()
    
    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("This script is used to traverse specific directory and delete duplicate files")
        exit()
        
    if((argv[1] == "-u") or (argv[1] == "-U")):
        print("usage : ApplicationName AbsolutePath_of_Directory Extension")
        exit()
        
    try:
        arr = {}
        start_time = time.time()
        arr = DisplayChecksum(argv[1])
        end_Time = time.time()
        
        print("Took %s seconds to evaluate."%(end_Time - start_time))
        
    except ValueError:
        print("Error : Invalid datatype of input")
    except Exception as E:
        print("Error : Invalid input ",E)

if __name__ == "__main__":
    main()