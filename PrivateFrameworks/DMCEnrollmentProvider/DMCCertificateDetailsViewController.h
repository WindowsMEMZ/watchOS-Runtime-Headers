//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCCertificateDetailsViewController_h
#define DMCCertificateDetailsViewController_h
@import Foundation;

#include "DMCProfileTableViewController.h"

@class NSArray;

@interface DMCCertificateDetailsViewController : DMCProfileTableViewController

@property (retain, nonatomic) id certificateTrust;
@property (retain, nonatomic) NSArray *keyValueSections;
@property (retain, nonatomic) NSArray *keyValueSectionTitles;

/* instance methods */
- (id)init;
- (id)initWithStyle:(long long)style;
- (id)initWithCertificate:(struct __SecCertificate *)certificate;
- (id)initWithCertificateProperties:(id)properties;
- (id)initWithTrust:(struct __SecTrust *)trust;
- (void)_setup;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (double)tableView:(id)view estimatedHeightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view titleForHeaderInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
@end

#endif /* DMCCertificateDetailsViewController_h */
