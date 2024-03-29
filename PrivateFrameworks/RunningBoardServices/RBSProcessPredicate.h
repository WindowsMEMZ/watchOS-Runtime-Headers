//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSProcessPredicate_h
#define RBSProcessPredicate_h
@import Foundation;

#include "RBSProcessIdentity.h"
#include "RBSProcessMatching-Protocol.h"
#include "RBSProcessPredicateImpl.h"
#include "RBSXPCSecureCoding-Protocol.h"

@class NSString;

@interface RBSProcessPredicate : NSObject<RBSXPCSecureCoding, RBSProcessMatching>

@property (readonly, nonatomic) unsigned int euid;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionPoint;
@property (readonly, copy, nonatomic) NSString *beforeTranslocationBundlePath;
@property (readonly, copy, nonatomic) NSString *jobLabel;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, nonatomic) RBSProcessPredicateImpl *predicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)predicateMatchingJobLabel:(id)label;
+ (id)predicateMatchingServiceName:(id)name;
+ (id)predicateMatchingIdentity:(id)identity;
+ (id)predicateMatchingTarget:(id)target;
+ (id)predicateMatchingSuspendableProcesses;
+ (id)predicateMatchingLaunchServicesProcesses;
+ (id)predicateMatchingIdentifier:(id)identifier;
+ (id)predicateMatchingHandle:(id)handle;
+ (id)predicateMatchingIdentifiers:(id)identifiers;
+ (id)predicateMatchingHostIdentifier:(id)identifier;
+ (id)predicateMatchingBundleIdentifier:(id)identifier;
+ (id)predicateMatchingExtensionPoint:(id)point;
+ (id)predicateMatchingBeforeTranslocationBundlePath:(id)path;
+ (id)predicateMatchingBundleIdentifiers:(id)identifiers;
+ (id)predicateMatchingExecPathStartsWith:(id)with;
+ (id)predicateMatchingDextsBundledWithBundleID:(id)id;
+ (id)predicateMatchingLSApplicationIdentity:(id)identity;
+ (id)predicateMatchingPlatform:(int)platform;
+ (id)predicateMatchingEuid:(unsigned int)euid;
+ (id)predicateMatchingAuid:(unsigned int)auid;
+ (id)predicateForClearTheBoard;
+ (id)predicatePowerLogProcesses;
+ (id)predicateForSymptomsd;
+ (id)predicateForMemoryMonitor;
+ (id)predicateMatchingProcessTypeApplication;
+ (id)predicate;
+ (id)predicateMatching:(id)matching;
+ (id)predicateMatchingPredicates:(id)predicates;
+ (id)predicateMatchingAnyPredicate:(id)predicate;
+ (id)predicateNotMatchingPredicate:(id)predicate;
+ (BOOL)supportsRBSXPCSecureCoding;

/* instance methods */
- (id)processIdentifier;
- (id)processIdentifiers;
- (unsigned int)auid;
- (id)initWithPredicate:(id)predicate;
- (BOOL)matchesProcess:(id)process;
- (id)processPredicate;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithRBSXPCCoder:(id)rbsxpccoder;
- (id)initWithRBSXPCCoder:(id)rbsxpccoder;
@end

#endif /* RBSProcessPredicate_h */
