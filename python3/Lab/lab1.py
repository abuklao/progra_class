import urllib.request, urllib.error
import re
url = "https://docs.python.org/3/library/index.html"
page = urllib.request.urlopen(url)
dicto = {}
listo = []

for line in page:
    line = line.strip().decode()
    results = re.findall("</code> — ([^<]+)</a>",line)
    if results:
        for result in results:
            splits = result.split(' ')
            for splito in splits:
                dicto[splito] = dicto.get(splito,0) + 1
for k,v in dicto.items():
    listo.append((v,k))
listo = sorted(listo,reverse = True)
for v,k in listo[:10]:
    print(k+ ' ' + str(v))
