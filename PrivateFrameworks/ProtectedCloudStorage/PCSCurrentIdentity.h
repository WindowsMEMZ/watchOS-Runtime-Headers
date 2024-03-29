//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 976.40.4.0.0
//
#ifndef PCSCurrentIdentity_h
#define PCSCurrentIdentity_h
@import Foundation;

@class NSDate;

@interface PCSCurrentIdentity : NSObject

@property struct _PCSIdentityData * identity;
@property (retain) NSDate *currentItemPointerModificationTime;

/* instance methods */
- (id)initWithIdentity:(struct _PCSIdentityData *)identity currentItemPointerModificationTime:(id)time;
- (void)dealloc;
@end

#endif /* PCSCurrentIdentity_h */
