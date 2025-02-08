import itertools


def is_prime(n):
    for i in itertools.takewhile(lambda i: i * i <= n, range(2, n + 1)):
        if n % i == 0:
            return False

    return True


def solve():
    n = int(input())
    if is_prime(n):
        print('Prime')
    else:
        print('Not prime')


if __name__ == '__main__':
    solve()
