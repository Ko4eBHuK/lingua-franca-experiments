#ifndef _TIMERHALFSEC_H
#define _TIMERHALFSEC_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_577682023_H
#define TOP_LEVEL_PREAMBLE_577682023_H
#endif
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
} _timerhalfsec_outPort_t;
typedef struct {
    struct self_base_t base;
    #line 3 "/home/okladnikov/Univer/nir/LFProj/src/TimeReactor.lf"
    interval_t offset;
#line 26 "/home/okladnikov/Univer/nir/LFProj/src-gen/Showcase/_timerhalfsec.h"
    #line 4 "/home/okladnikov/Univer/nir/LFProj/src/TimeReactor.lf"
    int count;
#line 29 "/home/okladnikov/Univer/nir/LFProj/src-gen/Showcase/_timerhalfsec.h"
    _timerhalfsec_outPort_t _lf_outPort;
    int _lf_outPort_width;
    reaction_t _lf__reaction_0;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
} _timerhalfsec_self_t;
_timerhalfsec_self_t* new__timerhalfsec();
#endif // _TIMERHALFSEC_H
