//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICMediaAPIURLMapping_h
#define ICMediaAPIURLMapping_h
@import Foundation;

@class NSDictionary, NSString;

@interface ICMediaAPIURLMapping : NSObject {
  /* instance variables */
  NSDictionary *_responseDictionary;
}

@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, copy, nonatomic) NSString *pattern;

/* instance methods */
- (id)initWithResponseDictionary:(id)dictionary;
@end

#endif /* ICMediaAPIURLMapping_h */
