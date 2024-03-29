//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsPredictor_Protocol_h
#define MapsSuggestionsPredictor_Protocol_h
@import Foundation;

#include "MapsSuggestionsPredictor-Protocol.h"
#include "MapsSuggestionsSignalPackCache.h"

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@protocol MapsSuggestionsPredictor <NSObject, MapsSuggestionsObject>
/* instance methods */
- (BOOL)predictedTransportModeForDestinationMapItem:(id)item originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate handler:(id /* block */)handler;
- (BOOL)predictedTransportModeForDestinationEntry:(id)entry originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate handler:(id /* block */)handler;
@optional
/* instance methods */
- (void)captureActualTransportationMode:(int)mode originMapItem:(id)item destinationMapItem:(id)item;
- (void)capturePredictedTransportationMode:(int)mode;
- (void)cancelCapturingAnalytics;
@end

#endif /* MapsSuggestionsPredictor_Protocol_h */
