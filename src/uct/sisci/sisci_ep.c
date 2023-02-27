//
// Created by vyacheslav on 08.02.23.
//
#include "sisci_ep.h"
#include "sisci_types.h"
#include <ucs/sisci_utils/sisci_utils.h>

UCS_CLASS_INIT_FUNC( uct_sisci_ep_t, const uct_ep_params_t *params)
{
    uct_sisci_iface_t            *iface = NULL;
    uct_sisci_md_t               *md    = NULL;
    const uct_sisci_iface_addr_t *addr  = NULL;
    
    UCP_SISCI_CHECK(params);
    
    iface = ucs_derived_of(params->iface, uct_sisci_iface_t);
    UCP_SISCI_CHECK(iface);
    
    md    = ucs_derived_of(iface->super.md, uct_sisci_md_t);
    UCP_SISCI_CHECK(md);
    
    addr  = (const void *)params->iface_addr;
    UCP_SISCI_CHECK(addr);

    ucs_debug("created mm ep %p, connected to remote id %"PRId64", addr len is %"PRId64,
              self, addr->fifo_seg_id, md->iface_addr_len);

    return UCS_OK;
}
static UCS_CLASS_CLEANUP_FUNC(uct_sisci_ep_t)
{
}
UCS_CLASS_DEFINE_NEW_FUNC(uct_sisci_ep_t, uct_ep_t, const uct_ep_params_t *);
UCS_CLASS_DEFINE(uct_sisci_ep_t, uct_base_ep_t);
