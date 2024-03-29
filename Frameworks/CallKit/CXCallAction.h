//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef CXCallAction_h
#define CXCallAction_h
@import Foundation;

#include "CXAction.h"

@class NSUUID;

@interface CXCallAction : CXAction

@property (copy, nonatomic) NSUUID *callUUID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCallUUID:(id)uuid;
- (id)init;
- (id)customDescription;
- (void)updateSanitizedCopy:(id)copy withZone:(struct _NSZone *)zone;
- (id)sanitizedCopyWithZone:(struct _NSZone *)zone;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CXCallAction_h */
