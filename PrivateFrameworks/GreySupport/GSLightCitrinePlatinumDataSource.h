//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.0.4.0.0
//
#ifndef GSLightCitrinePlatinumDataSource_h
#define GSLightCitrinePlatinumDataSource_h
@import Foundation;

#include "GSDataSource.h"
#include "GSHealthLiteDataSource.h"

@class NSDictionary, NSSet;

@interface GSLightCitrinePlatinumDataSource : GSDataSource {
  /* instance variables */
  NSSet *_channels;
}

@property (retain, nonatomic) GSHealthLiteDataSource *healthLiteDataSource;
@property (retain, nonatomic) NSDictionary *modelInputIndexToChannelName;

/* class methods */
+ (id)title;

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration;
- (id)channels;
- (id)writerTrigger;
- (void)setWriterTrigger:(id)trigger;
- (BOOL)_canStreamData;
- (BOOL)_startStreamingData;
- (void)_stopStreamingData;
- (void)_handleInputData:(id)data source:(id)source;
- (void)_didReceiveElement:(id)element;
@end

#endif /* GSLightCitrinePlatinumDataSource_h */
