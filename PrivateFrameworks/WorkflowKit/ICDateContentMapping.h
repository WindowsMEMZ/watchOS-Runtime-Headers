//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef ICDateContentMapping_h
#define ICDateContentMapping_h
@import Foundation;

#include "ICContentMapping.h"

@class NSDateFormatter;

@interface ICDateContentMapping : ICContentMapping

@property (retain, nonatomic) NSDateFormatter *dateFormatter;

/* instance methods */
- (id)initWithDefinition:(id)definition;
- (void)getStringRepresentation:(id /* block */)representation withInput:(id)input parameters:(id)parameters;
@end

#endif /* ICDateContentMapping_h */
