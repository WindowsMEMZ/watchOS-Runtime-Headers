//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKRouteEtaDescription_h
#define VKRouteEtaDescription_h
@import Foundation;

@class GEOFeatureStyleAttributes, NSString;
@protocol {_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>="_vptr$_retain_ptr"^^?"_obj"@"NSString""_retain"{_retain_objc_arc=}"_release"{_release_objc_arc=}};

@interface VKRouteEtaDescription : NSObject

@property (readonly, nonatomic) NSString *etaText;
@property (readonly, nonatomic) unsigned char glyphType;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic) long long routeEtaType;

/* instance methods */
- (id)initWithEtaText:(id)text glyphType:(unsigned char)type;
- (id)initWithEtaText:(id)text;
- (id)initWithEtaText:(id)text etaAdvisoryStyleAttributes:(id)attributes;
- (id)initWithEtaText:(id)text etaAdvisoryFeatureStyleAttributes:(id)attributes;
- (id)initWithEtaText:(id)text etaAdvisoryStyleAttributes:(id)attributes routeEtaType:(long long)type;
- (id)initWithEtaText:(id)text etaAdvisoryFeatureStyleAttributes:(id)attributes routeEtaType:(long long)type;
- (id)_initWithEtaText:(id)text styleAttributes:(id)attributes routeEtaType:(long long)type;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (long long)compare:(id)compare;
@end

#endif /* VKRouteEtaDescription_h */
