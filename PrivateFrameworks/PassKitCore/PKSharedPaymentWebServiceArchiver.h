//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSharedPaymentWebServiceArchiver_h
#define PKSharedPaymentWebServiceArchiver_h
@import Foundation;

#include "PKPaymentWebServiceArchiver-Protocol.h"

@class NSString;

@interface PKSharedPaymentWebServiceArchiver : NSObject<PKPaymentWebServiceArchiver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedPaymentWebServiceArchiver;

/* instance methods */
- (void)archiveContext:(id)context;
- (void)archiveBackgroundContext:(id)context;
@end

#endif /* PKSharedPaymentWebServiceArchiver_h */
