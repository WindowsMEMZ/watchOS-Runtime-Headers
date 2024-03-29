//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNContactImageManagedObject_h
#define CNContactImageManagedObject_h
@import Foundation;

#include "NSManagedObject.h"
#include "CNContactPosterManagedObject.h"

@class NSData, NSDate, NSNumber, NSString, NSUUID;

@interface CNContactImageManagedObject : NSManagedObject

@property (retain, @dynamic, nonatomic) NSUUID *identifier;
@property (retain, @dynamic, nonatomic) NSString *contactIdentifier;
@property (retain, @dynamic, nonatomic) NSData *imageData;
@property (retain, @dynamic, nonatomic) NSDate *lastUsedDate;
@property (retain, @dynamic, nonatomic) NSString *cropRectString;
@property (retain, @dynamic, nonatomic) NSString *displayString;
@property (@dynamic, nonatomic) BOOL ignoredForRevert;
@property (retain, @dynamic, nonatomic) NSNumber *source;
@property (retain, @dynamic, nonatomic) NSString *sourceIdentifier;
@property (retain, @dynamic, nonatomic) NSString *variant;
@property (retain, @dynamic, nonatomic) NSData *poseConfigurationData;
@property (retain, @dynamic, nonatomic) NSData *visualFingerprintData;
@property (retain, @dynamic, nonatomic) CNContactPosterManagedObject *pairedPoster;

/* class methods */
+ (id /* block */)managedObjectToContactImageTransform;

/* instance methods */
- (void)updateWithContactImage:(id)image;
- (void)updateWithContactImage:(id)image pairedPoster:(id)poster;
- (void)setupWithContactImage:(id)image contactIdentifier:(id)identifier;
- (void)setupWithContactImage:(id)image pairedPoster:(id)poster contactIdentifier:(id)identifier;
- (id)cropRectStringFromCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cgrect;
@end

#endif /* CNContactImageManagedObject_h */
