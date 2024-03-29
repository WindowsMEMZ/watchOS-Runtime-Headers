//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHSWidgetDescriptorsBox_h
#define CHSWidgetDescriptorsBox_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSSet;

@interface CHSWidgetDescriptorsBox : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSSet *descriptors;
@property (readonly, copy, nonatomic) NSDictionary *descriptorsByExtensionIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDescriptors:(id)descriptors;
- (void)_performValidation;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* CHSWidgetDescriptorsBox_h */
