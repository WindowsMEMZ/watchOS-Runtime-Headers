//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef GEOLPRLPRConvertRule_MNExtras_h
#define GEOLPRLPRConvertRule_MNExtras_h
@import Foundation;

@interface GEOLPRLPRConvertRule (MNExtras)
/* instance methods */
- (BOOL)hasValidDateInterval;
- (id)validDateInterval;
- (id)rules:(id)rules forPlateTypes:(id)types atIndexes:(id)indexes;
- (id)pickupRulesForPlateTypes:(id)types atIndexes:(id)indexes;
- (id)mapRulesForPlateTypes:(id)types atIndexes:(id)indexes;
- (id)fillRulesForPlateTypes:(id)types atIndexes:(id)indexes;
@end

#endif /* GEOLPRLPRConvertRule_MNExtras_h */
