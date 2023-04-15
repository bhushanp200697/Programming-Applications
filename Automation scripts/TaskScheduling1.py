# display hello after each 1 minet

import schedule
import time
import datetime

def Fun():
    print("inside fun at the time : ",datetime.datetime.now())

def main():
    print("inside task schdular")
    
    print("current time is : ",datetime.datetime.now())
    schedule.every(1).minutes.do(Fun)
    
    while(True):
        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()
    
    
