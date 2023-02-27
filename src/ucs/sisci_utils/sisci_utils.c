//
// Created by v.vasilyev on 2/7/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include "sisci_utils.h"

void ucp_sisci_terminate(){
    exit(-1);
}

void ucp_sisci_util_trace(const char* text, const char* func_name, const char* file, int line){
    printf("\nUCP-SISCI: m=%s in:\n    func=%s, file=%s, line=%i", text, func_name, file, line);
}

void ucp_sisci_check_cond(int result, const char *fault_text, const char* func_name, const char* file, int line){
    if(result){
        printf("\nUCP-SISCI exit: %s\n    func=%s, file=%s, line=%i", fault_text, func_name, file, line);
        ucp_sisci_terminate();
        }
}
