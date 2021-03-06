//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

@class NSDate, NSDateComponents;

@interface PHAssetCollection (Clouseau)
- (id)_fetchFirstAssetSortedByCreationDateAscending:(BOOL)arg1;
- (id)_legacyLocalEndDate;
- (id)_legacyLocalStartDate;
- (id)_legacyUniversalEndDate;
- (id)_legacyUniversalStartDate;
- (id)_legacyLocalEndDateComponents;
- (id)_legacyLocalStartDateComponents;
@property(readonly, nonatomic) NSDate *cls_localEndDate;
@property(readonly, nonatomic) NSDate *cls_localStartDate;
@property(readonly, nonatomic) NSDate *cls_universalEndDate;
@property(readonly, nonatomic) NSDate *cls_universalStartDate;
@property(readonly, nonatomic) NSDateComponents *cls_localEndDateComponents;
@property(readonly, nonatomic) NSDateComponents *cls_localStartDateComponents;
@end

