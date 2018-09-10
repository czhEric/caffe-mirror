#!/bin/sh
IMG_NAME=$1 #image/5_out.png
../build/examples/cpp_classification/classification.bin deploy.prototxt lenet_iter_10000.caffemodel mean.binaryproto label.txt $1
