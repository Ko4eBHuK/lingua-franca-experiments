#ifndef _PRINTER_H
#define _PRINTER_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_1950117092_H
#define TOP_LEVEL_PREAMBLE_1950117092_H
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
} _printer_inPort_t;
typedef struct {
    struct self_base_t base;
#line 24 "/home/okladnikov/Univer/nir/LFProj/src-gen/Showcase/_printer.h"
#line 25 "/home/okladnikov/Univer/nir/LFProj/src-gen/Showcase/_printer.h"
    _printer_inPort_t* _lf_inPort;
    // width of -2 indicates that it is not a multiport.
    int _lf_inPort_width;
    // Default input (in case it does not get connected)
    _printer_inPort_t _lf_default__inPort;
    reaction_t _lf__reaction_0;
    trigger_t _lf__inPort;
    reaction_t* _lf__inPort_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _printer_self_t;
_printer_self_t* new__printer();
#endif // _PRINTER_H
