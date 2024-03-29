//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NENexusBrowse_h
#define NENexusBrowse_h
@import Foundation;

@class NSUUID, NWBrowseDescriptor, NWParameters;

@interface NENexusBrowse : NSObject

@property (retain, nonatomic) NWBrowseDescriptor *descriptor;
@property (retain, nonatomic) NWParameters *parameters;
@property (retain, nonatomic) NSUUID *clientIdentifier;

/* instance methods */
@end

#endif /* NENexusBrowse_h */
