//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCCertificateProperties_h
#define DMCCertificateProperties_h
@import Foundation;

@class NSArray;

@interface DMCCertificateProperties : NSObject

@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *sectionTitles;
@property (retain, nonatomic) NSArray *keyValueSections;

/* class methods */
+ (id)sendablePropertiesFromProperties:(id)properties;
+ (id)_sendablePropertyFromProperty:(id)property;

/* instance methods */
- (id)initWithCertificate:(struct __SecCertificate *)certificate;
- (id)initWithCertificateProperties:(id)properties;
- (id)initWithTrust:(struct __SecTrust *)trust;
- (void)_setup:(id)_setup;
- (id)_cellInfosForSection:(id)section;
- (id)_sectionInfoForCertSection:(id)section title:(id)title;
- (id)_sectionsFromProperties:(id)properties;
- (id)_copyPropertiesFromTrust:(struct __SecTrust *)trust;
- (id)_sendablePropertiesFromTrust:(struct __SecTrust *)trust;
@end

#endif /* DMCCertificateProperties_h */
