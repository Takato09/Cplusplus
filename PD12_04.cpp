//Datortīkla diagnostikas programma
#include <iostream>
using namespace std;
int main()
{
    int comand;
    cout << "Jūs sveicina tīkla diagnosticēšanas programma" << endl;
    cout << "Lūdzu ievadiet veicamo darbību. Formāts: 1-ping, 2-tracert to google, 3-pathping, 4-iziet no programmas" << endl;
    while (true)
    {
        cin >> comand;
        switch (comand)
        {
            case 1:
                cout << "Reply from 192.168.1.1: bytes=32 time=102ms TTL=48\nReply from 192.168.1.1: bytes=32 time=105ms TTL=34\nReply from 192.168.1.1: bytes=32 time=105ms TTL=28\nReply from 192.168.1.1: bytes=32 time=108ms TTL=34\n";
                break;
            case 2:
                cout << "1 1 ms <1 <1 192.168.1.1\n2 498 ms 444 ms 302 ms ppp83-237-220-1.pppoe.mtu-net.ru [83.237.220.1]\n3 * * * .\n4 282 ms * * a197-crs-1-be1-53.msk.stream-internet.net [212.188.1.113]\n5 518 ms 344 ms 382 ms ss-crs-1-be5.msk.stream-internet.net [195.34.59.105]\n6 462 ms 440 ms 335 ms m9-cr01-po3.msk.stream-internet.net [195.34.53.85]\n7 323 ms 389 ms 339 ms bor-cr01-po4.spb.stream-internet.net [195.34.53.126]\n8 475 ms 302 ms 420 ms anc-cr01-po3.ff.stream-internet.net [195.34.53.102]\n9 334 ms 408 ms 348 ms 74.125.50.57\n10 451 ms 368 ms 524 ms 209.85.255.178\n11 329 ms 542 ms 451 ms 209.85.250.140\n12 616 ms 480 ms 645 ms 209.85.248.81\n13 656 ms 549 ms 422 ms 216.239.43.192\n14 378 ms 560 ms 534 ms 216.239.43.113\n15 511 ms 566 ms 546 ms 209.85.251.9\n16 543 ms 682 ms 523 ms 72.14.232.213\n17 468 ms 557 ms 486 ms 209.85.253.141\n18 593 ms 589 ms 575 ms yx-in-f100.google.com [74.125.45.100]\n";
                break;
            case 3:
                cout << "  0                                        COMP [192.168.1.23] \n                                0/ 100 =  0%   |\n  1    4мс     0/ 100 =  0%     0/ 100 =  0%  192.168.1.1 [192.168.1.1] \n                                0/ 100 =  0%   |\n  2    7мс     0/ 100 =  0%     0/ 100 =  0%  ppp71-76-112-1 [71.76.112.1] \n                                0/ 100 =  0%   |\n  3  ---     100/ 100 =100%   100/ 100 =100%  10.254.246.73 [10.254.246.73] \n                                0/ 100 =  0%   |\n  4   10мс     0/ 100 =  0%     0/ 100 =  0%  ss-cr04-be12.51.msk.stream-internet.net [212.188.1.5] \n                                0/ 100 =  0%   |\n  5   10мс     0/ 100 =  0%     0/ 100 =  0%  a197-cr04-be5.77.msk.stream-internet.net [195.34.59.106] \n                                0/ 100 =  0%   |\n  6    8мс     0/ 100 =  0%     0/ 100 =  0%  212.188.55.30 \n                                0/ 100 =  0%   |\n  7    8мс     0/ 100 =  0%     0/ 100 =  0%  a197-cr03-xe-0-0-1.5.msk.stream-internet.net [212.188.55.101] \n                                0/ 100 =  0%   |\n  8   10мс     0/ 100 =  0%     0/ 100 =  0%  a197-cr04-be19.10.msk.stream-internet.net [212.188.55.25] \n                                0/ 100 =  0%   |\n  9    9мс     0/ 100 =  0%     0/ 100 =  0%  cache.google.com [212.188.7.247] \n";
                break;
            case 4:
                return 0;
        }
    }
}

