//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSProcessStateDescriptor_h
#define RBSProcessStateDescriptor_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "RBSXPCSecureCoding-Protocol.h"

@class NSArray, NSSet, NSString;

@interface RBSProcessStateDescriptor : NSObject<RBSXPCSecureCoding, NSCopying>

@property (nonatomic) unsigned long long values;
@property (copy, nonatomic) NSArray *endowmentNamespaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)descriptor;
+ (BOOL)supportsRBSXPCSecureCoding;

/* instance methods */
- (id)init;
- (void)filterState:(id)state;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithRBSXPCCoder:(id)rbsxpccoder;
- (id)initWithRBSXPCCoder:(id)rbsxpccoder;
@end

#endif /* RBSProcessStateDescriptor_h */
