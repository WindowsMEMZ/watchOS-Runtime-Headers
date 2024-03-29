//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNVCardActivityAlertSerialization_h
#define CNVCardActivityAlertSerialization_h
@import Foundation;

@interface CNVCardActivityAlertSerialization : NSObject
/* class methods */
+ (id)stringWithType:(id)type info:(id)info;
+ (id)dictionaryWithType:(id)type info:(id)info;
+ (void)parseString:(id)string intoTypeAndInfo:(id /* block */)info;
+ (id)activityAlertWithString:(id)string;
+ (id)typeFromDictionary:(id)dictionary;
+ (id)infoFromDictionary:(id)dictionary;
@end

#endif /* CNVCardActivityAlertSerialization_h */
