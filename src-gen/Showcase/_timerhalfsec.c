#include "include/api/api.h"
#include "include/core/platform.h"
#include "include/TimeReactor/TimerHalfSec.h"
#include "_timerhalfsec.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _timerhalfsecreaction_function_0(void* instance_args) {
    _timerhalfsec_self_t* self = (_timerhalfsec_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _timerhalfsec_outPort_t* outPort = &self->_lf_outPort;
    #line 9 "/home/okladnikov/Univer/nir/LFProj/src/TimeReactor.lf"
    lf_set(outPort, self->count++);
#line 14 "/home/okladnikov/Univer/nir/LFProj/src-gen/Showcase/_timerhalfsec.c"
}
#include "include/api/set_undef.h"
_timerhalfsec_self_t* new__timerhalfsec() {
    _timerhalfsec_self_t* self = (_timerhalfsec_self_t*)_lf_new_reactor(sizeof(_timerhalfsec_self_t));
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _timerhalfsecreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__t.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__t_reactions[0] = &self->_lf__reaction_0;
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    self->_lf__t.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__t.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    return self;
}
