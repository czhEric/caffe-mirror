g++ -o netapp net_demo.cpp -I ../../include/ -D CPU_ONLY -I ../../.build_release/src/ -L ../../build/lib/ -l caffe -lglog -lboost_system -l protobuf

export LD_LIBRARY_PATH=../../build/lib/:$LD_LIBRARY_PATH
chmod +x netapp
./netapp
