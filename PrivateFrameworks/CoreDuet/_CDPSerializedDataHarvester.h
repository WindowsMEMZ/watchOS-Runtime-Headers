//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDPSerializedDataHarvester_h
#define _CDPSerializedDataHarvester_h
@import Foundation;

#include "_CDPDataHarvester-Protocol.h"

@class NSString, NSURL;

@interface _CDPSerializedDataHarvester : NSObject<_CDPDataHarvester>

@property (retain, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)loadWithLimit:(unsigned long long)limit dataPointReader:(id /* block */)reader completion:(id /* block */)completion;
@end

#endif /* _CDPSerializedDataHarvester_h */
