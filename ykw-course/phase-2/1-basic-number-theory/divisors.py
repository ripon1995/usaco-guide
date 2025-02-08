import itertools


def solve():
    n = int(input())
    ans = list()
    for i in itertools.takewhile(lambda i: i * i <= n, range(1, n + 1)):
        if n % i == 0:
            ans.append(i)
            if i != int(n / i):
                ans.append(int(n / i))

    ans.sort()
    print(*ans)


if __name__ == '__main__':
    solve()
