//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REDuetQuery_h
#define REDuetQuery_h
@import Foundation;

@class _DKQuery;

@interface REDuetQuery : NSObject

@property (copy, nonatomic) id /* block */ transformBlock;
@property (retain, nonatomic) _DKQuery *query;
@property (nonatomic) long long offset;

/* instance methods */
@end

#endif /* REDuetQuery_h */
