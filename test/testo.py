import socket
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
sock.connect(('shopping.pchome.com.tw',80))

cmd = 'GET http://shopping.pchome.com.tw/index/ HTTP/1.0\r\n\r\n'.encode()
sock.send(cmd)
while True:
    data = sock.recv(512)
    if(len(data) < 1):
        break;
    try: 
        print(data.decode(),end='')
    except UnicodeDecodeError:
        pass

sock.close()
