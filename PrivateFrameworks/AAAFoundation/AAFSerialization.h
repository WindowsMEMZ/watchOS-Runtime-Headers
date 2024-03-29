//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 54.1.2.0.0
//
#ifndef AAFSerialization_h
#define AAFSerialization_h
@import Foundation;

@class NSDictionary;

@interface AAFSerialization : NSObject {
  /* instance variables */
  NSDictionary *_serializersByType;
}

/* class methods */
+ (id)dictionaryFromObject:(id)object ofType:(id)type;
+ (id)dataFromDictionary:(id)dictionary ofType:(id)type;
+ (id)stringFromDictionary:(id)dictionary ofType:(id)type;
+ (id)ofType:(id)type;
+ (id)instance;

/* instance methods */
- (id)init;
- (id)serializerOfType:(id)type;
- (void)addSerializer:(id)serializer;
@end

#endif /* AAFSerialization_h */
