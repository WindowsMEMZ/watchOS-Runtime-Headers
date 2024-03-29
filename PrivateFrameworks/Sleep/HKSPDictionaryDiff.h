//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPDictionaryDiff_h
#define HKSPDictionaryDiff_h
@import Foundation;

@class NSDictionary, NSSet;

@interface HKSPDictionaryDiff : NSObject

@property (readonly, nonatomic) NSDictionary *updatedProperties;
@property (readonly, nonatomic) NSSet *removedKeys;
@property (readonly, nonatomic) BOOL equalDictionaries;

/* instance methods */
- (id)initWithOriginalDictionary:(id)dictionary updatedDictionary:(id)dictionary keysToDiff:(id)diff;
@end

#endif /* HKSPDictionaryDiff_h */
