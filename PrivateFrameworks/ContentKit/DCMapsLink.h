//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef DCMapsLink_h
#define DCMapsLink_h
@import Foundation;

#include "WFNaming-Protocol.h"
#include "WFSerializableContent-Protocol.h"

@class NSString;

@interface DCMapsLink : NSObject<WFSerializableContent, WFNaming>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly, nonatomic) NSString *mkDirectionsMode;
@property (readonly, nonatomic) BOOL canGetDirections;
@property (readonly, nonatomic) unsigned long long directionsTransportType;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } centerCoordinate;
@property (readonly, nonatomic) unsigned long long mkMapType;
@property (readonly, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) NSString *searchNearQuery;
@property (readonly, nonatomic) NSString *searchLocation;
@property (readonly, nonatomic) NSString *startAddress;
@property (readonly, nonatomic) NSString *destinationAddress;
@property (readonly, nonatomic) unsigned long long directionsMode;
@property (readonly, nonatomic) NSString *centerLocation;
@property (readonly, nonatomic) long long zoomLevel;
@property (readonly, nonatomic) unsigned long long mapType;
@property (readonly, nonatomic) BOOL showsTraffic;
@property (readonly, nonatomic) BOOL showsTransit;
@property (readonly, nonatomic) BOOL showsStreetView;
@property (readonly, nonatomic) BOOL showsBicycling;
@property (readonly, nonatomic) NSString *streetViewLocation;

/* class methods */
+ (double)longitudeToPixelSpaceX:(double)x;
+ (double)latitudeToPixelSpaceY:(double)y;
+ (double)pixelSpaceXToLongitude:(double)longitude;
+ (double)pixelSpaceYToLatitude:(double)latitude;
+ (struct { double x0; double x1; })coordinateSpanForMapSize:(struct CGSize { double x0; double x1; })size centeredAtLocation:(struct CLLocationCoordinate2D { double x0; double x1; })location atZoomLevel:(long long)level;
+ (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })coordinateRegionForMapSize:(struct CGSize { double x0; double x1; })size centeredAtLocation:(struct CLLocationCoordinate2D { double x0; double x1; })location atZoomLevel:(long long)level;
+ (void)processLocation:(id)location shiftingIfNecessary:(BOOL)necessary completionHandler:(id /* block */)handler;
+ (void)createMapsLinkWithPlacemark:(id)placemark location:(id)location streetAddress:(id)address shiftingLocationIfNecessary:(BOOL)necessary completionHandler:(id /* block */)handler;
+ (id)objectWithWFSerializedRepresentation:(id)representation;
+ (id)mapsLinkWithURL:(id)url;
+ (BOOL)isMapsURL:(id)url;

/* instance methods */
- (struct CLLocationCoordinate2D { double x0; double x1; })locationCoordinateFromString:(id)string;
- (struct CLLocationCoordinate2D { double x0; double x1; })searchLocationCoordinate;
- (struct CLLocationCoordinate2D { double x0; double x1; })centerLocationCoordinate;
- (struct CLLocationCoordinate2D { double x0; double x1; })streetViewLocationCoordinate;
- (struct { double x0; double x1; })coordinateSpanForMapSize:(struct CGSize { double x0; double x1; })size centeredAtLocation:(struct CLLocationCoordinate2D { double x0; double x1; })location;
- (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })coordinateRegionForMapSize:(struct CGSize { double x0; double x1; })size centeredAtLocation:(struct CLLocationCoordinate2D { double x0; double x1; })location;
- (void)getDirectionsToPlacemark:(id)placemark withCompletionHandler:(id /* block */)handler;
- (void)getDirectionsToPlacemark:(id)placemark fromPlacemark:(id)placemark withCompletionHandler:(id /* block */)handler;
- (void)getDirectionsWithCompletionHandler:(id /* block */)handler;
- (void)getAppleMapsDirectionsURL:(id /* block */)url;
- (id)wfSerializedRepresentation;
- (id)regionCenteredAtLocation:(struct CLLocationCoordinate2D { double x0; double x1; })location;
- (id)region;
- (void)geocodeAddressString:(id)string inRegionIfAvailable:(id)available completionHandler:(id /* block */)handler;
- (void)geocodeDirectionsEndpointsWithCompletionHandler:(id /* block */)handler;
- (id)mapsAppURL;
- (id)googleMapsAppURL;
- (id)transitAppURL;
- (id)wazeAppURL;
- (id)baiduMapsAppURL;
- (void)getCitymapperAppURL:(id /* block */)url;
@end

#endif /* DCMapsLink_h */
