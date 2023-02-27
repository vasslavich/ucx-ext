//
// Created by v.vasilyev on 2/7/2023.
//

#ifndef UCX_EXT_SISCI_TYPES_H
#define UCX_EXT_SISCI_TYPES_H

#include <ucs/arch/cpu.h>
#include <ucs/debug/memtrack_int.h>
#include <ucs/datastruct/arbiter.h>
#include <ucs/sys/compiler.h>
#include <ucs/sys/sys.h>
#include <sys/shm.h>
#include <sys/un.h>
#include <uct/base/uct_md.h>
#include <uct/sm/base/sm_md.h>
#include <uct/api/uct_def.h>
#include <uct/base/uct_iface.h>
#include <uct/sm/base/sm_iface.h>

typedef struct uct_sisci_iface_common_config {
    uct_iface_config_t     super;
    double                 bandwidth; /* Memory bandwidth in bytes per second */
} uct_sisci_iface_common_config_t;

typedef struct uct_sisci_iface {
    uct_base_iface_t       super;
    struct {
        double             bandwidth; /* Memory bandwidth in bytes per second */
    } config;
} uct_sisci_iface_t;

typedef struct uct_sisci_iface_addr {
    int64_t fifo_seg_id;
} uct_sisci_iface_addr_t;

typedef struct uct_sisci_md_config {
    uct_md_config_t          super;
    ucs_ternary_auto_value_t hugetlb_mode;
} uct_sisci_md_config_t;

typedef struct uct_sisci_md {
    uct_md_t              super;
    uct_sisci_md_config_t    *config;
    int64_t                iface_addr_len;
} uct_sisci_md_t;

#endif //UCX_EXT_SISCI_TYPES_H
