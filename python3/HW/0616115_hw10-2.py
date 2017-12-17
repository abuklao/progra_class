#!/usr/bin/env python3
import urllib.request, urllib.error, urllib.parse
import re
from bs4 import BeautifulSoup

html = urllib.request.urlopen("http://www.shopping.com/camera/products?CLT=SAS&KW=camera").read()
soupers = BeautifulSoup(html,'html.parser')
finders =  soupers.find_all('img',class_="imgZoomUrl149")

for finding in finders:
    if finding:
         print(finding['src'])

