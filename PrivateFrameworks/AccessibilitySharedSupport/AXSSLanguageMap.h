//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 452.0.6.0.0
//
#ifndef AXSSLanguageMap_h
#define AXSSLanguageMap_h
@import Foundation;

#include "AXSSDialectMap.h"

@class NSArray, NSString;

@interface AXSSLanguageMap : NSObject

@property (nonatomic) BOOL western;
@property (nonatomic) BOOL rtl;
@property (nonatomic) BOOL ambiguous;
@property (copy, nonatomic) NSString *generalLanguageID;
@property (retain, nonatomic) NSArray *alternateLanguageIDs;
@property (retain, nonatomic) NSArray *dialects;
@property (retain, nonatomic) NSArray *associatedAmbiguousLanguages;
@property (retain, nonatomic) AXSSDialectMap *defaultDialect;
@property (retain, nonatomic) AXSSDialectMap *userLocaleDialect;

/* instance methods */
- (id)initWithLanguageID:(id)id isWestern:(BOOL)western isAmbiguous:(BOOL)ambiguous isRTL:(BOOL)rtl dialects:(id)dialects alternateLanguageIDs:(id)ids associatedAmbiguousLanguages:(id)languages;
- (id)description;
- (id)dialectWithLocaleIdentifier:(id)identifier;
- (BOOL)isWestern;
- (BOOL)isRTL;
- (BOOL)isAmbiguous;
@end

#endif /* AXSSLanguageMap_h */
