//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVOutputDeviceFrecentsReading_Protocol_h
#define AVOutputDeviceFrecentsReading_Protocol_h
@import Foundation;

@protocol AVOutputDeviceFrecentsReading <NSObject>

@property (readonly, nonatomic) NSArray *deviceIDs;

/* instance methods */
- (id)frecencyInfoForDeviceWithID:(id)id;
@end

#endif /* AVOutputDeviceFrecentsReading_Protocol_h */
