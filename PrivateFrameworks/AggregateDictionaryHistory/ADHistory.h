//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 442.0.0.0.0
//
#ifndef ADHistory_h
#define ADHistory_h
@import Foundation;

@class NSString;

@interface ADHistory : NSObject

@property (readonly, nonatomic) NSString *path;

/* instance methods */
- (id)initWithPath:(id)path;
- (id)initWithDefaultPath;
- (BOOL)scalarsForKeyPrefix:(id)prefix minDaysSince1970:(int)since1970 maxDaysSince1970:(int)since1970 rowHandler:(id /* block */)handler;
- (BOOL)distributionsForKeyPrefix:(id)prefix minDaysSince1970:(int)since1970 maxDaysSince1970:(int)since1970 rowHandler:(id /* block */)handler;
@end

#endif /* ADHistory_h */
