//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef NSCoder_LaunchServicesAdditions_h
#define NSCoder_LaunchServicesAdditions_h
@import Foundation;

@interface NSCoder (LaunchServicesAdditions)
/* instance methods */
- (id)ls_decodeObjectOfClass:(Class)class forKey:(id)key;
- (id)ls_decodeObjectOfClasses:(id)classes forKey:(id)key;
- (id)ls_decodeArrayWithValuesOfClass:(Class)class forKey:(id)key;
- (id)ls_decodeSetWithValuesOfClass:(Class)class forKey:(id)key;
- (id)ls_decodeDictionaryWithKeysOfClass:(Class)class valuesOfClass:(Class)class forKey:(id)key;
- (id)ls_decodeDictionaryWithKeysOfClass:(Class)class valuesOfClasses:(id)classes forKey:(id)key;
@end

#endif /* NSCoder_LaunchServicesAdditions_h */
