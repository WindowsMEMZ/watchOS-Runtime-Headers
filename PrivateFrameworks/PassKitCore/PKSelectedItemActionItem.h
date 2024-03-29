//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSelectedItemActionItem_h
#define PKSelectedItemActionItem_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKPassLibrary.h"

@class NSDate, NSDecimalNumber, NSDictionary, NSString;

@interface PKSelectedItemActionItem : NSObject<NSSecureCoding, NSCopying> {
  /* instance variables */
  PKPassLibrary *_sharedLibrary;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSDecimalNumber *amount;
@property (readonly, copy, nonatomic) NSString *currency;
@property (readonly, copy, nonatomic) NSDate *newExpirationDate;
@property (readonly, copy, nonatomic) NSDictionary *serviceProviderData;
@property (readonly, nonatomic) BOOL serviceProviderDataRequiresLocalBalance;
@property (readonly, nonatomic) BOOL serviceProviderDataRequiresAppletData;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithDictionary:(id)dictionary;
- (void)_processLocalizableStrings:(id /* block */)strings;
- (void)serviceProviderDataWithPass:(id)pass currentLocalBalance:(id)balance completion:(id /* block */)completion;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKSelectedItemActionItem_h */
