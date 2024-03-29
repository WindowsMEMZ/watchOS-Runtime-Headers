//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3762.60.29.0.0
//
#ifndef NWConcrete_nw_protocol_stack_h
#define NWConcrete_nw_protocol_stack_h
@import Foundation;

#include "OS_nw_protocol_options-Protocol.h"
#include "OS_nw_protocol_stack-Protocol.h"

@class NSString;
@protocol OS_nw_array;

@interface NWConcrete_nw_protocol_stack : NSObject<OS_nw_protocol_stack> {
  /* instance variables */
  NSObject<OS_nw_array> *persistent_application_protocols;
  NSObject<OS_nw_array> *application_protocols;
  NSObject<OS_nw_protocol_options> *transport_protocol;
  NSObject<OS_nw_protocol_options> *secondary_transport_protocol;
  NSObject<OS_nw_protocol_options> *original_proxied_transport_protocol;
  NSObject<OS_nw_protocol_options> *internet_protocol;
  NSObject<OS_nw_protocol_options> *link_protocol;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
@end

#endif /* NWConcrete_nw_protocol_stack_h */
