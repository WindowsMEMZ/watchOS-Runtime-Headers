//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TICompositionMapItem_h
#define TICompositionMapItem_h
@import Foundation;

@class NSString;

@interface TICompositionMapItem : NSObject

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *value;

/* class methods */
+ (id)itemWithKey:(id)key value:(id)value;

/* instance methods */
- (id)initWithKey:(id)key value:(id)value;
@end

#endif /* TICompositionMapItem_h */
