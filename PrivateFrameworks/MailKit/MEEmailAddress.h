//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MEEmailAddress_h
#define MEEmailAddress_h
@import Foundation;

#include "ECEmailAddressConvertible-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class ECEmailAddress, NSString;

@interface MEEmailAddress : NSObject<ECEmailAddressConvertible, NSSecureCoding, NSCopying> {
  /* instance variables */
  NSObject<ECEmailAddressConvertible> *_convertible;
}

@property (readonly, copy, nonatomic) NSString *rawString;
@property (readonly, copy, nonatomic) NSString *addressString;
@property (readonly, nonatomic) ECEmailAddress *emailAddressValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)emailAddressesForAddresses:(id)addresses;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRawString:(id)string;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* MEEmailAddress_h */
