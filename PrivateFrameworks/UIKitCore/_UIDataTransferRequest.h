//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDataTransferRequest_h
#define _UIDataTransferRequest_h
@import Foundation;

#include "NSProgressReporting-Protocol.h"

@class NSItemProvider, NSProgress, NSString, NSUUID;

@interface _UIDataTransferRequest : NSObject<NSProgressReporting>

@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
@end

#endif /* _UIDataTransferRequest_h */
