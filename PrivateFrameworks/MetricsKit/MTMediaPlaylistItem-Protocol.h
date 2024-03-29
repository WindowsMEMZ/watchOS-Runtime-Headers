//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTMediaPlaylistItem_Protocol_h
#define MTMediaPlaylistItem_Protocol_h
@import Foundation;

@protocol MTMediaPlaylistItem <NSObject>

@property (readonly, nonatomic) unsigned long long startOverallPosition;
@property (readonly, nonatomic) unsigned long long overallPosition;
@property (readonly, nonatomic) unsigned long long startPosition;
@property (readonly, nonatomic) NSArray *eventData;

@end

#endif /* MTMediaPlaylistItem_Protocol_h */
