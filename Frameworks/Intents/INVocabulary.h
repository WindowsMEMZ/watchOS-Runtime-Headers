//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INVocabulary_h
#define INVocabulary_h
@import Foundation;

@interface INVocabulary : NSObject
/* class methods */
+ (id)sharedVocabulary;

/* instance methods */
- (id)init;
- (void)setVocabularyStrings:(id)strings ofType:(long long)type;
- (void)setVocabulary:(id)vocabulary ofType:(long long)type;
- (void)removeAllVocabularyStrings;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
@end

#endif /* INVocabulary_h */
