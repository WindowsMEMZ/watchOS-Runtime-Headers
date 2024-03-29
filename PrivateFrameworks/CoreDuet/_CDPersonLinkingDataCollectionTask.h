//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDPersonLinkingDataCollectionTask_h
#define _CDPersonLinkingDataCollectionTask_h
@import Foundation;

#include "PersonLinkingLinkedPairEvent.h"

@class NSString;
@protocol OS_xpc_object;

@interface _CDPersonLinkingDataCollectionTask : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly, nonatomic) NSString *file;
@property (retain, nonatomic) PersonLinkingLinkedPairEvent *event;

/* instance methods */
- (id)initWithFile:(id)file activity:(id)activity;
- (id)eventFromDict:(id)dict;
- (void)execute;
- (id)eventFromFile:(id)file;
@end

#endif /* _CDPersonLinkingDataCollectionTask_h */
