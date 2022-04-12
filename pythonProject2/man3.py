import requests

with open('link.txt', 'r', encoding='UTF-8') as f:
    data1 = f.read().splitlines()

t = 0

while t < len(data1):
    filename = str(t + 1).rjust(3, '0')
    r = requests.get(data1[t])
    with open(filename + '.png', 'wb') as file:
        file.write(r.content)
    print(data1[t])
    print("写入完成")
    t = t + 1
