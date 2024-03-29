//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDActiveXPCConnectionLogEvent_h
#define HMDActiveXPCConnectionLogEvent_h
@import Foundation;

#include "HMMLogEvent.h"

@class NSString;

@interface HMDActiveXPCConnectionLogEvent : HMMLogEvent

@property (readonly, nonatomic) NSString *name;
@property (readonly) BOOL activated;
@property (readonly) BOOL added;

/* class methods */
+ (id)initWithNewXPCConnectionAdded:(id)added;
+ (id)initWithXPCConnectionRemoved:(id)removed;

/* instance methods */
- (id)initWithXPCConnection:(id)xpcconnection added:(BOOL)added;
- (BOOL)isActivated;
@end

#endif /* HMDActiveXPCConnectionLogEvent_h */
