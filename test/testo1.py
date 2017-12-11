import urllib.request, urllib.parse, urllib.error

f  = urllib.request.urlopen('http://www.nctu.edu.tw/')
for line in f:
    line = line.decode().strip()
    if line.find("href=") != -1:
        print(line)
