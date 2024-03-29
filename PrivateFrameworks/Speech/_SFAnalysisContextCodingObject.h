//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.15.1.0.0
//
#ifndef _SFAnalysisContextCodingObject_h
#define _SFAnalysisContextCodingObject_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface _SFAnalysisContextCodingObject : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSArray *leftContext;
@property (readonly, copy, nonatomic) NSArray *rightContext;
@property (readonly, copy, nonatomic) NSArray *selectedText;
@property (readonly, copy, nonatomic) NSString *geoLMRegionID;
@property (readonly, copy, nonatomic) NSArray *contextualStrings;
@property (readonly, copy, nonatomic) NSArray *contextualNamedEntities;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithLeftContext:(id)context rightContext:(id)context selectedText:(id)text geoLMRegionID:(id)id contextualStrings:(id)strings contextualNamedEntities:(id)entities;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _SFAnalysisContextCodingObject_h */
