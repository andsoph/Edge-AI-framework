#include <iostream>

// Include your module headers
#include "data/data_processing.h"
#include "ml/ml_model.h"
#include "hw/hw_driver.h"

int main() {
    std::cout << "Starting Edge AI pipeline test...\n";

    initHardware();
    processData();
    runInference();

    std::cout << "Pipeline test complete.\n";
    return 0;
}