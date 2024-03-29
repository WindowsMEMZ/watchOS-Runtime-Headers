//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPersistedRolloutAllocationStatus_NamespaceFactorPack_h
#define TRIPersistedRolloutAllocationStatus_NamespaceFactorPack_h
@import Foundation;

#include "TRIPBMessage.h"

@class NSString;

@interface TRIPersistedRolloutAllocationStatus_NamespaceFactorPack : TRIPBMessage

@property (copy, @dynamic, nonatomic) NSString *namespace_p;
@property (@dynamic, nonatomic) BOOL hasNamespace_p;
@property (copy, @dynamic, nonatomic) NSString *factorPack;
@property (@dynamic, nonatomic) BOOL hasFactorPack;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIPersistedRolloutAllocationStatus_NamespaceFactorPack_h */
