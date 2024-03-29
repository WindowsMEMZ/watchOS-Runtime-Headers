//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNaturalLightingEnabledRetryContext_h
#define HMDNaturalLightingEnabledRetryContext_h
@import Foundation;

#include "HMFObject.h"
#include "NSCopying-Protocol.h"

@interface HMDNaturalLightingEnabledRetryContext : HMFObject<NSCopying>

@property unsigned long long retryCount;
@property (readonly) BOOL naturalLightingEnabled;
@property (readonly) id /* block */ completion;

/* instance methods */
- (id)initWithNaturalLightingEnabled:(BOOL)enabled completion:(id /* block */)completion retryCount:(unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)attributeDescriptions;
@end

#endif /* HMDNaturalLightingEnabledRetryContext_h */
