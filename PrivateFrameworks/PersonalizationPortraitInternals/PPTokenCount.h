//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPTokenCount_h
#define PPTokenCount_h
@import Foundation;

@class NSString;

@interface PPTokenCount : NSObject

@property (retain, nonatomic) NSString *token;
@property (nonatomic) unsigned int count;

/* instance methods */
- (id)initWithToken:(id)token count:(unsigned int)count;
@end

#endif /* PPTokenCount_h */
