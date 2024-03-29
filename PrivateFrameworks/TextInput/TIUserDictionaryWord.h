//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIUserDictionaryWord_h
#define TIUserDictionaryWord_h
@import Foundation;

@interface TIUserDictionaryWord : NSObject
/* class methods */
+ (id)managedObjectModelURL;
+ (long long)validateTransaction:(id)transaction existingEntries:(id)entries;
+ (BOOL)userWord:(id)word duplicatesTarget:(id)target andShortcut:(id)shortcut;
@end

#endif /* TIUserDictionaryWord_h */
