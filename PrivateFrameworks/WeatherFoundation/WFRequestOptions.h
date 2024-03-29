//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFRequestOptions_h
#define WFRequestOptions_h
@import Foundation;

@class NSMutableDictionary;

@interface WFRequestOptions : NSObject

@property (readonly, nonatomic) NSMutableDictionary *httpHeaderDictionary;

/* instance methods */
- (void)addHttpHeaderField:(id)field withValue:(id)value;
@end

#endif /* WFRequestOptions_h */
