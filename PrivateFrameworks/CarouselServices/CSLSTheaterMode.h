//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSTheaterMode_h
#define CSLSTheaterMode_h
@import Foundation;

#include "CSLSSystemStateInterface-Protocol.h"

@protocol CSLSTheaterModeDelegate;

@interface CSLSTheaterMode : NSObject {
  /* instance variables */
  NSObject<CSLSSystemStateInterface> *_theaterModeInterface;
}

@property (nonatomic) BOOL enabled;
@property (weak, nonatomic) NSObject<CSLSTheaterModeDelegate> *delegate;

/* instance methods */
- (id)init;
- (id)initWithDelegate:(id)delegate;
- (BOOL)isEnabled;
@end

#endif /* CSLSTheaterMode_h */
