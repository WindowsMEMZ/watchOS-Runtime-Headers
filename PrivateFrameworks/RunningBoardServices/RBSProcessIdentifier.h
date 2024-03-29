//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSProcessIdentifier_h
#define RBSProcessIdentifier_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "RBSProcessIdentifier-Protocol.h"
#include "RBSXPCSecureCoding-Protocol.h"

@class NSString;

@interface RBSProcessIdentifier : NSObject<RBSXPCSecureCoding, RBSProcessIdentifier, NSSecureCoding, NSCopying>

@property (readonly, nonatomic) int pid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)identifierWithPid:(int)pid;
+ (id)identifierForCurrentProcess;
+ (id)identifierForIdentifier:(id)identifier;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsRBSXPCSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithPid:(int)pid;
- (int)rbs_pid;
- (BOOL)matchesProcess:(id)process;
- (id)processPredicate;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)encodeWithRBSXPCCoder:(id)rbsxpccoder;
- (id)initWithRBSXPCCoder:(id)rbsxpccoder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RBSProcessIdentifier_h */
