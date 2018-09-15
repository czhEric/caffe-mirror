g++ -o app blob_demo.cpp -I ../../include/ -D CPU_ONLY -I ../../.build_release/src/ -L ../../build/lib/ -l caffe -l glog -l boost_system
export LD_LIBRARY_PATH=../../build/lib/:$LD_LIBRARY_PATH
chmod +x app
./app
