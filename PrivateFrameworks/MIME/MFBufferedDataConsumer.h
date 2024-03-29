//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFBufferedDataConsumer_h
#define MFBufferedDataConsumer_h
@import Foundation;

#include "MFGuaranteedCollectingDataConsumer-Protocol.h"

@class NSMutableData, NSString;

@interface MFBufferedDataConsumer : NSObject<MFGuaranteedCollectingDataConsumer> {
  /* instance variables */
  NSMutableData *_data;
  int _fd;
  NSString *_path;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)data;
- (long long)appendData:(id)data;
- (void)done;
@end

#endif /* MFBufferedDataConsumer_h */
