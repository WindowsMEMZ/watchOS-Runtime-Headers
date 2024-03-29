//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKShareeChange_h
#define EKShareeChange_h
@import Foundation;

#include "EKObjectChange.h"
#include "EKObjectID.h"
#include "EKOwnerIDProviding-Protocol.h"

@interface EKShareeChange : EKObjectChange<EKOwnerIDProviding>

@property (readonly, nonatomic) EKObjectID *ownerID;

/* class methods */
+ (int)entityType;

/* instance methods */
- (id)initWithChangeProperties:(id)properties;
@end

#endif /* EKShareeChange_h */
