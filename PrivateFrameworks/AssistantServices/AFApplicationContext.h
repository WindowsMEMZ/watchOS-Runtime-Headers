//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFApplicationContext_h
#define AFApplicationContext_h
@import Foundation;

#include "AFBulletin.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class AceObject, NSArray, NSDictionary, NSString;

@interface AFApplicationContext : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *associatedBundleIdentifier;
@property (readonly, copy, nonatomic) AFBulletin *bulletin;
@property (readonly, copy, nonatomic) AceObject *aceContext;
@property (readonly, copy, nonatomic) NSDictionary *contextDictionary;
@property (readonly, copy, nonatomic) NSArray *aceContexts;

/* class methods */
+ (id)newWithBuilder:(id /* block */)builder;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)mutatedCopyWithMutator:(id /* block */)mutator;
- (id)initWithBuilder:(id /* block */)builder;
- (id)init;
- (id)initWithAssociatedBundleIdentifier:(id)identifier bulletin:(id)bulletin aceContext:(id)context contextDictionary:(id)dictionary aceContexts:(id)contexts;
- (id)description;
- (id)_descriptionWithIndent:(unsigned long long)indent;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* AFApplicationContext_h */
