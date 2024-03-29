//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRAVDiscoverySessionHelper_h
#define MRAVDiscoverySessionHelper_h
@import Foundation;

@interface MRAVDiscoverySessionHelper : NSObject {
  /* instance variables */
  unsigned long long _discoverySessionFeatures;
}

/* instance methods */
- (id)initWithFeatures:(unsigned long long)features;
- (void)searchAVOutputDeviceForUID:(id)uid timeout:(double)timeout identifier:(id)identifier reason:(id)reason completion:(id /* block */)completion;
- (id)createDiscoverySession;
@end

#endif /* MRAVDiscoverySessionHelper_h */
