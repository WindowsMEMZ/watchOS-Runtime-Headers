//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIWebFormDelegateEditedFormsMap_h
#define _UIWebFormDelegateEditedFormsMap_h
@import Foundation;

@class NSMutableArray, NSMutableDictionary;

@interface _UIWebFormDelegateEditedFormsMap : NSObject {
  /* instance variables */
  NSMutableDictionary *_map;
  NSMutableArray *_lifetimeHelper;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)_keyForWebFrame:(id)frame;
- (id)objectForKey:(id)key;
- (id)allValues;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key;
@end

#endif /* _UIWebFormDelegateEditedFormsMap_h */
