//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 162.13.0.0.0
//
#ifndef SNCustomTwoPassRequest_h
#define SNCustomTwoPassRequest_h
@import Foundation;

#include "SNTwoPassConfiguration.h"
#include "SNTwoPassRequest-Protocol.h"

@class NSString;

@interface SNCustomTwoPassRequest : NSObject<SNTwoPassRequest> {
  /* instance variables */
  id /* block */ _createSecondPassControllerFunction;
}

@property (readonly) SNTwoPassConfiguration *twoPassConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)createSecondPassController;
@end

#endif /* SNCustomTwoPassRequest_h */
