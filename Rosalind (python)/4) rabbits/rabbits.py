import sys


def rabbits(n, k):
	if n == 0:
		return 0
	if n == 1:
		return 1
	else:
		return rabbits(n-1, k) + k*rabbits(n-2, k)


n = int(sys.argv[1])
k = int(sys.argv[2])

print(rabbits(n, k))