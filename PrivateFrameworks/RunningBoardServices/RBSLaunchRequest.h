//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSLaunchRequest_h
#define RBSLaunchRequest_h
@import Foundation;

#include "RBSRequest.h"
#include "NSCopying-Protocol.h"
#include "RBSLaunchContext.h"
#include "RBSXPCSecureCoding-Protocol.h"

@class NSString;

@interface RBSLaunchRequest : RBSRequest<RBSXPCSecureCoding, NSCopying>

@property (readonly, nonatomic) RBSLaunchContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsRBSXPCSecureCoding;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)executeWithCallback:(id /* block */)callback;
- (BOOL)execute:(out id *)execute assertion:(out id *)assertion error:(out id *)error;
- (BOOL)execute:(out id *)execute error:(out id *)error;
- (BOOL)execute:(out id *)execute;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithRBSXPCCoder:(id)rbsxpccoder;
- (id)initWithRBSXPCCoder:(id)rbsxpccoder;
@end

#endif /* RBSLaunchRequest_h */
