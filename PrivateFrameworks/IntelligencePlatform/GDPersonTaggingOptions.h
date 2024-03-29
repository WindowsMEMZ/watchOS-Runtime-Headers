//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 75.3.6.0.1
//
#ifndef GDPersonTaggingOptions_h
#define GDPersonTaggingOptions_h
@import Foundation;

@class GDPersonEntityTaggingOptionsInner, NSDictionary;

@interface GDPersonTaggingOptions : NSObject {
  /* instance variables */
  GDPersonEntityTaggingOptionsInner *inner;
}

@property (retain, nonatomic) NSDictionary *tagThresholds;

/* instance methods */
- (id)initWithTagThresholds:(id)thresholds;
@end

#endif /* GDPersonTaggingOptions_h */
