//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef MDMBook_h
#define MDMBook_h
@import Foundation;

#include "MDMBook.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface MDMBook : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSString *fullPath;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *persistentID;
@property (retain, nonatomic) NSNumber *iTunesStoreID;
@property (copy, nonatomic) NSString *buyParams;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSNumber *downloadIdentifier;
@property (retain, nonatomic) MDMBook *previousVersion;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithManifestDictionary:(id)dictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)manifestDictionary;
- (id)friendlyName;
- (void)updateBookAttributesByCopyingFromBook:(id)book;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* MDMBook_h */
