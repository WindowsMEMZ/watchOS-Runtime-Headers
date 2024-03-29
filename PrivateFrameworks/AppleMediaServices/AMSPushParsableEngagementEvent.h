//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSPushParsableEngagementEvent_h
#define AMSPushParsableEngagementEvent_h
@import Foundation;

#include "AMSPushParsable-Protocol.h"

@class NSString;

@interface AMSPushParsableEngagementEvent : NSObject<AMSPushParsable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)handleNotificationPayload:(id)payload config:(id)config bag:(id)bag;
+ (BOOL)shouldSkipAccountCheck;
+ (id)_eventForMapiPayload:(id)payload account:(id)account bag:(id)bag;
+ (id)_eventForStaticAssetPayload:(id)payload bag:(id)bag;
+ (void)_waitForPromises:(id)promises completion:(id /* block */)completion;
@end

#endif /* AMSPushParsableEngagementEvent_h */
