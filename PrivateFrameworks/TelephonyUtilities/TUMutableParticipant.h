//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUMutableParticipant_h
#define TUMutableParticipant_h
@import Foundation;

#include "TUParticipant.h"

@class NSString, NSURL;

@interface TUMutableParticipant : TUParticipant

@property (retain, @dynamic, nonatomic) NSURL *imageURL;
@property (copy, @dynamic, nonatomic) NSString *name;

@end

#endif /* TUMutableParticipant_h */
