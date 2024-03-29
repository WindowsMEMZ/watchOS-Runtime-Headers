//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFWatchListButtonItem_h
#define SFWatchListButtonItem_h
@import Foundation;

#include "SFButtonItem.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFWatchListButtonItem-Protocol.h"
#include "SFWatchListItem.h"

@class NSData, NSDictionary, NSString;

@interface SFWatchListButtonItem : SFButtonItem<SFWatchListButtonItem, NSSecureCoding, NSCopying>

@property (retain, nonatomic) SFWatchListItem *watchListItem;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned long long uniqueId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithProtobuf:(id)protobuf;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* SFWatchListButtonItem_h */
