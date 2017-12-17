#!/usr/bin/env python3
import socket

def filter(url):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    port = 80
    splitters = url.strip().split('/')
    host = splitters[2]
    #host = socket.gethostbyname(host)
    dire = '/'.join(splitters[3:])
    print("This is your directory : "+dire)
    print('your url is : '+url+'\nyour hostname is : '+host)
    s.connect((host,80))
    stringo = "GET "+url+" HTTP/1.1\nHost: "+host+"\n\n"
    cmd = stringo.encode()
    s.sendall(cmd)

    totalnum = 0
    while True:
        data = s.recv(1024)
        if(len(data) < 1):
            s.close()
            break
        stringos = data.decode();
        cnum = len(stringos)
        if totalnum <= 3000:
            if (totalnum+cnum) > 3000:
                difference = 3000-totalnum
                print(stringos[:difference],end='')
            else:
                print(stringos,end="")
        totalnum = totalnum + cnum
    s.close()
    print("\nTotal amount of characters is : "+str(totalnum))


url = input("Please write down your url\n")
try:
    filter(url)
except Exception as e:
    print("Could not download because : "+e)
