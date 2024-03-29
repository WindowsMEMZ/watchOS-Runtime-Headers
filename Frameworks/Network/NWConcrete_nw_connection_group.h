//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3762.60.29.0.0
//
#ifndef NWConcrete_nw_connection_group_h
#define NWConcrete_nw_connection_group_h
@import Foundation;

#include "NWConcrete_nw_connection_group.h"
#include "OS_nw_connection_group-Protocol.h"
#include "OS_nw_error-Protocol.h"
#include "OS_nw_group_descriptor-Protocol.h"
#include "OS_nw_listener-Protocol.h"
#include "OS_nw_parameters-Protocol.h"
#include "OS_nw_path_evaluator-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue, OS_nw_array;

@interface NWConcrete_nw_connection_group : NSObject<OS_nw_connection_group> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *client_queue;
  unsigned int client_qos_class;
  NWConcrete_nw_connection_group *internally_retained_object;
  id /* block */ state_changed_handler;
  int state;
  NSObject<OS_nw_error> *last_error;
  NSObject<OS_nw_parameters> *parameters;
  NSObject<OS_nw_group_descriptor> *group_descriptor;
  NSObject<OS_nw_path_evaluator> *group_evaluator;
  id /* block */ membership_change_handler;
  NSObject<OS_nw_listener> *listener;
  NSObject<OS_nw_listener> *unicast_listener;
  NSObject<OS_nw_array> *connections;
  NSObject<OS_nw_array> *send_requests;
  unsigned char group_uuid[16];
  id /* block */ receive_handler;
  id /* block */ new_connection_handler;
  char * redacted_description;
  unsigned int log_id;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
  unsigned int maximum_message_size;
  unsigned int connection_limit;
  unsigned int new_connection_limit;
  unsigned short initial_port;
  unsigned int x :1 started;
  unsigned int x :1 reject_oversized_messages;
  unsigned int x :1 is_server;
  unsigned int x :1 has_listener_started;
  unsigned int x :1 is_listener_ready;
  unsigned int x :1 is_unicast_listener_ready;
  unsigned int x :1 is_first_connection_ready;
  unsigned int x :1 has_user_cancelled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)redactedDescription;
@end

#endif /* NWConcrete_nw_connection_group_h */
