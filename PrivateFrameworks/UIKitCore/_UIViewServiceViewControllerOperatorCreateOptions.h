//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIViewServiceViewControllerOperatorCreateOptions_h
#define _UIViewServiceViewControllerOperatorCreateOptions_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "UITraitCollection.h"

@class BSMachPortSendRight, NSArray, NSString, NSUUID;

@interface _UIViewServiceViewControllerOperatorCreateOptions : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *viewControllerClassName;
@property (copy, nonatomic) NSArray *serializedAppearanceRepresentations;
@property (retain, nonatomic) NSUUID *contextToken;
@property (copy, nonatomic) NSArray *displayConfigurations;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (retain, nonatomic) BSMachPortSendRight *hostAccessibilityServerPort;
@property (nonatomic) long long availableTextServices;
@property (nonatomic) long long initialInterfaceOrientation;
@property (nonatomic) BOOL hostCanDynamicallySpecifySupportedInterfaceOrientations;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* _UIViewServiceViewControllerOperatorCreateOptions_h */
