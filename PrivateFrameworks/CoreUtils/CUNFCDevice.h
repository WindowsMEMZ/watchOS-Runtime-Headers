//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CUNFCDevice_h
#define CUNFCDevice_h
@import Foundation;

@class NSURL, NSUUID;

@interface CUNFCDevice : NSObject

@property (copy, nonatomic) NSURL *advertisedURI;
@property (copy, nonatomic) NSUUID *identifier;

/* instance methods */
@end

#endif /* CUNFCDevice_h */
