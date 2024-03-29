//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFPhoneNumber_h
#define WFPhoneNumber_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "WFNaming-Protocol.h"
#include "WFSerializableContent-Protocol.h"

@class NSString;

@interface WFPhoneNumber : NSObject<WFNaming, NSCopying, WFSerializableContent, NSSecureCoding>

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *formattedPhoneNumber;
@property (readonly, nonatomic) NSString *normalizedPhoneNumber;
@property (readonly, nonatomic) NSString *contactName;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *localizedLabel;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)phoneNumbersInString:(id)string error:(id *)error;
+ (BOOL)stringContainsPhoneNumbers:(id)numbers;
+ (id)phoneNumberWithTextCheckingResult:(id)result;
+ (id)phoneNumberWithPhoneNumberString:(id)string;
+ (id)phoneNumberWithPhoneNumberString:(id)string contactName:(id)name label:(id)label;
+ (BOOL)supportsSecureCoding;
+ (id)objectWithWFSerializedRepresentation:(id)representation;

/* instance methods */
- (id)initWithPhoneNumberString:(id)string contactName:(id)name label:(id)label;
- (long long)compare:(id)compare;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)wfSerializedRepresentation;
@end

#endif /* WFPhoneNumber_h */
