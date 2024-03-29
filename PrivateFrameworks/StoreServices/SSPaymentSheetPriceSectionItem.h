//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSPaymentSheetPriceSectionItem_h
#define SSPaymentSheetPriceSectionItem_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface SSPaymentSheetPriceSectionItem : NSObject<NSCopying>

@property (copy) NSString *label;
@property (copy) NSString *price;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (void)_parseDictionary:(id)dictionary withCaseControl:(BOOL)control;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)xpcencoding;
@end

#endif /* SSPaymentSheetPriceSectionItem_h */
