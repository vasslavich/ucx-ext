//
// Created by v.vasilyev on 2/7/2023.
//

#ifndef UCX_EXT_SISCI_UTILS_H
#define UCX_EXT_SISCI_UTILS_H

#include <stdlib.h>
#include <ucs/debug/log_def.h>

void ucp_sisci_util_trace(const char* text, const char* func_name, const char* file, int line);
void ucp_sisci_check_cond(int result, const char *fault_text, const char* func_name, const char* file, int line);

#define UCP_SISCI_PRINT(text) if(UCX_TRACE_ON){\
    ucp_sisci_util_trace(text, __FUNCTION__, __FILE__, __LINE__); \
}                                              \

#define UCP_SISCI_CHECK(cond) if(UCX_TRACE_ON){\
    ucp_sisci_check_cond((long)(cond) == 0, #cond, __FUNCTION__, __FILE__, __LINE__); \
}
#endif //UCX_EXT_SISCI_UTILS_H
