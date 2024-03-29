//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKContactPickerItem_h
#define PKContactPickerItem_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSMutableSet, NSString;

@interface PKContactPickerItem : NSObject<NSSecureCoding> {
  /* instance variables */
  NSMutableSet *_acceptedValues;
}

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *submissionValue;
@property (readonly, nonatomic) NSArray *alternativeAcceptedValues;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)acceptedValues;
- (BOOL)isValueAccepted:(id)accepted;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PKContactPickerItem_h */
