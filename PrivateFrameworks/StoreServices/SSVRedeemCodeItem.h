//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVRedeemCodeItem_h
#define SSVRedeemCodeItem_h
@import Foundation;

@class NSDictionary, NSMutableDictionary;

@interface SSVRedeemCodeItem : NSObject {
  /* instance variables */
  NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) NSDictionary *redeemCodeDictionary;
@property (readonly, nonatomic) long long itemIdentifier;

/* instance methods */
- (id)initWithLookupItem:(id)item;
- (id)initWithRedeemCodeDictionary:(id)dictionary;
@end

#endif /* SSVRedeemCodeItem_h */
