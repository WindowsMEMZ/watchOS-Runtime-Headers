//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICMusicRestoreBagConfiguration_h
#define ICMusicRestoreBagConfiguration_h
@import Foundation;

@class NSArray, NSURL;

@interface ICMusicRestoreBagConfiguration : NSObject

@property (readonly, copy, nonatomic) NSArray *allowedKinds;
@property (readonly, copy, nonatomic) NSArray *allowedMatchStatus;
@property (readonly, copy, nonatomic) NSURL *restoreURL;
@property (readonly, nonatomic) BOOL shouldGZip;

/* instance methods */
- (id)initWithServerConfiguration:(id)configuration;
@end

#endif /* ICMusicRestoreBagConfiguration_h */
