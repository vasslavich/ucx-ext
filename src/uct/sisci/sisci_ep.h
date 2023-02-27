//
// Created by vyacheslav on 08.02.23.
//

#ifndef UCX_EXT_SISCI_EP_H
#define UCX_EXT_SISCI_EP_H

#include <uct/base/uct_cm.h>
#include <stddef.h>
#include <ucs/type/status.h>
#include <ucs/sys/sock.h>
#include <ucs/debug/log.h>

/**
 * SISСI endpoint that is opened on a connection manager
 */
typedef struct uct_sisci_ep {
    uct_base_ep_t   super;
    pid_t           remote_pid;
    int                fd;        /* the fd of the file */
    uint32_t           state;     /* ep state */
}uct_sisci_ep_t;

UCS_CLASS_DECLARE(uct_sisci_ep_t, const uct_ep_params_t *);
UCS_CLASS_DECLARE_NEW_FUNC(uct_sisci_ep_t, uct_ep_t, const uct_ep_params_t *);
UCS_CLASS_DECLARE_DELETE_FUNC(uct_sisci_ep_t, uct_ep_t);

#endif //UCX_EXT_SISCI_EP_H
