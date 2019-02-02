import os, string
import schedule,glob
import time,pathlib

def job():
    file_list=list()
    available_drives = ['%s:' % d for d in string.ascii_uppercase if os.path.exists('%s:' % d)]
    for i in available_drives:
        for filepath in pathlib.Path(i+'//').glob('**/*.txt'):
            file_list.append(str(filepath.absolute()))
        for b in file_list:
            time1=os.path.getmtime(b)
            time2=time.time()
            if time2-time1 < 500:
                file = open("I://copy2.txt", "a+") 
                file.write(b+"\n") 
                file.close()
    return
#schedule.every().day.at("19:38").do(job,'It is 01:00')
#while True:
#    schedule.run_pending()
#   time.sleep(60)
job()