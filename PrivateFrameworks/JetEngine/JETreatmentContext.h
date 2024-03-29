//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7.2.9.0.0
//
#ifndef JETreatmentContext_h
#define JETreatmentContext_h
@import Foundation;

#include "JETreatment.h"

@class NSDictionary;

@interface JETreatmentContext : NSObject {
  /* instance variables */
  JETreatment *_treatment;
  NSDictionary *_metrics;
}

/* instance methods */
- (id)initWithTreatment:(id)treatment metrics:(id)metrics;
@end

#endif /* JETreatmentContext_h */
