#!/usr/bin/env python3
import socket

def filter(url):
    #stort up sockets
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    port = 80

    #get the host:
    splitters = url.strip().split('/')
    if len(splitters) > 2:
        host = splitters[2]
        dire = '/'.join(splitters[3:])
        print("This is your directory : "+dire)
    else:
        host = url
    
    #start connections
    print('your url is : '+url+'\nyour hostname is : '+host)
    stringo = "GET "+url+" HTTP/1.1\nHost: "+host+"\n\n"
    s.connect((host,80))
    cmd = stringo.encode()
    s.sendall(cmd)

    totalnum = 0
    #receive information in loops until there inothing more to receive 
    while True:
        data = s.recv(1024)
        if(len(data) < 1):
            s.close()
            break
        stringos = data.decode();
        cnum = len(stringos)
        #check for the number of chacters in the document and stop at 3000
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
#catch any exceptions that may occur
try:
    filter(url)
except Exception as e:
    print("Could not download because : "+str(e))
