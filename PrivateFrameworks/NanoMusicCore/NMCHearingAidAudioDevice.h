//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMCHearingAidAudioDevice_h
#define NMCHearingAidAudioDevice_h
@import Foundation;

@class NSString;

@interface NMCHearingAidAudioDevice : NSObject

@property (nonatomic) BOOL transferring;
@property (readonly, copy, nonatomic) NSString *name;

/* instance methods */
- (id)initWithName:(id)name;
- (void)connect;
- (BOOL)isTransferring;
@end

#endif /* NMCHearingAidAudioDevice_h */
