//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INRideFareLineItem_h
#define INRideFareLineItem_h
@import Foundation;

#include "INRideFareLineItemExport-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDecimalNumber, NSString;

@interface INRideFareLineItem : NSObject<INRideFareLineItemExport, NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDecimalNumber *price;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTitle:(id)title price:(id)price currencyCode:(id)code;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)descriptionAtIndent:(unsigned long long)indent;
- (id)_dictionaryRepresentation;
@end

#endif /* INRideFareLineItem_h */
