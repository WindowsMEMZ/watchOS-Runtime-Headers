//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MusicKit_SoftLinking_DeviceLocalID_h
#define MusicKit_SoftLinking_DeviceLocalID_h
@import Foundation;

@class NSString;

@interface MusicKit_SoftLinking_DeviceLocalID : NSObject

@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) NSString *databaseID;

/* instance methods */
- (id)initWithValue:(id)value databaseID:(id)id;
- (id)description;
@end

#endif /* MusicKit_SoftLinking_DeviceLocalID_h */
