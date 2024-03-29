//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentInformationEventExtension_h
#define PKPaymentInformationEventExtension_h
@import Foundation;

#include "NSExtensionRequestHandling-Protocol.h"

@class NSString;

@interface PKPaymentInformationEventExtension : NSObject<NSExtensionRequestHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)beginRequestWithExtensionContext:(id)context;
@end

#endif /* PKPaymentInformationEventExtension_h */
