//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMTranslatedText_h
#define AXMTranslatedText_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSLocale, NSString;

@interface AXMTranslatedText : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *text;
@property (nonatomic) double confidence;
@property (nonatomic) BOOL lowConfidence;
@property (retain, nonatomic) NSLocale *targetLocale;

/* class methods */
+ (id)text:(id)text confidence:(double)confidence isLowConfidence:(BOOL)confidence targetLocale:(id)locale;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isLowConfidence;
@end

#endif /* AXMTranslatedText_h */
