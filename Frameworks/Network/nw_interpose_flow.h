//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3762.60.29.0.0
//
#ifndef nw_interpose_flow_h
#define nw_interpose_flow_h
@import Foundation;

#include "OS_nw_interface-Protocol.h"
#include "OS_nw_path_flow-Protocol.h"
#include "OS_nw_path_flow_registration-Protocol.h"

@interface nw_interpose_flow : NSObject {
  /* instance variables */
  NSObject<OS_nw_interface> *_interface;
  NSObject<OS_nw_path_flow_registration> *_registration;
  NSObject<OS_nw_path_flow> *_flow;
  id /* block */ _eventHandler;
}

/* instance methods */
- (id)initWithInterface:(id)interface registration:(id)registration eventHandler:(id /* block */)handler;
- (void)dealloc;
- (void)close;
- (void)notifyFlowEvent:(int)event;
- (void)closeFlow;
- (void)clearFlowEventHandler;
- (void)resetFlow:(id)flow;
- (BOOL)matchNexusAgent:(unsigned char x[16])agent;
- (BOOL)matchNexusAgentWithFlow:(id)flow;
- (BOOL)matchNexusInstance:(id)instance;
@end

#endif /* nw_interpose_flow_h */
