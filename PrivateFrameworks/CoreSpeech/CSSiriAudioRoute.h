//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSSiriAudioRoute_h
#define CSSiriAudioRoute_h
@import Foundation;

@class NSString;

@interface CSSiriAudioRoute : NSObject

@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) NSString *uid;
@property (readonly, nonatomic) BOOL isBluetooth;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSString *destination;

/* instance methods */
- (id)initWithAudioDeviceID:(unsigned int)id;
@end

#endif /* CSSiriAudioRoute_h */
