import socket

seeders = [
    'BARAseed.mempool.pw',
    'BARAseed1.barandos.com',
    'BARAseed2.barandos.com',
    'BARAseed3.barandos.com',
    'BARAseed4.barandos.com',
    'BARAseed5.barandos.com',
    'BARAseed1.barandos.site',
    'BARAseed2.barandos.site',
    'BARAseed3.barandos.site',
    'BARAseed4.barandos.site',
    'BARAseed5.barandos.site'
]

for seeder in seeders:
    try:
        ais = socket.getaddrinfo(seeder, 0)
    except socket.gaierror:
        ais = []
    
    # Prevent duplicates, need to update to check
    # for ports, can have multiple nodes on 1 ip.
    addrs = []
    for a in ais:
        addr = a[4][0]
        if addrs.count(addr) == 0:
            addrs.append(addr)
    
    print(seeder + ' = ' + str(len(addrs)))
