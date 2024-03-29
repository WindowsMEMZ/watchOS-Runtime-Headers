//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPRecordLoadingDelegate_h
#define PPRecordLoadingDelegate_h
@import Foundation;

@class NSString;

@interface PPRecordLoadingDelegate : NSObject

@property (readonly, nonatomic) NSString *name;

/* instance methods */
- (id)initWithName:(id)name;
- (id)description;
- (unsigned char)recordLoadingSetup;
- (unsigned char)recordLoadingHandler:(id)handler;
- (void)recordLoadingCompletion;
- (unsigned char)recentRecordLoadingSetup;
- (unsigned char)recentRecordLoadingHandler:(id)handler;
- (void)recentRecordLoadingCompletion;
- (void)resetRecordData;
@end

#endif /* PPRecordLoadingDelegate_h */
