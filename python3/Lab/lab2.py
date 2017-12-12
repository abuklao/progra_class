import urllib.request, urllib.parse, urllib.error
from bs4 import BeautifulSoup
url = "https://docs.python.org/3/library/index.html"
html = urllib.request.urlopen(url).read()
soup = BeautifulSoup(html, 'html.parser')
tags = soup.find_all('li', class_="toctree-l2")

for tag in tags: 
    print(''.join(tag.find_all(text=True)))
