//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHMutableFetchDictionaryAccessing_Protocol_h
#define PHMutableFetchDictionaryAccessing_Protocol_h
@import Foundation;

@protocol PHMutableFetchDictionaryAccessing <PHFetchDictionaryAccessing>
/* instance methods */
- (void)removeObjectForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
@end

#endif /* PHMutableFetchDictionaryAccessing_Protocol_h */
