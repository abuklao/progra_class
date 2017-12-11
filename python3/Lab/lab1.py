import urllib.request, urllib.error
import re
url = "https://docs.python.org/3/library/index.html"
page = urllib.request.urlopen(url)
for line in page:
    line = line.strip()
    result = re.findall("</code> ([^<]+)</a>",line)
    print(line)
