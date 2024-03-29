//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 139.203.0.0.0
//
#ifndef RTITextStyling_h
#define RTITextStyling_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface RTITextStyling : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *fontName;
@property (readonly, nonatomic) double fontSize;
@property (readonly, nonatomic) double fontWeight;
@property (readonly, nonatomic) NSDictionary *attributes;

/* class methods */
+ (id)textStylingWithFontName:(id)name fontSize:(double)size fontWeight:(double)weight;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)addAttributes:(id)attributes;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* RTITextStyling_h */
