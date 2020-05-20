//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDisplayCollection-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol PXDisplayAssetCollection <PXDisplayCollection>
@property(readonly, nonatomic) NSUInteger estimatedAssetCount;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSString *localizedSmartDescription;
@property(readonly, nonatomic) NSString *localizedDateDescription;
@property(readonly, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) NSString *localizedDebugDescription;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) long long px_highlightKind;
@property(readonly, nonatomic) unsigned short px_highlightEnrichmentState;
@property(readonly, nonatomic) BOOL isRecent;
@property(readonly, nonatomic) BOOL isAggregation;
@property(readonly, nonatomic) double promotionScore;
@property(readonly, nonatomic) BOOL isEnrichmentComplete;
@property(readonly, nonatomic) BOOL isEnriched;
- (NSString *)localizedDateDescriptionWithOptions:(NSUInteger)arg1;
@end

