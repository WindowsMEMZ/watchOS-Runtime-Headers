//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _SFPBRFLongItemStandardCardSection_Protocol_h
#define _SFPBRFLongItemStandardCardSection_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSSecureCoding-Protocol.h"
#include "_SFPBRFLongItemStandardCardSection-Protocol.h"
#include "_SFPBRFTextProperty.h"

@class NSData, NSString;

@protocol _SFPBRFLongItemStandardCardSection <NSObject>

@property (retain, nonatomic) _SFPBRFTextProperty *text_1;
@property (nonatomic) BOOL is_quote;
@property (nonatomic) BOOL has_background_platter;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* _SFPBRFLongItemStandardCardSection_Protocol_h */
