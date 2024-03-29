//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSProcessInstance_h
#define RBSProcessInstance_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "RBSProcessIdentifier-Protocol.h"
#include "RBSProcessIdentifier.h"
#include "RBSProcessIdentity.h"
#include "RBSProcessMatching-Protocol.h"
#include "RBSXPCSecureCoding-Protocol.h"

@class NSString;

@interface RBSProcessInstance : NSObject<RBSProcessMatching, RBSProcessIdentifier, NSCopying, RBSXPCSecureCoding, NSSecureCoding>

@property (readonly, nonatomic) RBSProcessIdentifier *identifier;
@property (readonly, nonatomic) RBSProcessIdentity *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)instanceWithIdentifier:(id)identifier identity:(id)identity;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsRBSXPCSecureCoding;

/* instance methods */
- (id)init;
- (id)copyWithAuid:(unsigned int)auid;
- (id)copyWithPersonaString:(id)string;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)encodeWithRBSXPCCoder:(id)rbsxpccoder;
- (id)initWithRBSXPCCoder:(id)rbsxpccoder;
- (int)rbs_pid;
- (BOOL)matchesProcess:(id)process;
- (id)processPredicate;
@end

#endif /* RBSProcessInstance_h */
