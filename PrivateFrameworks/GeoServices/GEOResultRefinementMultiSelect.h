//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOResultRefinementMultiSelect_h
#define GEOResultRefinementMultiSelect_h
@import Foundation;

@class NSArray, NSString;

@interface GEOResultRefinementMultiSelect : NSObject

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *multiSelect;
@property (nonatomic) unsigned int maximumNumberOfSelectElements;
@property (nonatomic) long long clauseType;
@property (readonly, nonatomic) BOOL showEqualWidthButtonsOnFilterView;
@property (readonly, nonatomic) NSString *displayNameForMultiSelected;
@property (readonly, nonatomic) NSString *multiSelectIdentifier;

/* instance methods */
- (id)initWithDisplayName:(id)name multiSelect:(id)select maximumNumberOfSelectElements:(unsigned int)elements clauseType:(long long)type showEqualWidthButtonsOnFilterView:(BOOL)view displayNameForMultiSelected:(id)selected multiSelectIdentifier:(id)identifier;
- (id)initWithResultRefinementMultiSelect:(id)select;
- (id)convertToGEOPDResultRefinementMultiSelect;
@end

#endif /* GEOResultRefinementMultiSelect_h */
