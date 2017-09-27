import sys

fileName = sys.argv[1]
file = open(fileName, 'r')


seqA = file.readline().strip()
seqB = file.readline().strip()

count = 0
for i in range(len(seqA)):
	if seqA[i] != seqB[i]:
		count+=1

print(count)