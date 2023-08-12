nich v1.2
========================

Nich is a powerful open source toolkit for sorting and bookmarking file content from low level to high level files. Useful for bookmarking unwanted and specific keywords from files. Tested and working on Kali Linux, Ubuntu, Linux Mint and Other Operating Systems. 
    
    
    nich --search '.com' --path '/home/nich/popular_sites.txt'
    cleared
    ::line 1 found match -> google.com
    ::line 2 found match -> facebook.com
    ::line 3 found match -> youtube.com
    ::line 4 found match -> baidu.com
    ::line 5 found match -> yahoo.com
    ::line 6 found match -> amazon.com
    ::line 8 found match -> qq.com
    ::line 9 found match -> twitter.com
    ::line 12 found match -> taobao.com
    ::line 13 found match -> live.com
    ::line 14 found match -> sina.com.cn
    ::line 16 found match -> linkedin.com
    ::line 17 found match -> weibo.com
    ::line 18 found match -> ebay.com
    total found :: 14

Installation
----------

Installing localize 


    $ wget "https://github.com/conorcert/nich/localize.sh"
Giving localize executable permissions


    $ sudo chmod 777 localize.sh 
Running localize to install dependencies and full pkg


    $ sudo ./localize.sh     

Usage
-------------

Running nich search mode

    $ nich --search 'word_to_bookmark_and_extract' --path 'full_path_to_file' -c 
    
Running nich remove mode

    $ nich --remove 'word_to_bookmark_and_remove' --path 'full_path_to_file' -c 

Running nich help mode

    $ nich --help     



User Guide
-------------

    --search  -  bookmark and extract specific lines containing a keyword (eg. nich --search 'keyword').
    --remove  -  bookmark and remove specific lines containing a keyword (eg. nich --remove 'keyword').
    --path    -  path to file for process(eg. nich --search 'keyword' --path '/home/nich/nichfile.txt').
    -c        -  for cleaning log files before starting process.
Support: https://t.me/conorcert_dev <br>
Author: conorcert<br>
Copyright www.conorcert.dev
