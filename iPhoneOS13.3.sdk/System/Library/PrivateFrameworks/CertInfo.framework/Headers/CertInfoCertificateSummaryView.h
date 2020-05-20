//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>


@class CertInfoCertificateHeaderCell, CertInfoCertificateSummaryDescriptionCell, NSDate, NSString, UITableView;

@interface CertInfoCertificateSummaryView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    NSString *_trustTitle;
    NSString *_trustSubtitle;
    NSString *_purpose;
    NSDate *_expirationDate;
    id /* CDUnknownBlockType */ _moreDetailsSelectedBlock;
    CertInfoCertificateHeaderCell *_headerCell;
    CertInfoCertificateSummaryDescriptionCell *_descriptionCell;
}

@property(retain, nonatomic) CertInfoCertificateSummaryDescriptionCell *descriptionCell; // @synthesize descriptionCell=_descriptionCell;
@property(retain, nonatomic) CertInfoCertificateHeaderCell *headerCell; // @synthesize headerCell=_headerCell;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *purpose; // @synthesize purpose=_purpose;
@property(retain, nonatomic) NSString *trustSubtitle; // @synthesize trustSubtitle=_trustSubtitle;
@property(retain, nonatomic) NSString *trustTitle; // @synthesize trustTitle=_trustTitle;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
// - (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_configureCell:(id)arg1;
- (id)_cellForReuseIdentifier:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setMoreDetailsSelectedBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

