# -*- coding: utf-8 -*-
"""
Created on Tue Aug 27 23:57:17 2019

@author: A AHAD ALIF
"""

import sys
from encode_decode import encoding_func, decoding_func

data_file = open("data.txt", "r")
data = data_file.readlines()
for number, data in enumerate(data, 1):
    print("Encoding process: ")
    print("The size of the data is: {}".format(sys.getsizeof(data)))
    #print("The content of the data is: {}".format(senctence))
    
    
    tree, encoded_data = encoding_func(data)
    with open("encoding.txt",'w',encoding = 'utf-8') as f:
        f.write("Encoded Data: {}".format(encoded_data))
    
    print("The size of the encoded data is: {}\n".format(sys.getsizeof(int(encoded_data, base=2))))
    
    print("Decoding process: ")
    decoded_data = decoding_func(encoded_data, tree)
    with open("decoding.txt",'w',encoding = 'utf-8') as f:
        f.write("Decoded Data: {}".format(decoded_data))
    print("The size of the decoded data is: {}".format(sys.getsizeof(decoded_data)))

data_file.close()