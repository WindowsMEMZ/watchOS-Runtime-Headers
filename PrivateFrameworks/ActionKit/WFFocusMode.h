//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFFocusMode_h
#define WFFocusMode_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "WFNaming-Protocol.h"

@class NSString, WFImage;

@interface WFFocusMode : NSObject<NSSecureCoding, WFNaming>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSString *colorName;
@property (readonly, nonatomic) WFImage *symbolImage;
@property (readonly, copy, nonatomic) NSString *wfName;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFCActivityDescribing:(id)describing;
- (id)initWithIdentifier:(id)identifier displayName:(id)name symbolName:(id)name colorName:(id)name;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* WFFocusMode_h */
