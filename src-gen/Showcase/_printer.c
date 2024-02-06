#include "include/api/api.h"
#include "include/core/platform.h"
#include "include/BusinessLogic/Printer.h"
#include "_printer.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _printerreaction_function_0(void* instance_args) {
    _printer_self_t* self = (_printer_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _printer_inPort_t* inPort = self->_lf_inPort;
    int inPort_width = self->_lf_inPort_width; SUPPRESS_UNUSED_WARNING(inPort_width);
    #line 15 "/home/okladnikov/Univer/nir/LFProj/src/BusinessLogic.lf"
    printf("Printer do staff, inPort=%d.\n", inPort->value);
#line 15 "/home/okladnikov/Univer/nir/LFProj/src-gen/Showcase/_printer.c"
}
#include "include/api/set_undef.h"
_printer_self_t* new__printer() {
    _printer_self_t* self = (_printer_self_t*)_lf_new_reactor(sizeof(_printer_self_t));
    // Set input by default to an always absent default input.
    self->_lf_inPort = &self->_lf_default__inPort;
    // Set the default source reactor pointer
    self->_lf_default__inPort._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _printerreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__inPort.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__inPort.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__inPort_reactions[0] = &self->_lf__reaction_0;
    self->_lf__inPort.reactions = &self->_lf__inPort_reactions[0];
    self->_lf__inPort.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__inPort.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__inPort.tmplt.type.element_size = sizeof(int);
    return self;
}
