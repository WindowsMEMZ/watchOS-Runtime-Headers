//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFResultSection_h
#define SFResultSection_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFCommandButtonItem.h"
#include "SFJSONSerializable-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString;

@interface SFResultSection : NSObject<SFJSONSerializable, NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *results;
@property (nonatomic) unsigned long long maxInitiallyVisibleResults;
@property (nonatomic) BOOL isInitiallyHidden;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) SFCommandButtonItem *titleButtonItem;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *moreText;
@property (copy, nonatomic) SFCommandButtonItem *button;
@property (nonatomic) double rankingScore;
@property (nonatomic) unsigned long long totalAvailableResults;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SFResultSection_h */
