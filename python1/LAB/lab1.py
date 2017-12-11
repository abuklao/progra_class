#!/usr/bin/python3.6
str = 'X-DSPAM-Confidence:0.8475'
indexo = str.find(":")
floato = float(str[indexo+1:])

print(floato)
