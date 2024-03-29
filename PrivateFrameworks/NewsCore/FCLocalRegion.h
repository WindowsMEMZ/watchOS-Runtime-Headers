//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCLocalRegion_h
#define FCLocalRegion_h
@import Foundation;

@class NSArray, NSMutableSet, NSString;

@interface FCLocalRegion : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableSet *areas;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rect;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *autoFavoriteTagIDs;
@property (readonly, nonatomic) NSArray *localVersionedTagIDs;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)addLocalArea:(id)area;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForEntireRegion;
- (struct CLLocationCoordinate2D { double x0; double x1; })centerLocationCoordinateForEntireRegion;
@end

#endif /* FCLocalRegion_h */
