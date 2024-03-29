//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef LSApplicationIdentity_h
#define LSApplicationIdentity_h
@import Foundation;

#include "LSBundleIdentity.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface LSApplicationIdentity : LSBundleIdentity<NSSecureCoding, NSCopying> {
  /* instance variables */
  NSString *_identityBookmark;
}

@property (readonly, @dynamic, nonatomic) NSString *identityString;
@property (readonly, @dynamic, nonatomic) NSString *personaUniqueString;
@property (readonly, @dynamic, nonatomic) unsigned long long personaType;

/* class methods */
+ (id)bundleIdentifierForIdentityString:(id)string error:(id *)error;
+ (id)identityStringsForApplicationWithBundleIdentifier:(id)identifier error:(id *)error;
+ (BOOL)personaWithUniqueString:(id)string getPersonaType:(unsigned long long *)type error:(id *)error;
+ (id)enumeratorWithOptions:(unsigned long long)options;
+ (unsigned int)classVersion;
+ (Class)currentIdentityClass;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)coder;
- (Class)classForCoder;
- (id)initWithIdentityString:(id)string parsedIdentityStringDictionary:(id)dictionary error:(id *)error;
- (id)initWithIdentityString:(id)string;
- (id)initWithBundleIdentifier:(id)identifier allowPlaceholder:(BOOL)placeholder personaUniqueString:(id)string error:(id *)error;
- (id)initWithBundleIdentifier:(id)identifier URL:(id)url personaUniqueString:(id)string personaType:(unsigned long long)type;
- (id)initWithIdentityBookmark:(id)bookmark identityString:(id)string personaUniqueString:(id)string personaType:(unsigned long long)type;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)initForRecord:(id)record personaWithAttributes:(id)attributes;
- (id)findApplicationRecordWithError:(id *)error;
- (id)findApplicationRecordFetchingPlaceholder:(long long)placeholder error:(id *)error;
- (BOOL)needsMigration;
@end

#endif /* LSApplicationIdentity_h */
