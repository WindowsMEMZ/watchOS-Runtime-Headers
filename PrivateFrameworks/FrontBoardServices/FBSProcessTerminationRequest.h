//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSProcessTerminationRequest_h
#define FBSProcessTerminationRequest_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "FBSProcess-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBSProcessTerminationRequest : NSObject<NSCopying, BSDescriptionProviding>

@property (copy, nonatomic) NSString *label;
@property (weak, nonatomic) NSObject<FBSProcess> *process;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long reportType;
@property (nonatomic) long long exceptionCode;
@property (copy, nonatomic) NSString *explanation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)requestForProcess:(id)process withLabel:(id)label;

/* instance methods */
- (void)execute;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* FBSProcessTerminationRequest_h */
