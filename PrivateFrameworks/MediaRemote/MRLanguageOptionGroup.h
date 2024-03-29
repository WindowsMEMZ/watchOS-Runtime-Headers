//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRLanguageOptionGroup_h
#define MRLanguageOptionGroup_h
@import Foundation;

#include "MRLanguageOption.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSDictionary;

@interface MRLanguageOptionGroup : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) _MRLanguageOptionGroupProtobuf *protobuf;
@property (nonatomic) BOOL allowsEmptySelection;
@property (nonatomic) BOOL hasAllowsEmptySelection;
@property (copy, nonatomic) NSArray *languageOptions;
@property (retain, nonatomic) MRLanguageOption *defaultLanguageOption;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithLanguageOptions:(id)options defaultLanguageOption:(id)option allowsEmptySelection:(BOOL)selection;
- (id)initWithProtobuf:(id)protobuf;
- (id)initWithData:(id)data;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* MRLanguageOptionGroup_h */
