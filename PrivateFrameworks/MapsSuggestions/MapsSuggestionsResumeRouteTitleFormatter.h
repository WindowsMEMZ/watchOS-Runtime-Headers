//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsResumeRouteTitleFormatter_h
#define MapsSuggestionsResumeRouteTitleFormatter_h
@import Foundation;

#include "MapsSuggestionsBaseTitleFormatter.h"
#include "MapsSuggestionsETAChargeTitleFormatter-Protocol.h"

@class NSString;

@interface MapsSuggestionsResumeRouteTitleFormatter : MapsSuggestionsBaseTitleFormatter<MapsSuggestionsETAChargeTitleFormatter>

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)formatTitlesForEntry:(id)entry eta:(id)eta requiredChargeLevel:(id)level currentChargeLevel:(id)level;
@end

#endif /* MapsSuggestionsResumeRouteTitleFormatter_h */
