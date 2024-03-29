//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1232.2.3.0.0
//
#ifndef CalExchangeSerializable_Protocol_h
#define CalExchangeSerializable_Protocol_h
@import Foundation;

@protocol CalExchangeSerializable <NSObject>
/* class methods */
+ (id)externalRepresentationDataWithDictionary:(id)dictionary;
+ (id)dictionaryWithExternalRepresentationData:(id)data;
@end

#endif /* CalExchangeSerializable_Protocol_h */
