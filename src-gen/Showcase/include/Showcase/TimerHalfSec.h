#ifndef _timerhalfsec_H
#define _timerhalfsec_H
#ifndef _TIMERHALFSEC_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_1810349933_H
#define TOP_LEVEL_PREAMBLE_1810349933_H
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/api.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct timerhalfsec_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    interval_t offset;
    int count;
    int end[0]; // placeholder; MSVC does not compile empty structs
} timerhalfsec_self_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} timerhalfsec_outPort_t;
#endif
#endif
