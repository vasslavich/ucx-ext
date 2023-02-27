//
// Created by vyacheslav on 08.02.23.
//

#ifndef UCX_EXT_SISCI_HANDLER_H
#define UCX_EXT_SISCI_HANDLER_H

#include <uct/api/uct.h>
#include <uct/base/uct_iface.h>
#include <ucs/sys/math.h>
#include <ucs/sys/iovec.h>
#include "sisci_types.h"

UCS_CLASS_DECLARE(uct_sisci_iface_t, uct_iface_ops_t*, uct_iface_internal_ops_t*,
                  uct_md_h, uct_worker_h, const uct_iface_params_t*,
                  const uct_iface_config_t*);

UCS_CLASS_DECLARE_NEW_FUNC(uct_sisci_iface_t, uct_iface_t, uct_md_h, uct_worker_h,
                           const uct_iface_params_t*, const uct_iface_config_t*);
UCS_CLASS_DECLARE_DELETE_FUNC(uct_sisci_iface_t, uct_iface_t);

#endif //UCX_EXT_SISCI_HANDLER_H
