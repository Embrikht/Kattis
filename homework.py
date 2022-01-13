import sys
counter = 0
line = sys.stdin.readline()
line = line.strip("\n").split(";")
for element in line:
    try:
        element = int(element)
        counter += 1
    except:
        element = element.split("-")
        for i in range(int(element[0]), int(element[1])+1):
            counter += 1
print(counter)
