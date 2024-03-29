//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _SFPBTrackListCardSection_Protocol_h
#define _SFPBTrackListCardSection_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSSecureCoding-Protocol.h"
#include "_SFPBColor.h"
#include "_SFPBTrackListCardSection-Protocol.h"

@class NSArray, NSData, NSString;

@protocol _SFPBTrackListCardSection <NSObject>

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) BOOL canBeHidden;
@property (nonatomic) BOOL hasTopPadding;
@property (nonatomic) BOOL hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSArray *tracks;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (void)clearPunchoutOptions;
- (void)addPunchoutOptions:(id)options;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutOptionsAtIndex:(unsigned long long)index;
- (void)clearTracks;
- (void)addTracks:(id)tracks;
- (unsigned long long)tracksCount;
- (id)tracksAtIndex:(unsigned long long)index;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* _SFPBTrackListCardSection_Protocol_h */
