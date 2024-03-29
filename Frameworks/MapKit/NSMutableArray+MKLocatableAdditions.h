//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef NSMutableArray_MKLocatableAdditions_h
#define NSMutableArray_MKLocatableAdditions_h
@import Foundation;

@interface NSMutableArray (MKLocatableAdditions)
/* instance methods */
- (id)_mapkit_popLastObject;
- (void)_mapkit_sortUsingLatitude;
- (void)_mapkit_sortUsingLatitudeAscending:(BOOL)ascending;
- (void)_mapkit_sortUsingLongitude;
- (void)_mapkit_sortUsingLongitudeAscending:(BOOL)ascending;
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate ascending:(BOOL)ascending;
- (void)_mapkit_insertObject:(id)object sortedUsingSelector:(SEL)selector;
@end

#endif /* NSMutableArray_MKLocatableAdditions_h */
