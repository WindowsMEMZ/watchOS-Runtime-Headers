//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _SFPBSplitCardSection_Protocol_h
#define _SFPBSplitCardSection_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSSecureCoding-Protocol.h"
#include "_SFPBRichText.h"
#include "_SFPBSplitCardSection-Protocol.h"

@class NSArray, NSData, NSString;

@protocol _SFPBSplitCardSection <NSObject>

@property (retain, nonatomic) _SFPBRichText *topTitle;
@property (retain, nonatomic) _SFPBRichText *secondaryTopTitle;
@property (copy, nonatomic) NSString *listPrefix;
@property (copy, nonatomic) NSArray *listItems;
@property (copy, nonatomic) NSString *listMoreString;
@property (retain, nonatomic) _SFPBRichText *bottomTitle;
@property (retain, nonatomic) _SFPBRichText *body;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (void)clearListItems;
- (void)addListItems:(id)items;
- (unsigned long long)listItemsCount;
- (id)listItemsAtIndex:(unsigned long long)index;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* _SFPBSplitCardSection_Protocol_h */
