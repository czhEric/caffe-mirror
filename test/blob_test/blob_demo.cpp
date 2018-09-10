#include <vector>
#include <iostream>
#include "../../include/caffe/blob.hpp"


using namespace caffe;
using namespace std;
int main(void)
{
    Blob<float> a;
    cout << "Size :" << a.shape_string() << endl;
    a.Reshape(1,2,3,4);
    cout << "Size: " << a.shape_string() << endl;
    return 0;
}




