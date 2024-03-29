//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef CXSetScreenShareAttributesCallAction_h
#define CXSetScreenShareAttributesCallAction_h
@import Foundation;

#include "CXCallAction.h"
#include "CXScreenShareAttributes.h"

@interface CXSetScreenShareAttributesCallAction : CXCallAction

@property (retain, nonatomic) CXScreenShareAttributes *attributes;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCallUUID:(id)uuid attributes:(id)attributes;
- (id)customDescription;
- (id)sanitizedCopyWithZone:(struct _NSZone *)zone;
- (void)updateCopy:(id)copy withZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CXSetScreenShareAttributesCallAction_h */
